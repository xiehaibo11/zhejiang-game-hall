.class final Lcom/mbridge/msdk/reward/adapter/c$4;
.super Ljava/lang/Object;
.source "RewardCampaignsResourceManager.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/reward/adapter/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

.field final synthetic c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic d:Ljava/util/concurrent/CopyOnWriteArrayList;

.field final synthetic e:Ljava/lang/String;

.field final synthetic f:Lcom/mbridge/msdk/videocommon/d/c;

.field final synthetic g:Ljava/lang/String;

.field final synthetic h:Lcom/mbridge/msdk/reward/adapter/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/reward/adapter/c;ZLcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/concurrent/CopyOnWriteArrayList;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/d/c;Ljava/lang/String;)V
    .locals 0

    .line 2280
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$4;->h:Lcom/mbridge/msdk/reward/adapter/c;

    iput-boolean p2, p0, Lcom/mbridge/msdk/reward/adapter/c$4;->a:Z

    iput-object p3, p0, Lcom/mbridge/msdk/reward/adapter/c$4;->b:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iput-object p4, p0, Lcom/mbridge/msdk/reward/adapter/c$4;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object p5, p0, Lcom/mbridge/msdk/reward/adapter/c$4;->d:Ljava/util/concurrent/CopyOnWriteArrayList;

    iput-object p6, p0, Lcom/mbridge/msdk/reward/adapter/c$4;->e:Ljava/lang/String;

    iput-object p7, p0, Lcom/mbridge/msdk/reward/adapter/c$4;->f:Lcom/mbridge/msdk/videocommon/d/c;

    iput-object p8, p0, Lcom/mbridge/msdk/reward/adapter/c$4;->g:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 20

    move-object/from16 v1, p0

    const-string v0, "RewardCampaignsResourceManager_test"

    const-string v2, "\u5f00\u59cb\u9884\u52a0\u8f7d\u64ad\u653e\u6a21\u677f 55"

    .line 2283
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2284
    iget-boolean v0, v1, Lcom/mbridge/msdk/reward/adapter/c$4;->a:Z

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/c$4;->b:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/c$4;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v6

    iget-object v9, v1, Lcom/mbridge/msdk/reward/adapter/c$4;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/c$4;->d:Ljava/util/concurrent/CopyOnWriteArrayList;

    .line 2285
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object v3

    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/c$4;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getH5ResAddress(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/c$4;->e:Ljava/lang/String;

    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/c$4;->f:Lcom/mbridge/msdk/videocommon/d/c;

    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/c$4;->g:Ljava/lang/String;

    iget-object v8, v1, Lcom/mbridge/msdk/reward/adapter/c$4;->h:Lcom/mbridge/msdk/reward/adapter/c;

    .line 2286
    invoke-static {v8}, Lcom/mbridge/msdk/reward/adapter/c;->b(Lcom/mbridge/msdk/reward/adapter/c;)Z

    move-result v10

    .line 3296
    :try_start_0
    new-instance v8, Lcom/mbridge/msdk/videocommon/a$a;

    invoke-direct {v8}, Lcom/mbridge/msdk/videocommon/a$a;-><init>()V

    .line 4087
    invoke-static {}, Lcom/mbridge/msdk/reward/adapter/c$m;->a()Lcom/mbridge/msdk/reward/adapter/c;

    .line 3299
    new-instance v13, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v11

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v11

    invoke-direct {v13, v11}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    .line 3301
    invoke-virtual {v8, v13}, Lcom/mbridge/msdk/videocommon/a$a;->a(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V

    if-eqz v2, :cond_3

    .line 3304
    invoke-virtual {v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v15

    if-lez v15, :cond_3

    .line 3305
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v15

    invoke-virtual {v15, v7}, Lcom/mbridge/msdk/videocommon/download/b;->a(Ljava/lang/String;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v15

    if-eqz v15, :cond_2

    .line 3306
    invoke-interface {v15}, Ljava/util/List;->size()I

    move-result v16

    if-lez v16, :cond_2

    const/4 v14, 0x0

    .line 3307
    :goto_0
    invoke-virtual {v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v11

    if-ge v14, v11, :cond_2

    .line 3308
    invoke-virtual {v2, v14}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 3309
    invoke-interface {v15}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v17

    :goto_1
    invoke-interface/range {v17 .. v17}, Ljava/util/Iterator;->hasNext()Z

    move-result v18

    if-eqz v18, :cond_1

    invoke-interface/range {v17 .. v17}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v18

    check-cast v18, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 3310
    invoke-virtual/range {v18 .. v18}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    move-object/from16 v19, v15

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v1, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual/range {v18 .. v18}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v1, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    .line 3311
    invoke-virtual {v11, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReady(Z)V

    .line 3312
    invoke-virtual {v2, v14, v11}, Ljava/util/concurrent/CopyOnWriteArrayList;->set(ILjava/lang/Object;)Ljava/lang/Object;

    :cond_0
    move-object/from16 v1, p0

    move-object/from16 v15, v19

    goto :goto_1

    :cond_1
    move-object/from16 v19, v15

    add-int/lit8 v14, v14, 0x1

    move-object/from16 v1, p0

    goto :goto_0

    .line 3317
    :cond_2
    new-instance v1, Lcom/mbridge/msdk/video/js/a/j;

    const/4 v11, 0x0

    invoke-direct {v1, v11, v9, v2}, Lcom/mbridge/msdk/video/js/a/j;-><init>(Landroid/app/Activity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/List;)V

    const/4 v11, 0x0

    .line 3318
    invoke-virtual {v2, v11}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    goto :goto_2

    .line 3320
    :cond_3
    new-instance v1, Lcom/mbridge/msdk/video/js/a/j;

    const/4 v2, 0x0

    invoke-direct {v1, v2, v9}, Lcom/mbridge/msdk/video/js/a/j;-><init>(Landroid/app/Activity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 3321
    invoke-virtual {v9}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    :goto_2
    move-object v14, v2

    const/4 v2, 0x0

    .line 3323
    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/js/a/j;->a(I)V

    .line 3324
    invoke-virtual {v1, v7}, Lcom/mbridge/msdk/video/js/a/j;->a(Ljava/lang/String;)V

    .line 3325
    invoke-virtual {v1, v4}, Lcom/mbridge/msdk/video/js/a/j;->c(Ljava/lang/String;)V

    .line 3326
    invoke-virtual {v1, v3}, Lcom/mbridge/msdk/video/js/a/j;->a(Lcom/mbridge/msdk/videocommon/d/c;)V

    .line 3327
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/video/js/a/j;->e(Z)V

    .line 3328
    new-instance v0, Lcom/mbridge/msdk/reward/adapter/c$l;

    const/4 v11, 0x0

    move-object v2, v0

    move-object v3, v4

    move v4, v11

    move-object v11, v14

    invoke-direct/range {v2 .. v11}, Lcom/mbridge/msdk/reward/adapter/c$l;-><init>(Ljava/lang/String;ZLcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V

    .line 3330
    invoke-virtual {v13, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/mbridge/msdk/mbjscommon/windvane/d;)V

    .line 3331
    invoke-virtual {v13, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    .line 3332
    invoke-virtual {v13, v12}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    .line 3333
    invoke-virtual {v13, v14}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setRid(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_3

    :catch_0
    move-exception v0

    .line 3335
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_4

    .line 3336
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RewardCampaignsResourceManager"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    :goto_3
    return-void
.end method
