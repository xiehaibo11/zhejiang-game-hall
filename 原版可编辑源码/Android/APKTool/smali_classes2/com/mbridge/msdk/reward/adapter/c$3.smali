.class final Lcom/mbridge/msdk/reward/adapter/c$3;
.super Ljava/lang/Object;
.source "RewardCampaignsResourceManager.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/reward/adapter/c;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/reward/adapter/c$i;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Lcom/mbridge/msdk/reward/adapter/c$i;

.field final synthetic e:Landroid/content/Context;

.field final synthetic f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic g:Lcom/mbridge/msdk/reward/adapter/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/reward/adapter/c;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/reward/adapter/c$i;Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 388
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->g:Lcom/mbridge/msdk/reward/adapter/c;

    iput-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->d:Lcom/mbridge/msdk/reward/adapter/c$i;

    iput-object p6, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->e:Landroid/content/Context;

    iput-object p7, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailed(Ljava/lang/String;Ljava/lang/String;)V
    .locals 13

    const-string v0, "message"

    const-string v1, "url"

    const-string v2, "request_id"

    const-string v3, "unit_id"

    const-string v4, "RewardCampaignsResourceManager"

    const-string v5, "zip btl template download failed"

    .line 462
    invoke-static {v4, v5}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v5, 0x0

    .line 465
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v6

    invoke-virtual {v6, p2, v5}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setZipDownloadDone(Ljava/lang/String;Z)V

    .line 466
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v6

    const/16 v7, 0xcd

    .line 467
    iput v7, v6, Landroid/os/Message;->what:I

    .line 468
    new-instance v7, Landroid/os/Bundle;

    invoke-direct {v7}, Landroid/os/Bundle;-><init>()V

    .line 469
    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->a:Ljava/lang/String;

    invoke-virtual {v7, v3, v8}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 470
    sget-object v8, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v9, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->b:Ljava/lang/String;

    invoke-virtual {v7, v8, v9}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 471
    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->c:Ljava/lang/String;

    invoke-virtual {v7, v2, v8}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 472
    invoke-virtual {v7, v1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 473
    invoke-virtual {v7, v0, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 474
    invoke-virtual {v6, v7}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 475
    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->g:Lcom/mbridge/msdk/reward/adapter/c;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/c;->a(Lcom/mbridge/msdk/reward/adapter/c;)Lcom/mbridge/msdk/reward/adapter/c$h;

    move-result-object v7

    invoke-virtual {v7, v6}, Lcom/mbridge/msdk/reward/adapter/c$h;->sendMessage(Landroid/os/Message;)Z

    .line 477
    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->d:Lcom/mbridge/msdk/reward/adapter/c$i;

    if-eqz v6, :cond_0

    .line 478
    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->d:Lcom/mbridge/msdk/reward/adapter/c$i;

    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->b:Ljava/lang/String;

    iget-object v9, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->a:Ljava/lang/String;

    iget-object v10, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->c:Ljava/lang/String;

    move-object v11, p2

    move-object v12, p1

    invoke-interface/range {v7 .. v12}, Lcom/mbridge/msdk/reward/adapter/c$i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 480
    :cond_0
    new-instance v6, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {v6}, Lcom/mbridge/msdk/foundation/entity/p;-><init>()V

    const-string v7, "2000045"

    .line 481
    invoke-virtual {v6, v7}, Lcom/mbridge/msdk/foundation/entity/p;->o(Ljava/lang/String;)V

    .line 482
    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->e:Landroid/content/Context;

    if-eqz v7, :cond_1

    .line 483
    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->e:Landroid/content/Context;

    invoke-virtual {v7}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v7

    .line 484
    invoke-virtual {v6, v7}, Lcom/mbridge/msdk/foundation/entity/p;->c(I)V

    :cond_1
    const/4 v7, 0x3

    .line 486
    invoke-virtual {v6, v7}, Lcom/mbridge/msdk/foundation/entity/p;->d(I)V

    .line 487
    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v7, :cond_2

    .line 488
    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 489
    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 490
    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 492
    :cond_2
    invoke-virtual {v6, p2}, Lcom/mbridge/msdk/foundation/entity/p;->i(Ljava/lang/String;)V

    .line 493
    invoke-virtual {v6, p1}, Lcom/mbridge/msdk/foundation/entity/p;->p(Ljava/lang/String;)V

    .line 494
    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->a:Ljava/lang/String;

    invoke-virtual {v6, v7}, Lcom/mbridge/msdk/foundation/entity/p;->m(Ljava/lang/String;)V

    .line 495
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v7

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v7

    invoke-static {v7}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/t;

    move-result-object v7

    invoke-virtual {v7, v6}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/entity/p;)J
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v6

    .line 497
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v7

    invoke-virtual {v7, p2, v5}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setZipDownloadDone(Ljava/lang/String;Z)V

    .line 498
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v5

    const/16 v7, 0x69

    .line 499
    iput v7, v5, Landroid/os/Message;->what:I

    .line 500
    new-instance v7, Landroid/os/Bundle;

    invoke-direct {v7}, Landroid/os/Bundle;-><init>()V

    .line 501
    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->a:Ljava/lang/String;

    invoke-virtual {v7, v3, v8}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 502
    sget-object v3, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->b:Ljava/lang/String;

    invoke-virtual {v7, v3, v8}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 503
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->c:Ljava/lang/String;

    invoke-virtual {v7, v2, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 504
    invoke-virtual {v7, v1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 505
    invoke-virtual {v6}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v7, v0, v1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 506
    invoke-virtual {v5, v7}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 507
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->g:Lcom/mbridge/msdk/reward/adapter/c;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/c;->a(Lcom/mbridge/msdk/reward/adapter/c;)Lcom/mbridge/msdk/reward/adapter/c$h;

    move-result-object v0

    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/reward/adapter/c$h;->sendMessage(Landroid/os/Message;)Z

    .line 509
    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->d:Lcom/mbridge/msdk/reward/adapter/c$i;

    if-eqz v7, :cond_3

    .line 510
    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->b:Ljava/lang/String;

    iget-object v9, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->a:Ljava/lang/String;

    iget-object v10, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->c:Ljava/lang/String;

    move-object v11, p2

    move-object v12, p1

    invoke-interface/range {v7 .. v12}, Lcom/mbridge/msdk/reward/adapter/c$i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 512
    :cond_3
    sget-boolean p1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p1, :cond_4

    .line 513
    invoke-virtual {v6}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v4, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    :goto_0
    return-void
.end method

.method public final onSuccess(Ljava/lang/String;)V
    .locals 13

    const-string v0, "2000045"

    const-string v1, "url"

    const-string v2, "request_id"

    const-string v3, "unit_id"

    const-string v4, "RewardCampaignsResourceManager"

    :try_start_0
    const-string v5, "zip btl template download success"

    .line 392
    invoke-static {v4, v5}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 393
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v5

    const/4 v6, 0x1

    invoke-virtual {v5, p1, v6}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setZipDownloadDone(Ljava/lang/String;Z)V

    .line 394
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v5

    const/16 v7, 0x69

    .line 395
    iput v7, v5, Landroid/os/Message;->what:I

    .line 396
    new-instance v7, Landroid/os/Bundle;

    invoke-direct {v7}, Landroid/os/Bundle;-><init>()V

    .line 397
    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->a:Ljava/lang/String;

    invoke-virtual {v7, v3, v8}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 398
    sget-object v8, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v9, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->b:Ljava/lang/String;

    invoke-virtual {v7, v8, v9}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 399
    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->c:Ljava/lang/String;

    invoke-virtual {v7, v2, v8}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 400
    invoke-virtual {v7, v1, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 401
    invoke-virtual {v5, v7}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 402
    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->g:Lcom/mbridge/msdk/reward/adapter/c;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/c;->a(Lcom/mbridge/msdk/reward/adapter/c;)Lcom/mbridge/msdk/reward/adapter/c$h;

    move-result-object v7

    invoke-virtual {v7, v5}, Lcom/mbridge/msdk/reward/adapter/c$h;->sendMessage(Landroid/os/Message;)Z

    .line 403
    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->d:Lcom/mbridge/msdk/reward/adapter/c$i;

    if-eqz v5, :cond_0

    .line 404
    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->d:Lcom/mbridge/msdk/reward/adapter/c$i;

    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->b:Ljava/lang/String;

    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->a:Ljava/lang/String;

    iget-object v9, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->c:Ljava/lang/String;

    invoke-interface {v5, v7, v8, v9, p1}, Lcom/mbridge/msdk/reward/adapter/c$i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 406
    :cond_0
    new-instance v5, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {v5}, Lcom/mbridge/msdk/foundation/entity/p;-><init>()V

    .line 407
    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/p;->o(Ljava/lang/String;)V

    .line 408
    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->e:Landroid/content/Context;

    if-eqz v7, :cond_1

    .line 409
    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->e:Landroid/content/Context;

    invoke-virtual {v7}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v7

    .line 410
    invoke-virtual {v5, v7}, Lcom/mbridge/msdk/foundation/entity/p;->c(I)V

    .line 412
    :cond_1
    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/foundation/entity/p;->d(I)V

    .line 414
    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v6, :cond_2

    .line 415
    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 416
    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 417
    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 420
    :cond_2
    invoke-virtual {v5, p1}, Lcom/mbridge/msdk/foundation/entity/p;->i(Ljava/lang/String;)V

    const-string v6, ""

    .line 421
    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/foundation/entity/p;->p(Ljava/lang/String;)V

    .line 422
    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->a:Ljava/lang/String;

    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/foundation/entity/p;->m(Ljava/lang/String;)V

    .line 423
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v6

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v6

    invoke-static {v6}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/t;

    move-result-object v6

    invoke-virtual {v6, v5}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/entity/p;)J
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto/16 :goto_0

    :catch_0
    move-exception v5

    .line 425
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v6

    const/4 v7, 0x0

    invoke-virtual {v6, p1, v7}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setZipDownloadDone(Ljava/lang/String;Z)V

    .line 426
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v6

    const/16 v7, 0xcd

    .line 427
    iput v7, v6, Landroid/os/Message;->what:I

    .line 428
    new-instance v7, Landroid/os/Bundle;

    invoke-direct {v7}, Landroid/os/Bundle;-><init>()V

    .line 429
    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->a:Ljava/lang/String;

    invoke-virtual {v7, v3, v8}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 430
    sget-object v3, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->b:Ljava/lang/String;

    invoke-virtual {v7, v3, v8}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 431
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->c:Ljava/lang/String;

    invoke-virtual {v7, v2, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 432
    invoke-virtual {v7, v1, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 433
    invoke-virtual {v6, v7}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 434
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->g:Lcom/mbridge/msdk/reward/adapter/c;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/c;->a(Lcom/mbridge/msdk/reward/adapter/c;)Lcom/mbridge/msdk/reward/adapter/c$h;

    move-result-object v1

    invoke-virtual {v1, v6}, Lcom/mbridge/msdk/reward/adapter/c$h;->sendMessage(Landroid/os/Message;)Z

    .line 435
    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->d:Lcom/mbridge/msdk/reward/adapter/c$i;

    if-eqz v7, :cond_3

    .line 436
    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->b:Ljava/lang/String;

    iget-object v9, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->a:Ljava/lang/String;

    iget-object v10, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->c:Ljava/lang/String;

    invoke-virtual {v5}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v12

    move-object v11, p1

    invoke-interface/range {v7 .. v12}, Lcom/mbridge/msdk/reward/adapter/c$i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 438
    :cond_3
    new-instance v1, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {v1}, Lcom/mbridge/msdk/foundation/entity/p;-><init>()V

    .line 439
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/entity/p;->o(Ljava/lang/String;)V

    .line 440
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->e:Landroid/content/Context;

    if-eqz v0, :cond_4

    .line 441
    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v0

    .line 442
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/entity/p;->c(I)V

    :cond_4
    const/4 v0, 0x3

    .line 444
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/entity/p;->d(I)V

    .line 445
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_5

    .line 446
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 447
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 448
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 450
    :cond_5
    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/p;->i(Ljava/lang/String;)V

    .line 451
    invoke-virtual {v5}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/p;->p(Ljava/lang/String;)V

    .line 452
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$3;->a:Ljava/lang/String;

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/p;->m(Ljava/lang/String;)V

    .line 453
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/t;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/entity/p;)J

    .line 454
    sget-boolean p1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p1, :cond_6

    .line 455
    invoke-virtual {v5}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v4, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    :goto_0
    return-void
.end method
