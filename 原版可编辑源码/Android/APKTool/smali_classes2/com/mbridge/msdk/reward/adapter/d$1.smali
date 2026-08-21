.class final Lcom/mbridge/msdk/reward/adapter/d$1;
.super Landroid/os/Handler;
.source "RewardMVVideoAdapter.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/reward/adapter/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/reward/adapter/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/reward/adapter/d;Landroid/os/Looper;)V
    .locals 0

    .line 230
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 25

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    const-string v3, "_"

    const-string v4, "RewardMVVideoAdapter"

    .line 235
    :try_start_0
    iget v5, v2, Landroid/os/Message;->what:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_8
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/16 v6, 0x8

    if-eq v5, v6, :cond_2b

    const/16 v6, 0x9

    const/4 v7, 0x4

    const/4 v8, 0x3

    const/4 v9, 0x2

    const-string v10, ""

    const/4 v11, 0x0

    const/4 v12, 0x6

    const/4 v13, 0x5

    const/4 v14, 0x0

    if-eq v5, v6, :cond_28

    const/16 v6, 0x10

    if-eq v5, v6, :cond_28

    const/16 v6, 0x11

    const/4 v15, 0x1

    if-eq v5, v6, :cond_27

    const-string v6, "  mExcludes:"

    packed-switch v5, :pswitch_data_0

    goto/16 :goto_e

    :pswitch_0
    :try_start_1
    const-string v2, "handler res\u6570\u636eload\u6210\u529f0"

    .line 488
    invoke-static {v4, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 489
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v3

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v5

    iget-object v6, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v6}, Lcom/mbridge/msdk/reward/adapter/d;->g(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v6

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v7

    invoke-static {v2, v3, v5, v6, v7}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Ljava/util/List;Ljava/util/List;Z)V

    .line 490
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v2

    if-eqz v2, :cond_2c

    const-string v2, "handler res\u6570\u636eload\u6210\u529f1"

    .line 491
    invoke-static {v4, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 492
    invoke-virtual {v1, v12}, Lcom/mbridge/msdk/reward/adapter/d$1;->removeMessages(I)V

    .line 493
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 494
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v2

    invoke-virtual {v2, v13}, Landroid/os/Handler;->removeMessages(I)V

    .line 496
    :cond_0
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v2

    if-eqz v2, :cond_2c

    .line 497
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v2, v2, Lcom/mbridge/msdk/reward/adapter/d;->h:Z

    if-nez v2, :cond_2c

    .line 498
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v15, v2, Lcom/mbridge/msdk/reward/adapter/d;->h:Z

    .line 499
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 500
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide v5

    sub-long/2addr v2, v5

    .line 501
    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v5

    iget-object v6, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v6}, Lcom/mbridge/msdk/reward/adapter/d;->e(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v6

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v7

    invoke-static {v5, v6, v7, v2, v3}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;J)V

    .line 503
    :cond_1
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v2

    invoke-interface {v2}, Lcom/mbridge/msdk/reward/adapter/b;->a()V

    goto/16 :goto_e

    .line 280
    :pswitch_1
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v2

    if-eqz v2, :cond_2c

    const-string v2, "\u8d44\u6e90load\u8d85\u65f6"

    .line 281
    invoke-static {v4, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "adapter 177"

    .line 282
    invoke-static {v4, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 283
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_5

    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_5

    .line 284
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v14}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 285
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_2

    move v5, v15

    goto :goto_0

    :cond_2
    move v5, v14

    .line 286
    :goto_0
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNscpt()I

    move-result v2

    .line 287
    iget-object v6, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->e(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v7

    invoke-virtual {v6, v7, v5, v2, v15}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/util/List;ZIZ)Z

    move-result v2

    if-eqz v2, :cond_5

    .line 288
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v3

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v5

    iget-object v6, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v6}, Lcom/mbridge/msdk/reward/adapter/d;->g(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v6

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v7

    invoke-static {v2, v3, v5, v6, v7}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Ljava/util/List;Ljava/util/List;Z)V

    .line 289
    invoke-virtual {v1, v12}, Lcom/mbridge/msdk/reward/adapter/d$1;->sendEmptyMessage(I)Z

    .line 290
    invoke-virtual {v1, v13}, Lcom/mbridge/msdk/reward/adapter/d$1;->removeMessages(I)V

    .line 291
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v2, v2, Lcom/mbridge/msdk/reward/adapter/d;->h:Z

    if-nez v2, :cond_4

    .line 292
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v15, v2, Lcom/mbridge/msdk/reward/adapter/d;->h:Z

    .line 293
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    .line 294
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide v5

    sub-long/2addr v2, v5

    .line 295
    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v5

    iget-object v6, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v6}, Lcom/mbridge/msdk/reward/adapter/d;->e(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v6

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v7

    invoke-static {v5, v6, v7, v2, v3}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;J)V

    .line 297
    :cond_3
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v2

    invoke-interface {v2}, Lcom/mbridge/msdk/reward/adapter/b;->a()V

    :cond_4
    return-void

    .line 302
    :cond_5
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v5

    iget-object v6, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v6}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v6

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v7

    invoke-static {v2, v5, v6, v7}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Ljava/util/List;Z)V

    .line 303
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v2

    if-eqz v2, :cond_6

    .line 304
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v2

    invoke-virtual {v2, v13}, Landroid/os/Handler;->removeMessages(I)V

    .line 305
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v2

    invoke-virtual {v2, v12}, Landroid/os/Handler;->removeMessages(I)V

    .line 307
    :cond_6
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v2, v2, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    if-nez v2, :cond_2c

    .line 308
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v15, v2, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    .line 311
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_7

    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_7

    .line 312
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v14}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    move-object v11, v2

    check-cast v11, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    :cond_7
    if-eqz v11, :cond_b

    .line 315
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v16

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "resource load timeout is tpl: "

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_8

    move v5, v15

    goto :goto_1

    :cond_8
    move v5, v14

    :goto_1
    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v18

    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v19

    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v20

    if-nez v11, :cond_9

    move-object/from16 v21, v10

    goto :goto_2

    :cond_9
    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    move-object/from16 v21, v2

    :goto_2
    if-nez v11, :cond_a

    goto :goto_3

    :cond_a
    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v10

    :goto_3
    move-object/from16 v22, v10

    move-object/from16 v17, v11

    invoke-static/range {v16 .. v22}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 317
    :cond_b
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v2

    const-string v5, "errorCode: 3401 errorMessage: resource load timeout"

    invoke-interface {v2, v5}, Lcom/mbridge/msdk/reward/adapter/b;->a(Ljava/lang/String;)V

    .line 318
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->e(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v2

    if-eqz v2, :cond_2c

    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->e(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v2

    invoke-virtual {v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v2

    if-lez v2, :cond_2c

    .line 320
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->e(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v2

    invoke-virtual {v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    move v5, v14

    :catch_0
    :cond_c
    :goto_4
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v6

    if-eqz v6, :cond_2c

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_8
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v6, :cond_e

    .line 324
    :try_start_2
    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_e

    .line 325
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v7

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->containsVideoKey(Ljava/lang/String;)Z

    move-result v7

    if-nez v7, :cond_e

    const-string v7, "resource load timeout exception video"

    .line 326
    invoke-static {v4, v7}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 329
    :try_start_3
    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v17

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "resource load timeout exception video is tpl: "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_d

    move v8, v15

    goto :goto_5

    :cond_d
    move v8, v14

    :goto_5
    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v18

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v19

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v20

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v21

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v22

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    iget-object v9, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v9}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide v9

    sub-long v23, v7, v9

    move-object/from16 v16, v11

    invoke-static/range {v16 .. v24}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :catch_1
    move v7, v15

    goto :goto_6

    :cond_e
    move v7, v14

    :goto_6
    if-eqz v6, :cond_10

    .line 336
    :try_start_4
    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_10

    .line 337
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v8

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->containsZipKey(Ljava/lang/String;)Z

    move-result v8

    if-nez v8, :cond_10

    const-string v7, "resource load timeout exception endcard"

    .line 338
    invoke-static {v4, v7}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 341
    :try_start_5
    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v17

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "resource load timeout exception endcard is tpl: "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_f

    move v8, v15

    goto :goto_7

    :cond_f
    move v8, v14

    :goto_7
    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v18

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v19

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v20

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v21

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v22

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    iget-object v9, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v9}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide v9

    sub-long v23, v7, v9

    move-object/from16 v16, v11

    invoke-static/range {v16 .. v24}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_2
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    :catch_2
    move v7, v15

    :cond_10
    if-eqz v6, :cond_12

    .line 348
    :try_start_6
    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_12

    .line 349
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v8

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->containsZipKey(Ljava/lang/String;)Z

    move-result v8

    if-nez v8, :cond_11

    const-string v7, "resource load timeout exception tpl"

    .line 350
    invoke-static {v4, v7}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_0
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    .line 353
    :try_start_7
    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v17

    const-string v18, "resource load timeout exception tpl"

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v19

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v20

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v21

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v22

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    iget-object v9, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v9}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide v9

    sub-long v23, v7, v9

    move-object/from16 v16, v11

    invoke-static/range {v16 .. v24}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_3
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    :catch_3
    move v7, v15

    goto :goto_8

    :cond_11
    if-nez v5, :cond_12

    if-nez v7, :cond_12

    .line 358
    :try_start_8
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v9, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v9}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Lcom/mbridge/msdk/videocommon/a;->a(Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/a$a;

    move-result-object v8

    if-nez v8, :cond_12

    const-string v8, "resource load timeout exception tpl preload"

    .line 359
    invoke-static {v4, v8}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_0
    .catchall {:try_start_8 .. :try_end_8} :catchall_0

    .line 362
    :try_start_9
    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v17

    const-string v18, "resource load timeout exception tpl preload"

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v19

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v20

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v21

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v22

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide v12

    sub-long v23, v8, v12

    move-object/from16 v16, v11

    invoke-static/range {v16 .. v24}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_4
    .catchall {:try_start_9 .. :try_end_9} :catchall_0

    :catch_4
    move v5, v15

    :cond_12
    :goto_8
    if-eqz v6, :cond_c

    .line 370
    :try_start_a
    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v8

    if-eqz v8, :cond_c

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v8

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_c

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v8

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v8

    const-string v9, "cmpt=1"

    invoke-virtual {v8, v9}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_c

    .line 371
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v8

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v9

    invoke-virtual {v9}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->containsZipKey(Ljava/lang/String;)Z

    move-result v8

    if-nez v8, :cond_14

    const-string v7, "resource load timeout exception template"

    .line 372
    invoke-static {v4, v7}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 374
    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v17

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "resource load timeout exception template is tpl: "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_13

    move v8, v15

    goto :goto_9

    :cond_13
    move v8, v14

    :goto_9
    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v18

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v19

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v20

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v21

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v22

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    iget-object v8, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v8}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide v8

    sub-long v23, v6, v8

    move-object/from16 v16, v11

    invoke-static/range {v16 .. v24}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V

    goto/16 :goto_4

    .line 379
    :cond_14
    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-eqz v8, :cond_c

    if-nez v7, :cond_c

    .line 380
    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v7

    invoke-static {v7, v6}, Lcom/mbridge/msdk/videocommon/a;->a(ILcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/videocommon/a$a;

    move-result-object v7

    if-nez v7, :cond_c

    const-string v7, "resource load timeout exception template preload"

    .line 381
    invoke-static {v4, v7}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 383
    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v17

    const-string v18, "resource load timeout exception template preload"

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v19

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v20

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v21

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v22

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    iget-object v8, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v8}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide v8

    sub-long v23, v6, v8

    move-object/from16 v16, v11

    invoke-static/range {v16 .. v24}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_0
    .catchall {:try_start_a .. :try_end_a} :catchall_0

    goto/16 :goto_4

    .line 400
    :pswitch_2
    :try_start_b
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v3

    if-eqz v3, :cond_2c

    const-string v3, "handler \u6570\u636eload\u5931\u8d25"

    .line 401
    invoke-static {v4, v3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "=====================onVideoLoadFail====================="

    .line 402
    invoke-static {v4, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 403
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v5

    iget-object v6, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v6}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v6

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v7

    invoke-static {v3, v5, v6, v7}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Ljava/util/List;Z)V

    .line 406
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v3

    if-eqz v3, :cond_15

    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_15

    .line 407
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v3

    invoke-interface {v3, v14}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    move-object v11, v3

    check-cast v11, Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    :try_end_b
    .catch Ljava/lang/Exception; {:try_start_b .. :try_end_b} :catch_8
    .catchall {:try_start_b .. :try_end_b} :catchall_0

    .line 410
    :cond_15
    :try_start_c
    iget-object v3, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-nez v3, :cond_19

    .line 411
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v2

    if-eqz v2, :cond_16

    .line 412
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v2

    invoke-virtual {v2, v13}, Landroid/os/Handler;->removeMessages(I)V

    .line 414
    :cond_16
    invoke-virtual {v1, v12}, Lcom/mbridge/msdk/reward/adapter/d$1;->removeMessages(I)V

    const-string v2, "=====================onVideoLoadFail=====================00000"

    .line 415
    invoke-static {v4, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 416
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v2, v2, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    if-nez v2, :cond_2c

    .line 417
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v15, v2, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    .line 418
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->l(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v2

    if-nez v2, :cond_18

    if-eqz v11, :cond_17

    .line 420
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v16

    const-string v18, "data load failed"

    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v19

    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v20

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v21

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v22

    move-object/from16 v17, v11

    invoke-static/range {v16 .. v22}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    goto :goto_a

    .line 422
    :cond_17
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v16

    const-string v18, "data load failed"

    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v19

    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v20

    const-string v21, ""

    const-string v22, ""

    move-object/from16 v17, v11

    invoke-static/range {v16 .. v22}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 425
    :cond_18
    :goto_a
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v2

    const-string v3, "errorCode: 3506 errorMessage: data load failed"

    invoke-interface {v2, v3}, Lcom/mbridge/msdk/reward/adapter/b;->a(Ljava/lang/String;)V

    goto/16 :goto_e

    .line 428
    :cond_19
    iget-object v2, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, Ljava/lang/String;

    .line 429
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1d

    .line 430
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v2

    if-eqz v2, :cond_1a

    .line 431
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v2

    invoke-virtual {v2, v13}, Landroid/os/Handler;->removeMessages(I)V

    .line 433
    :cond_1a
    invoke-virtual {v1, v12}, Lcom/mbridge/msdk/reward/adapter/d$1;->removeMessages(I)V

    const-string v2, "=====================onVideoLoadFail=====================11111"

    .line 434
    invoke-static {v4, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 435
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v2, v2, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    if-nez v2, :cond_2c

    .line 436
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v15, v2, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    .line 437
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->l(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v2

    if-nez v2, :cond_1c

    if-eqz v11, :cond_1b

    .line 439
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v16

    const-string v18, "data load failed, errorMsg null"

    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v19

    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v20

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v21

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v22

    move-object/from16 v17, v11

    invoke-static/range {v16 .. v22}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    goto :goto_b

    .line 441
    :cond_1b
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v16

    const-string v18, "data load failed, errorMsg null"

    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v19

    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v20

    const-string v21, ""

    const-string v22, ""

    move-object/from16 v17, v11

    invoke-static/range {v16 .. v22}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 444
    :cond_1c
    :goto_b
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v2

    const-string v3, "errorCode: 3507 errorMessage: data load failed, errorMsg null"

    invoke-interface {v2, v3}, Lcom/mbridge/msdk/reward/adapter/b;->a(Ljava/lang/String;)V

    goto/16 :goto_e

    .line 448
    :cond_1d
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v3

    if-eqz v3, :cond_1e

    .line 449
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v3

    invoke-virtual {v3, v13}, Landroid/os/Handler;->removeMessages(I)V

    .line 451
    :cond_1e
    invoke-virtual {v1, v12}, Lcom/mbridge/msdk/reward/adapter/d$1;->removeMessages(I)V

    .line 452
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "=====================onVideoLoadFail=====================3333333 + "

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " isCalledLoadFailed: "

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v5, v5, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 453
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v3, v3, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    if-nez v3, :cond_2c

    .line 454
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v15, v3, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    .line 455
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->l(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v3

    if-nez v3, :cond_20

    if-eqz v11, :cond_1f

    .line 457
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v16

    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v19

    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v20

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v21

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v22

    move-object/from16 v17, v11

    move-object/from16 v18, v2

    invoke-static/range {v16 .. v22}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    goto :goto_c

    .line 459
    :cond_1f
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v16

    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v19

    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v20

    const-string v21, ""

    const-string v22, ""

    move-object/from16 v17, v11

    move-object/from16 v18, v2

    invoke-static/range {v16 .. v22}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 462
    :cond_20
    :goto_c
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v3

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "errorCode: 3507 errorMessage: data load failed, errorMsg is "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v3, v2}, Lcom/mbridge/msdk/reward/adapter/b;->a(Ljava/lang/String;)V
    :try_end_c
    .catch Ljava/lang/Exception; {:try_start_c .. :try_end_c} :catch_5
    .catchall {:try_start_c .. :try_end_c} :catchall_0

    goto/16 :goto_e

    :catch_5
    move-exception v0

    move-object v2, v0

    .line 467
    :try_start_d
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v3

    if-eqz v3, :cond_21

    .line 468
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v3

    invoke-virtual {v3, v13}, Landroid/os/Handler;->removeMessages(I)V

    .line 470
    :cond_21
    invoke-virtual {v1, v12}, Lcom/mbridge/msdk/reward/adapter/d$1;->removeMessages(I)V

    .line 471
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v5

    iget-object v6, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v6}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v6

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v7

    invoke-static {v3, v5, v6, v7}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Ljava/util/List;Z)V

    const-string v3, "=====================onVideoLoadFail=====================44444"

    .line 472
    invoke-static {v4, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 473
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v3, v3, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    if-nez v3, :cond_2c

    .line 474
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v15, v3, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    .line 475
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->l(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v3

    if-nez v3, :cond_23

    if-eqz v11, :cond_22

    .line 477
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v16

    invoke-virtual {v2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v18

    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v19

    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v20

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v21

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v22

    move-object/from16 v17, v11

    invoke-static/range {v16 .. v22}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    goto :goto_d

    .line 479
    :cond_22
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v16

    invoke-virtual {v2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v18

    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v19

    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v20

    const-string v21, ""

    const-string v22, ""

    move-object/from16 v17, v11

    invoke-static/range {v16 .. v22}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 482
    :cond_23
    :goto_d
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v3

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "errorCode: 3508 errorMessage: data load failed, exception is "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v3, v2}, Lcom/mbridge/msdk/reward/adapter/b;->a(Ljava/lang/String;)V

    goto/16 :goto_e

    .line 259
    :pswitch_3
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v2

    if-eqz v2, :cond_24

    const-string v2, "handler \u6570\u636eload\u6210\u529f"

    .line 260
    invoke-static {v4, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "=====================onCampaignLoadSuccess====================="

    .line 261
    invoke-static {v4, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 262
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v2

    const-string v3, "campaign is ok"

    invoke-interface {v2, v3}, Lcom/mbridge/msdk/reward/adapter/b;->b(Ljava/lang/String;)V

    .line 264
    :cond_24
    sget v2, Lcom/mbridge/msdk/foundation/same/a;->v:I

    int-to-long v2, v2

    invoke-virtual {v1, v13, v2, v3}, Lcom/mbridge/msdk/reward/adapter/d$1;->sendEmptyMessageDelayed(IJ)Z

    goto/16 :goto_e

    .line 249
    :pswitch_4
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "handler id\u83b7\u53d6\u8d85\u65f6  \u5f00\u59cbload mTtcIds:"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->b(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 251
    iget-object v3, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz v3, :cond_25

    .line 252
    iget-object v2, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v11

    .line 255
    :cond_25
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-virtual {v2, v11}, Lcom/mbridge/msdk/reward/adapter/d;->b(Ljava/lang/String;)V

    goto/16 :goto_e

    .line 238
    :pswitch_5
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "handler id\u83b7\u53d6\u6210\u529f \u5f00\u59cbload mTtcIds:"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->b(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 240
    iget-object v3, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz v3, :cond_26

    .line 241
    iget-object v2, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v11

    .line 244
    :cond_26
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-virtual {v2, v11}, Lcom/mbridge/msdk/reward/adapter/d;->b(Ljava/lang/String;)V

    goto/16 :goto_e

    :cond_27
    const-string v3, "\u6536\u5230\u9884\u52a0\u8f7d\u5927\u6a21\u677f\u7684\u6d88\u606f"

    .line 557
    invoke-static {v4, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_d
    .catch Ljava/lang/Exception; {:try_start_d .. :try_end_d} :catch_8
    .catchall {:try_start_d .. :try_end_d} :catchall_0

    .line 559
    :try_start_e
    iget-object v2, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, [Ljava/lang/Object;

    check-cast v2, [Ljava/lang/Object;

    .line 560
    aget-object v3, v2, v14

    move-object/from16 v18, v3

    check-cast v18, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 561
    aget-object v3, v2, v15

    move-object/from16 v19, v3

    check-cast v19, Ljava/lang/String;

    .line 562
    aget-object v3, v2, v9

    move-object/from16 v20, v3

    check-cast v20, Ljava/lang/String;

    .line 563
    aget-object v3, v2, v8

    move-object/from16 v21, v3

    check-cast v21, Lcom/mbridge/msdk/videocommon/d/c;

    .line 564
    aget-object v2, v2, v7

    move-object/from16 v17, v2

    check-cast v17, Ljava/lang/String;

    if-eqz v18, :cond_2c

    .line 565
    invoke-static/range {v19 .. v19}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2c

    const-string v2, "\u5f00\u59cb\u9884\u52a0\u8f7d\u5927\u6a21\u677f"

    .line 566
    invoke-static {v4, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 567
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    move-object/from16 v16, v2

    invoke-static/range {v16 .. v21}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/d/c;)V
    :try_end_e
    .catch Ljava/lang/Exception; {:try_start_e .. :try_end_e} :catch_6
    .catchall {:try_start_e .. :try_end_e} :catchall_0

    goto/16 :goto_e

    :catch_6
    move-exception v0

    move-object v2, v0

    .line 570
    :try_start_f
    invoke-virtual {v2}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 571
    sget-boolean v3, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v3, :cond_2c

    .line 572
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_f
    .catch Ljava/lang/Exception; {:try_start_f .. :try_end_f} :catch_8
    .catchall {:try_start_f .. :try_end_f} :catchall_0

    goto/16 :goto_e

    .line 527
    :cond_28
    :try_start_10
    iget-object v2, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, [Ljava/lang/Object;

    check-cast v2, [Ljava/lang/Object;

    .line 528
    aget-object v3, v2, v14

    move-object/from16 v17, v3

    check-cast v17, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 530
    aget-object v3, v2, v9

    move-object/from16 v20, v3

    check-cast v20, Ljava/lang/String;

    .line 531
    aget-object v3, v2, v8

    move-object/from16 v21, v3

    check-cast v21, Lcom/mbridge/msdk/videocommon/d/c;

    .line 532
    aget-object v3, v2, v7

    move-object/from16 v16, v3

    check-cast v16, Ljava/lang/String;

    .line 535
    array-length v3, v2

    const/4 v5, 0x7

    if-ne v3, v5, :cond_29

    .line 536
    aget-object v3, v2, v13

    move-object v10, v3

    check-cast v10, Ljava/lang/String;

    .line 537
    aget-object v2, v2, v12

    move-object v11, v2

    check-cast v11, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    :cond_29
    move-object/from16 v22, v10

    move-object v15, v11

    if-eqz v17, :cond_2c

    .line 541
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->m(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v2

    if-nez v2, :cond_2a

    .line 542
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->g(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_2c

    .line 543
    iget-object v14, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->g(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v18

    const-string v19, ""

    invoke-static/range {v14 .. v22}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/d/c;Ljava/lang/String;)V

    goto/16 :goto_e

    .line 546
    :cond_2a
    iget-object v14, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->m(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v18

    const-string v19, ""

    invoke-static/range {v14 .. v22}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/d/c;Ljava/lang/String;)V
    :try_end_10
    .catch Ljava/lang/Exception; {:try_start_10 .. :try_end_10} :catch_7
    .catchall {:try_start_10 .. :try_end_10} :catchall_0

    goto :goto_e

    :catch_7
    move-exception v0

    move-object v2, v0

    .line 550
    :try_start_11
    invoke-virtual {v2}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 551
    sget-boolean v3, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v3, :cond_2c

    .line 552
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_e

    .line 510
    :cond_2b
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v3

    if-eqz v3, :cond_2c

    const-string v3, "adapter 202"

    .line 511
    invoke-static {v4, v3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 513
    iget-object v2, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v2, :cond_2c

    .line 514
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2c

    .line 515
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v3

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v3, v2, v5}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    const-string v2, "3dwOnLoadSuccess"

    .line 516
    invoke-static {v4, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 517
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/d$1;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-virtual {v2}, Lcom/mbridge/msdk/reward/adapter/d;->b()Z

    move-result v2

    if-eqz v2, :cond_2c

    const-string v2, "handler endcard\u6e90\u7801\u4e0b\u8f7d\u6210\u529f isready\u4e3atrue"

    .line 518
    invoke-static {v4, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_11
    .catch Ljava/lang/Exception; {:try_start_11 .. :try_end_11} :catch_8
    .catchall {:try_start_11 .. :try_end_11} :catchall_0

    goto :goto_e

    :catchall_0
    move-exception v0

    move-object v2, v0

    .line 583
    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_e

    :catch_8
    move-exception v0

    move-object v2, v0

    .line 581
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2c
    :goto_e
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
