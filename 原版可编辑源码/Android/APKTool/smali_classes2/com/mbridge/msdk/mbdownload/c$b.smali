.class final Lcom/mbridge/msdk/mbdownload/c$b;
.super Landroid/os/Handler;
.source "DownloadProvider.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbdownload/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "b"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbdownload/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbdownload/c;)V
    .locals 0

    .line 517
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/c$b;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 9

    .line 522
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/mbdownload/c;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "IncomingHandler(msg.what:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Landroid/os/Message;->what:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " msg.arg1:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Landroid/os/Message;->arg1:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " msg.arg2:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p1, Landroid/os/Message;->arg2:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " msg.replyTo:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p1, Landroid/os/Message;->replyTo:Landroid/os/Messenger;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 524
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x4

    if-eq v0, v1, :cond_0

    .line 580
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    goto/16 :goto_2

    .line 526
    :cond_0
    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object v0

    .line 527
    sget-object v2, Lcom/mbridge/msdk/mbdownload/c;->a:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "IncomingHandler(msg.getData():"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "mComponentName"

    .line 1376
    invoke-virtual {v0, v2}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-string v2, "mTitle"

    .line 1377
    invoke-virtual {v0, v2}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v2, "mUrl"

    .line 1378
    invoke-virtual {v0, v2}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    const-string v2, "uniqueKey"

    .line 1379
    invoke-virtual {v0, v2}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string v2, "mOnGoingStatus"

    .line 1380
    invoke-virtual {v0, v2}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v8

    .line 1381
    new-instance v2, Lcom/mbridge/msdk/mbdownload/b$a;

    move-object v3, v2

    invoke-direct/range {v3 .. v8}, Lcom/mbridge/msdk/mbdownload/b$a;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    const-string v3, "mMd5"

    .line 1382
    invoke-virtual {v0, v3}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v2, Lcom/mbridge/msdk/mbdownload/b$a;->e:Ljava/lang/String;

    const-string v3, "mTargetMd5"

    .line 1383
    invoke-virtual {v0, v3}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v2, Lcom/mbridge/msdk/mbdownload/b$a;->f:Ljava/lang/String;

    const-string v3, "mReqClz"

    .line 1384
    invoke-virtual {v0, v3}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v2, Lcom/mbridge/msdk/mbdownload/b$a;->a:Ljava/lang/String;

    const-string v3, "succUrls"

    .line 1385
    invoke-virtual {v0, v3}, Landroid/os/Bundle;->getStringArray(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v3

    iput-object v3, v2, Lcom/mbridge/msdk/mbdownload/b$a;->k:[Ljava/lang/String;

    const-string v3, "faiUrls"

    .line 1386
    invoke-virtual {v0, v3}, Landroid/os/Bundle;->getStringArray(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v3

    iput-object v3, v2, Lcom/mbridge/msdk/mbdownload/b$a;->m:[Ljava/lang/String;

    const-string v3, "startUrls"

    .line 1387
    invoke-virtual {v0, v3}, Landroid/os/Bundle;->getStringArray(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v3

    iput-object v3, v2, Lcom/mbridge/msdk/mbdownload/b$a;->n:[Ljava/lang/String;

    const-string v3, "pauseUrls"

    .line 1388
    invoke-virtual {v0, v3}, Landroid/os/Bundle;->getStringArray(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v3

    iput-object v3, v2, Lcom/mbridge/msdk/mbdownload/b$a;->o:[Ljava/lang/String;

    const-string v3, "cancelUrls"

    .line 1389
    invoke-virtual {v0, v3}, Landroid/os/Bundle;->getStringArray(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v3

    iput-object v3, v2, Lcom/mbridge/msdk/mbdownload/b$a;->p:[Ljava/lang/String;

    const-string v3, "carryonUrls"

    .line 1390
    invoke-virtual {v0, v3}, Landroid/os/Bundle;->getStringArray(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v3

    iput-object v3, v2, Lcom/mbridge/msdk/mbdownload/b$a;->l:[Ljava/lang/String;

    const-string v3, "rich_notification"

    .line 1391
    invoke-virtual {v0, v3}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v3

    iput-boolean v3, v2, Lcom/mbridge/msdk/mbdownload/b$a;->q:Z

    const-string v3, "mSilent"

    .line 1392
    invoke-virtual {v0, v3}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v3

    iput-boolean v3, v2, Lcom/mbridge/msdk/mbdownload/b$a;->r:Z

    const-string v3, "mWifiOnly"

    .line 1393
    invoke-virtual {v0, v3}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v3

    iput-boolean v3, v2, Lcom/mbridge/msdk/mbdownload/b$a;->s:Z

    const-string v3, "mCanPause"

    .line 1394
    invoke-virtual {v0, v3}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v3

    iput-boolean v3, v2, Lcom/mbridge/msdk/mbdownload/b$a;->i:Z

    const-string v3, "mTargetAppIconUrl"

    .line 1395
    invoke-virtual {v0, v3}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, v2, Lcom/mbridge/msdk/mbdownload/b$a;->j:Ljava/lang/String;

    .line 529
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/c$b;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/c;->a(Lcom/mbridge/msdk/mbdownload/c;)Lcom/mbridge/msdk/mbdownload/e;

    move-result-object v0

    sget-boolean v3, Lcom/mbridge/msdk/mbdownload/c;->b:Z

    iget-object v4, p1, Landroid/os/Message;->replyTo:Landroid/os/Messenger;

    invoke-virtual {v0, v2, v3, v4}, Lcom/mbridge/msdk/mbdownload/e;->a(Lcom/mbridge/msdk/mbdownload/b$a;ZLandroid/os/Messenger;)Z

    move-result v0

    const/4 v3, 0x2

    const/4 v4, 0x0

    if-eqz v0, :cond_3

    .line 530
    sget-object v0, Lcom/mbridge/msdk/mbdownload/c;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, v2, Lcom/mbridge/msdk/mbdownload/b$a;->c:Ljava/lang/String;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " is already in downloading list. "

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 531
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/c$b;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/c;->a(Lcom/mbridge/msdk/mbdownload/c;)Lcom/mbridge/msdk/mbdownload/e;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/mbdownload/e;->a(Lcom/mbridge/msdk/mbdownload/b$a;)I

    move-result v0

    const/4 v1, -0x1

    if-eq v0, v1, :cond_1

    .line 532
    sget-object v1, Lcom/mbridge/msdk/mbdownload/c;->d:Landroid/util/SparseArray;

    invoke-virtual {v1, v0}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/mbdownload/e$b;

    iget-object v1, v1, Lcom/mbridge/msdk/mbdownload/e$b;->a:Lcom/mbridge/msdk/mbdownload/k;

    if-nez v1, :cond_1

    const-string p1, "continue"

    .line 533
    invoke-static {v0, p1}, Lcom/mbridge/msdk/mbdownload/j;->a(ILjava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 534
    new-instance v0, Landroid/content/Intent;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/c$b;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v1}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v1

    const-class v2, Lcom/mbridge/msdk/mbdownload/c;

    invoke-direct {v0, v1, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v1, "com.mbridge.msdk.broadcast.download.msg"

    .line 535
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 536
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/c$b;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/c;->a(Lcom/mbridge/msdk/mbdownload/c;)Lcom/mbridge/msdk/mbdownload/e;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/c$b;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-virtual {p1, v1, v0}, Lcom/mbridge/msdk/mbdownload/e;->a(Lcom/mbridge/msdk/mbdownload/c;Landroid/content/Intent;)Z

    goto :goto_0

    .line 538
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/c$b;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/c$b;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Service;->getBaseContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 539
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/c$b;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/c$b;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v1}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/Service;->getBaseContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/mbdownload/g;->h(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, v4}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 541
    :cond_2
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 542
    iput v3, v0, Landroid/os/Message;->what:I

    .line 543
    iput v3, v0, Landroid/os/Message;->arg1:I

    .line 544
    iput v4, v0, Landroid/os/Message;->arg2:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_3

    .line 546
    :try_start_1
    iget-object p1, p1, Landroid/os/Message;->replyTo:Landroid/os/Messenger;

    invoke-virtual {p1, v0}, Landroid/os/Messenger;->send(Landroid/os/Message;)V
    :try_end_1
    .catch Landroid/os/RemoteException; {:try_start_1 .. :try_end_1} :catch_0
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3

    goto :goto_0

    :catch_0
    move-exception p1

    .line 548
    :try_start_2
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :goto_0
    return-void

    .line 553
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/c$b;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/e;->b(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 554
    sget-object v0, Lcom/mbridge/msdk/mbdownload/c;->c:Ljava/util/Map;

    iget-object v1, p1, Landroid/os/Message;->replyTo:Landroid/os/Messenger;

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 555
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    const/4 v1, 0x1

    .line 556
    iput v1, v0, Landroid/os/Message;->what:I

    .line 557
    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 558
    iput v4, v0, Landroid/os/Message;->arg2:I
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_3

    .line 560
    :try_start_3
    iget-object p1, p1, Landroid/os/Message;->replyTo:Landroid/os/Messenger;

    invoke-virtual {p1, v0}, Landroid/os/Messenger;->send(Landroid/os/Message;)V
    :try_end_3
    .catch Landroid/os/RemoteException; {:try_start_3 .. :try_end_3} :catch_1
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    goto :goto_1

    :catch_1
    move-exception p1

    .line 562
    :try_start_4
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    .line 564
    :goto_1
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/c$b;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {p1, v2}, Lcom/mbridge/msdk/mbdownload/c;->a(Lcom/mbridge/msdk/mbdownload/c;Lcom/mbridge/msdk/mbdownload/b$a;)V

    goto :goto_2

    .line 566
    :cond_4
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/c$b;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/mbdownload/c$b;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v2}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v2

    invoke-virtual {v2}, Landroid/app/Service;->getBaseContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/mbdownload/g;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2, v4}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 567
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 568
    iput v3, v0, Landroid/os/Message;->what:I

    .line 569
    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 570
    iput v4, v0, Landroid/os/Message;->arg2:I
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_3

    .line 572
    :try_start_5
    iget-object p1, p1, Landroid/os/Message;->replyTo:Landroid/os/Messenger;

    invoke-virtual {p1, v0}, Landroid/os/Messenger;->send(Landroid/os/Message;)V
    :try_end_5
    .catch Landroid/os/RemoteException; {:try_start_5 .. :try_end_5} :catch_2
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_3

    goto :goto_2

    :catch_2
    move-exception p1

    .line 574
    :try_start_6
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_3

    goto :goto_2

    :catch_3
    move-exception p1

    .line 583
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_2
    return-void
.end method
