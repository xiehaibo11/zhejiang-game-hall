.class final Lcom/mbridge/msdk/reward/adapter/d$5;
.super Ljava/lang/Object;
.source "RewardMVVideoAdapter.java"

# interfaces
.implements Lcom/mbridge/msdk/reward/adapter/c$i;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/reward/adapter/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:Z

.field final synthetic c:I

.field final synthetic d:Lcom/mbridge/msdk/reward/adapter/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/reward/adapter/d;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZI)V
    .locals 0

    .line 2427
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iput-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-boolean p3, p0, Lcom/mbridge/msdk/reward/adapter/d$5;->b:Z

    iput p4, p0, Lcom/mbridge/msdk/reward/adapter/d$5;->c:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 14

    move-object v1, p0

    const-string v0, "RewardMVVideoAdapter"

    const-string v2, "\u5927\u6a21\u677f\u4e1a\u52a1\uff0c\u5927\u6a21\u677f\u4e0b\u8f7d\u6210\u529f"

    .line 2431
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2433
    :try_start_0
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "resource download success is tpl :"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v2, v1, Lcom/mbridge/msdk/reward/adapter/d$5;->b:Z

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v6

    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v7

    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v9

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v10

    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide v12

    sub-long/2addr v10, v12

    move-object/from16 v8, p3

    invoke-static/range {v3 .. v11}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 2437
    :catch_0
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    const/4 v2, 0x1

    iput-boolean v2, v0, Lcom/mbridge/msdk/reward/adapter/d;->f:Z

    .line 2438
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v0, v0, Lcom/mbridge/msdk/reward/adapter/d;->e:Z

    if-eqz v0, :cond_1

    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v0, v0, Lcom/mbridge/msdk/reward/adapter/d;->g:Z

    if-nez v0, :cond_1

    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_1

    const-string v0, "RewardMVVideoAdapter"

    const-string v3, "\u5927\u6a21\u677f\u4e1a\u52a1\uff0c\u5927\u6a21\u677f\u4e0b\u8f7d\u6210\u529f\uff0cCampaign \u4e0b\u8f7d\u6210\u529f\uff0c\u5f00\u59cb\u9884\u52a0\u8f7d\u5927\u6a21\u677f"

    .line 2439
    invoke-static {v0, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "test_pre_load_tpl"

    const-string v3, "\u5927\u6a21\u677f\u4e0b\u8f7d\u6210\u529f\uff0cCampaign \u4e0b\u8f7d\u6210\u529f\uff0c\u5f00\u59cb\u9884\u52a0\u8f7d\u5927\u6a21\u677f"

    .line 2441
    invoke-static {v0, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2442
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d;->a:Ljava/lang/Object;

    monitor-enter v3

    .line 2443
    :try_start_1
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v0, v0, Lcom/mbridge/msdk/reward/adapter/d;->g:Z

    if-eqz v0, :cond_0

    .line 2444
    monitor-exit v3

    return-void

    .line 2446
    :cond_0
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v2, v0, Lcom/mbridge/msdk/reward/adapter/d;->g:Z

    .line 2448
    monitor-exit v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 2449
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v0

    new-instance v2, Lcom/mbridge/msdk/reward/adapter/d$5$1;

    move-object v3, p1

    move-object/from16 v4, p2

    move-object/from16 v5, p3

    invoke-direct {v2, p0, v5, p1, v4}, Lcom/mbridge/msdk/reward/adapter/d$5$1;-><init>(Lcom/mbridge/msdk/reward/adapter/d$5;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 2448
    :try_start_2
    monitor-exit v3
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw v0

    .line 2527
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u5927\u6a21\u677f\u4e1a\u52a1\uff0c\u5927\u6a21\u677f\u4e0b\u8f7d\u6210\u529f\uff0cCampaign \u4e0b\u8f7d\u4e0d\u6210\u529f\uff0cisCampaignsDownloadSuccess\uff1a "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v2, v2, Lcom/mbridge/msdk/reward/adapter/d;->e:Z

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, "  isCampaignTPLProLoad\uff1a "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v2, v2, Lcom/mbridge/msdk/reward/adapter/d;->g:Z

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "RewardMVVideoAdapter"

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 17

    move-object/from16 v0, p0

    move-object/from16 v1, p5

    const-string v2, "RewardMVVideoAdapter"

    const-string v3, "\u5927\u6a21\u677f\u4e1a\u52a1\uff0c\u5927\u6a21\u677f\u4e0b\u8f7d\u5931\u8d25"

    .line 2533
    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2534
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "\u6a21\u677f\u52a0\u8f7d\u6210\u529f requestId "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v4, p3

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v5, "HBOPTIMIZE"

    invoke-static {v5, v3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2536
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v3

    const/4 v14, 0x0

    invoke-interface {v3, v14}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    if-eqz v3, :cond_0

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_0

    .line 2538
    :try_start_0
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v3

    invoke-interface {v3, v14}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    move-object v5, v3

    check-cast v5, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v6

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "resource download failed: "

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, " is tpl: "

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v7, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->b:Z

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v8

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v9

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v3

    invoke-interface {v3, v14}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v11

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v12

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide v15

    sub-long/2addr v12, v15

    move-object/from16 v10, p3

    invoke-static/range {v5 .. v13}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 2544
    :catch_0
    :cond_0
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v3

    if-eqz v3, :cond_2

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v3

    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-lez v3, :cond_2

    .line 2545
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v3

    const/4 v5, 0x3

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    const-string v1, "tpl download fail but hit ignoreCheckRule"

    .line 2546
    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 2549
    :cond_1
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v3

    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 2550
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v3

    const/4 v5, 0x2

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    const-string v1, "endcard download fail but hit ignoreCheckRule at 3203"

    .line 2551
    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 2557
    :cond_2
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v14, v3, Lcom/mbridge/msdk/reward/adapter/d;->f:Z

    .line 2558
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v5

    iget-object v6, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v6}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v6

    move-object/from16 v7, p2

    invoke-static {v3, v7, v5, v6}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Ljava/util/List;Z)V

    .line 2560
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v3

    if-eqz v3, :cond_3

    .line 2561
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v3

    const/4 v5, 0x5

    invoke-virtual {v3, v5}, Landroid/os/Handler;->removeMessages(I)V

    .line 2564
    :cond_3
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v3

    if-eqz v3, :cond_5

    .line 2565
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v3, v3, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    if-nez v3, :cond_5

    .line 2566
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    const/4 v5, 0x1

    iput-boolean v5, v3, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    .line 2567
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v3

    if-eqz v3, :cond_4

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_4

    .line 2568
    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v5

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v3

    invoke-interface {v3, v14}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    move-object v6, v3

    check-cast v6, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, ""

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    iget-object v1, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v8

    iget-object v1, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v9

    iget-object v1, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v11

    move-object/from16 v10, p3

    invoke-static/range {v5 .. v11}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 2570
    :cond_4
    iget-object v1, v0, Lcom/mbridge/msdk/reward/adapter/d$5;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v1

    const-string v3, "errorCode: 3203 errorMessage: tpl temp resource download failed"

    invoke-interface {v1, v3}, Lcom/mbridge/msdk/reward/adapter/b;->a(Ljava/lang/String;)V

    const-string v1, "\u5927\u6a21\u677f\u4e1a\u52a1\uff0c\u5927\u6a21\u677f\u4e0b\u8f7d\u5931\u8d25 onVideoLoadFail"

    .line 2571
    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    return-void
.end method
