.class final Lcom/mbridge/msdk/reward/a/a$1;
.super Landroid/os/Handler;
.source "RewardVideoController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/reward/a/a;-><init>()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/reward/a/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/reward/a/a;Landroid/os/Looper;)V
    .locals 0

    .line 303
    iput-object p1, p0, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 19

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    .line 306
    iget v2, v0, Landroid/os/Message;->what:I

    const/4 v3, 0x1

    const/4 v4, 0x0

    sparse-switch v2, :sswitch_data_0

    goto/16 :goto_7

    .line 415
    :sswitch_0
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->l(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 416
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->l(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/d/c;->H()I

    move-result v0

    goto :goto_0

    :cond_0
    move v0, v4

    .line 419
    :goto_0
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v2

    const-string v5, "RewardVideoController"

    if-eqz v2, :cond_e

    .line 421
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/reward/adapter/d;->b()Z

    move-result v2

    const-wide/16 v6, 0x0

    const-string v8, "load timeout task called onVideoLoadSuccess after "

    const-string v9, "s exception"

    if-eqz v2, :cond_2

    .line 422
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v2

    if-eqz v2, :cond_19

    const-string v2, "load timeout task called for onVideoLoadSuccess by isReady exception"

    .line 423
    invoke-static {v5, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 425
    :try_start_0
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/reward/adapter/d;->d()Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 426
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_1

    .line 427
    invoke-interface {v2, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    move-object v10, v3

    check-cast v10, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v11

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    iget-object v3, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    .line 429
    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v13

    iget-object v3, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->i(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v14

    const-string v15, ""

    const-string v16, ""

    int-to-long v3, v0

    move-wide/from16 v17, v3

    .line 427
    invoke-static/range {v10 .. v18}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V

    .line 430
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->m(Lcom/mbridge/msdk/reward/a/a;)Landroid/content/Context;

    move-result-object v0

    iget-object v3, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v2, v3, v6, v7}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 433
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 435
    :cond_1
    :goto_1
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v0

    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->f(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v2, v3}, Lcom/mbridge/msdk/reward/a/a$c;->b(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_7

    .line 439
    :cond_2
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v2

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/reward/adapter/d;->g(Z)Z

    move-result v2

    const-string v10, "load timeout task called for onVideoLoadFail after "

    if-eqz v2, :cond_9

    .line 440
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/reward/adapter/d;->b()Z

    move-result v2

    const-string v11, "load timeout task called for onVideoLoadSuccess by isReady but updateCampaignsLoadTimeoutState exception"

    if-eqz v2, :cond_4

    .line 441
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v2

    if-eqz v2, :cond_19

    .line 442
    invoke-static {v5, v11}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 445
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v2

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/reward/adapter/d;->e(Z)V

    .line 447
    :try_start_1
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/reward/adapter/d;->d()Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v2

    if-eqz v2, :cond_3

    .line 448
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_3

    .line 449
    invoke-interface {v2, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    move-object v10, v3

    check-cast v10, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v11

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    iget-object v3, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    .line 451
    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v13

    iget-object v3, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->i(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v14

    const-string v15, ""

    const-string v16, ""

    int-to-long v3, v0

    move-wide/from16 v17, v3

    .line 449
    invoke-static/range {v10 .. v18}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V

    .line 452
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->m(Lcom/mbridge/msdk/reward/a/a;)Landroid/content/Context;

    move-result-object v0

    iget-object v3, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v2, v3, v6, v7}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;J)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_2

    :catchall_1
    move-exception v0

    .line 455
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 457
    :cond_3
    :goto_2
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v0

    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->f(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v2, v3}, Lcom/mbridge/msdk/reward/a/a$c;->b(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_7

    .line 461
    :cond_4
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v2

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/reward/adapter/d;->f(Z)V

    .line 463
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v2

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/reward/adapter/d;->g(Z)Z

    move-result v2

    if-eqz v2, :cond_8

    .line 464
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/reward/adapter/d;->b()Z

    move-result v2

    if-eqz v2, :cond_6

    .line 465
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v2

    if-eqz v2, :cond_19

    .line 466
    invoke-static {v5, v11}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 468
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v2

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/reward/adapter/d;->e(Z)V

    .line 470
    :try_start_2
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/reward/adapter/d;->d()Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v2

    if-eqz v2, :cond_5

    .line 471
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_5

    .line 472
    invoke-interface {v2, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    move-object v10, v3

    check-cast v10, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 473
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v11

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    iget-object v3, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    .line 475
    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v13

    iget-object v3, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->i(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v14

    const-string v15, ""

    const-string v16, ""

    int-to-long v3, v0

    move-wide/from16 v17, v3

    .line 472
    invoke-static/range {v10 .. v18}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V

    .line 476
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->m(Lcom/mbridge/msdk/reward/a/a;)Landroid/content/Context;

    move-result-object v0

    iget-object v3, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v2, v3, v6, v7}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;J)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_3

    :catchall_2
    move-exception v0

    .line 479
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 481
    :cond_5
    :goto_3
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v0

    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->f(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v2, v3}, Lcom/mbridge/msdk/reward/a/a$c;->b(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_7

    .line 484
    :cond_6
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v2

    if-eqz v2, :cond_7

    .line 485
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 488
    :cond_7
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v0

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/reward/adapter/d;->f(Z)V

    goto/16 :goto_7

    .line 491
    :cond_8
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v2

    if-eqz v2, :cond_19

    .line 492
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_7

    .line 499
    :cond_9
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v2

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/reward/adapter/d;->g(Z)Z

    move-result v2

    const-string v11, " s"

    if-eqz v2, :cond_d

    .line 500
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/reward/adapter/d;->b()Z

    move-result v2

    if-eqz v2, :cond_b

    .line 501
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v2

    if-eqz v2, :cond_19

    const-string v2, "load timeout task called for onVideoLoadSuccess by isReady but updateCampaignsLoadTimeoutState"

    .line 502
    invoke-static {v5, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 504
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v2

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/reward/adapter/d;->e(Z)V

    .line 506
    :try_start_3
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/reward/adapter/d;->d()Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v2

    if-eqz v2, :cond_a

    .line 507
    invoke-virtual {v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v3

    if-lez v3, :cond_a

    .line 508
    invoke-virtual {v2, v4}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    move-object v10, v3

    check-cast v10, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v11

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    iget-object v3, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    .line 510
    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v13

    iget-object v3, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->i(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v14

    const-string v15, ""

    const-string v16, ""

    int-to-long v3, v0

    move-wide/from16 v17, v3

    .line 508
    invoke-static/range {v10 .. v18}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V

    .line 511
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->m(Lcom/mbridge/msdk/reward/a/a;)Landroid/content/Context;

    move-result-object v0

    iget-object v3, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v2, v3, v6, v7}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;J)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    goto :goto_4

    :catchall_3
    move-exception v0

    .line 514
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 516
    :cond_a
    :goto_4
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v0

    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->f(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v2, v3}, Lcom/mbridge/msdk/reward/a/a$c;->b(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_7

    .line 519
    :cond_b
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v2

    if-eqz v2, :cond_c

    .line 520
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 523
    :cond_c
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v0

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/reward/adapter/d;->f(Z)V

    goto/16 :goto_7

    .line 526
    :cond_d
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v2

    if-eqz v2, :cond_19

    .line 527
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_7

    .line 534
    :cond_e
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v0

    if-eqz v0, :cond_19

    const-string v0, "load timeout task called for onVideoLoadFail by mRewardMvVideoAdapter is null exception"

    .line 535
    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_7

    .line 542
    :sswitch_1
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/reward/a/a;->d(Z)V

    goto/16 :goto_7

    .line 381
    :sswitch_2
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    move-result-object v2

    if-eqz v2, :cond_19

    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->e(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v2

    if-eqz v2, :cond_19

    .line 382
    iget-object v2, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 384
    instance-of v3, v2, Ljava/lang/String;

    if-eqz v3, :cond_f

    .line 385
    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    .line 389
    :cond_f
    invoke-virtual/range {p1 .. p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object v0

    if-eqz v0, :cond_10

    .line 390
    sget-object v2, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-virtual {v0, v2}, Landroid/os/Bundle;->containsKey(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_10

    .line 391
    sget-object v2, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-virtual {v0, v2}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 392
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    .line 397
    :cond_10
    :try_start_4
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->i(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v0

    if-eqz v0, :cond_11

    .line 398
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->j(Lcom/mbridge/msdk/reward/a/a;)V

    .line 400
    :cond_11
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    move-result-object v0

    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->k(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object v2

    invoke-interface {v0, v2}, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;->onLoadSuccess(Lcom/mbridge/msdk/out/MBridgeIds;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0

    goto/16 :goto_7

    :catch_0
    move-exception v0

    .line 402
    sget-boolean v2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v2, :cond_19

    .line 403
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto/16 :goto_7

    .line 359
    :sswitch_3
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    move-result-object v2

    if-eqz v2, :cond_19

    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->e(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v2

    if-eqz v2, :cond_19

    .line 360
    iget-object v0, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 362
    instance-of v2, v0, Ljava/lang/String;

    if-eqz v2, :cond_12

    .line 363
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_5

    :cond_12
    const-string v0, ""

    .line 366
    :goto_5
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/videocommon/a;->c(Ljava/lang/String;)V

    .line 367
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a;->a()V

    .line 369
    :try_start_5
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->i(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v2

    if-eqz v2, :cond_13

    .line 370
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->j(Lcom/mbridge/msdk/reward/a/a;)V

    .line 372
    :cond_13
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    move-result-object v2

    iget-object v3, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->k(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object v3

    invoke-interface {v2, v3, v0}, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;->onVideoLoadFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1

    goto/16 :goto_7

    :catch_1
    move-exception v0

    .line 374
    sget-boolean v2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v2, :cond_19

    .line 375
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto/16 :goto_7

    .line 329
    :sswitch_4
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    move-result-object v2

    if-eqz v2, :cond_19

    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->e(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v2

    if-eqz v2, :cond_19

    .line 330
    iget-object v2, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 332
    instance-of v3, v2, Ljava/lang/String;

    if-eqz v3, :cond_14

    .line 333
    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    .line 337
    :cond_14
    invoke-virtual/range {p1 .. p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object v0

    if-eqz v0, :cond_15

    .line 338
    sget-object v2, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-virtual {v0, v2}, Landroid/os/Bundle;->containsKey(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_15

    .line 339
    sget-object v2, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-virtual {v0, v2}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 340
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    .line 346
    :cond_15
    :try_start_6
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->i(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v0

    if-eqz v0, :cond_16

    .line 347
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->j(Lcom/mbridge/msdk/reward/a/a;)V

    .line 349
    :cond_16
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    move-result-object v0

    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->k(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object v2

    invoke-interface {v0, v2}, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;->onVideoLoadSuccess(Lcom/mbridge/msdk/out/MBridgeIds;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_2

    goto/16 :goto_7

    :catch_2
    move-exception v0

    .line 351
    sget-boolean v2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v2, :cond_19

    .line 352
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto/16 :goto_7

    .line 309
    :sswitch_5
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v0

    if-eqz v0, :cond_19

    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-lez v0, :cond_19

    .line 311
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->b(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_17

    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->b(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_17

    .line 312
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->b(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    xor-int/2addr v0, v3

    goto :goto_6

    :cond_17
    move v0, v4

    .line 314
    :goto_6
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v2

    invoke-virtual {v2, v4}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNscpt()I

    move-result v2

    .line 315
    iget-object v3, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v3

    if-eqz v3, :cond_18

    iget-object v3, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;

    move-result-object v3

    iget-object v4, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v4}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v4

    invoke-virtual {v3, v4, v0, v2}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/util/List;ZI)Z

    move-result v0

    if-eqz v0, :cond_18

    .line 316
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v0

    if-eqz v0, :cond_19

    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->e(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v0

    if-eqz v0, :cond_19

    .line 317
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v0

    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/a/a;->f(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v2, v3}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_7

    .line 320
    :cond_18
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v0

    if-eqz v0, :cond_19

    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->e(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v0

    if-eqz v0, :cond_19

    .line 321
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/videocommon/a;->c(Ljava/lang/String;)V

    .line 322
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a;->a()V

    .line 323
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a$1;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v0

    const-string v2, "load timeout"

    invoke-static {v0, v2}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V

    :cond_19
    :goto_7
    return-void

    nop

    :sswitch_data_0
    .sparse-switch
        0x8 -> :sswitch_5
        0x9 -> :sswitch_4
        0x10 -> :sswitch_3
        0x11 -> :sswitch_2
        0x12 -> :sswitch_3
        0xf4629 -> :sswitch_1
        0xf462a -> :sswitch_0
    .end sparse-switch
.end method
