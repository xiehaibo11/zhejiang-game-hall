.class final Lcom/mbridge/msdk/reward/a/a$4;
.super Ljava/lang/Object;
.source "RewardVideoController.java"

# interfaces
.implements Lcom/mbridge/msdk/reward/adapter/c$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/reward/a/a;->a(Ljava/util/concurrent/CopyOnWriteArrayList;Lcom/mbridge/msdk/reward/adapter/d;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic c:Lcom/mbridge/msdk/reward/adapter/d;

.field final synthetic d:I

.field final synthetic e:Lcom/mbridge/msdk/reward/a/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/reward/a/a;ZLcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/reward/adapter/d;I)V
    .locals 0

    .line 1349
    iput-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    iput-boolean p2, p0, Lcom/mbridge/msdk/reward/a/a$4;->a:Z

    iput-object p3, p0, Lcom/mbridge/msdk/reward/a/a$4;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object p4, p0, Lcom/mbridge/msdk/reward/a/a$4;->c:Lcom/mbridge/msdk/reward/adapter/d;

    iput p5, p0, Lcom/mbridge/msdk/reward/a/a$4;->d:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;)V
    .locals 20
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    move-object/from16 v7, p0

    move-object/from16 v8, p2

    move-object/from16 v9, p4

    .line 1354
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Campaign Cache \u4e0b\u8f7d\u6210\u529f\uff1a "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p4 .. p4}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v10, "RewardVideoController"

    invoke-static {v10, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1355
    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    const/4 v11, 0x1

    iput-boolean v11, v0, Lcom/mbridge/msdk/reward/a/a;->c:Z

    .line 1357
    iget-boolean v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->a:Z

    if-nez v0, :cond_6

    const-string v0, "Campaign Cache \u4e0b\u8f7d\u6210\u529f\uff1a \u975e\u5927\u6a21\u677f"

    .line 1358
    invoke-static {v10, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1359
    invoke-virtual/range {p4 .. p4}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v12

    :cond_0
    :goto_0
    invoke-interface {v12}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_7

    invoke-interface {v12}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    move-object v14, v0

    check-cast v14, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v14, :cond_1

    .line 1360
    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1361
    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v0

    .line 1360
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 1361
    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v0

    const-string v1, "cmpt=1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    .line 1362
    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->q(Lcom/mbridge/msdk/reward/a/a;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1363
    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->q(Lcom/mbridge/msdk/reward/a/a;)Landroid/os/Handler;

    move-result-object v13

    new-instance v15, Lcom/mbridge/msdk/reward/a/a$4$1;

    move-object v0, v15

    move-object/from16 v1, p0

    move-object v2, v14

    move-object/from16 v3, p4

    move-object/from16 v4, p1

    move-object/from16 v5, p2

    move-object/from16 v6, p3

    invoke-direct/range {v0 .. v6}, Lcom/mbridge/msdk/reward/a/a$4$1;-><init>(Lcom/mbridge/msdk/reward/a/a$4;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/concurrent/CopyOnWriteArrayList;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v13, v15}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_1

    :cond_1
    const-string v0, "Campaign Cache \u4e0b\u8f7d\u6210\u529f\uff1a \u975e\u5927\u6a21\u677f\uff0c\u4e0d\u5b58\u5728\u64ad\u653e\u6a21\u677f"

    .line 1415
    invoke-static {v10, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1416
    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->c:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz v0, :cond_3

    iget-boolean v1, v7, Lcom/mbridge/msdk/reward/a/a$4;->a:Z

    iget v2, v7, Lcom/mbridge/msdk/reward/a/a$4;->d:I

    invoke-virtual {v0, v9, v1, v2}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/util/List;ZI)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1417
    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 1418
    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    iget-boolean v0, v0, Lcom/mbridge/msdk/reward/a/a;->g:Z

    if-nez v0, :cond_2

    .line 1419
    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    iput-boolean v11, v0, Lcom/mbridge/msdk/reward/a/a;->g:Z

    const-string v0, "Cache onVideoLoadSuccessForCache"

    .line 1420
    invoke-static {v10, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1421
    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->m(Lcom/mbridge/msdk/reward/a/a;)Landroid/content/Context;

    move-result-object v0

    iget-object v1, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v1

    const-wide/16 v2, 0x0

    invoke-static {v0, v9, v1, v2, v3}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;J)V

    .line 1422
    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v0

    move-object/from16 v3, p1

    invoke-static {v0, v3, v8}, Lcom/mbridge/msdk/reward/a/a$c;->b(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    :cond_2
    :goto_1
    move-object/from16 v3, p1

    goto/16 :goto_0

    :cond_3
    move-object/from16 v3, p1

    .line 1426
    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->b(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/List;

    move-result-object v1

    invoke-static {v0, v8, v1}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;Ljava/lang/String;Ljava/util/List;)V

    .line 1427
    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1428
    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    iget-boolean v0, v0, Lcom/mbridge/msdk/reward/a/a;->f:Z

    if-nez v0, :cond_0

    .line 1429
    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    iput-boolean v11, v0, Lcom/mbridge/msdk/reward/a/a;->f:Z

    const-string v0, "Cache onVideoLoadFailForCache"

    .line 1430
    invoke-static {v10, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, ""

    if-eqz v14, :cond_5

    .line 1433
    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_4

    goto :goto_2

    :cond_4
    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v0

    :cond_5
    :goto_2
    move-object/from16 v19, v0

    .line 1435
    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->m(Lcom/mbridge/msdk/reward/a/a;)Landroid/content/Context;

    move-result-object v13

    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v16

    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->i(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v17

    const-string v15, "have no temp but isReady false"

    move-object/from16 v18, p3

    invoke-static/range {v13 .. v19}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 1436
    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object v0

    const-string v1, "errorCode: 3503 errorMessage: have no temp but isReady false"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/reward/a/a$c;->d(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V

    goto/16 :goto_0

    :cond_6
    move-object/from16 v3, p1

    const-string v0, "Campaign Cache \u4e0b\u8f7d\u6210\u529f\uff1a \u5927\u6a21\u677f"

    .line 1444
    invoke-static {v10, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1445
    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    iget-boolean v0, v0, Lcom/mbridge/msdk/reward/a/a;->d:Z

    if-eqz v0, :cond_7

    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    iget-boolean v0, v0, Lcom/mbridge/msdk/reward/a/a;->e:Z

    if-nez v0, :cond_7

    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->q(Lcom/mbridge/msdk/reward/a/a;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_7

    const-string v0, "Campaign Cache \u4e0b\u8f7d\u6210\u529f\uff1a \u5927\u6a21\u677f\uff0ccampaign \u4e0b\u8f7d\u6210\u529f\uff0c\u5f00\u59cb\u9884\u52a0\u8f7d\u5927\u6a21\u677f"

    .line 1446
    invoke-static {v10, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1447
    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    iput-boolean v11, v0, Lcom/mbridge/msdk/reward/a/a;->e:Z

    .line 1448
    iget-object v0, v7, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a;->q(Lcom/mbridge/msdk/reward/a/a;)Landroid/os/Handler;

    move-result-object v6

    new-instance v10, Lcom/mbridge/msdk/reward/a/a$4$2;

    move-object v0, v10

    move-object/from16 v1, p0

    move-object/from16 v2, p3

    move-object/from16 v3, p1

    move-object/from16 v4, p2

    move-object/from16 v5, p4

    invoke-direct/range {v0 .. v5}, Lcom/mbridge/msdk/reward/a/a$4$2;-><init>(Lcom/mbridge/msdk/reward/a/a$4;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;)V

    invoke-virtual {v6, v10}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_7
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;Ljava/lang/String;)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 1504
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Campaign Cache \u4e0b\u8f7d\u5931\u8d25\uff1a "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result p4

    invoke-virtual {p1, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p4, "RewardVideoController"

    invoke-static {p4, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1505
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    const/4 p4, 0x0

    iput-boolean p4, p1, Lcom/mbridge/msdk/reward/a/a;->c:Z

    .line 1506
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->b(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/List;

    move-result-object v0

    invoke-static {p1, p2, v0}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;Ljava/lang/String;Ljava/util/List;)V

    .line 1507
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 1508
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    iget-boolean p1, p1, Lcom/mbridge/msdk/reward/a/a;->f:Z

    if-nez p1, :cond_1

    .line 1509
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    const/4 p2, 0x1

    iput-boolean p2, p1, Lcom/mbridge/msdk/reward/a/a;->f:Z

    .line 1510
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p1

    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result p1

    if-lez p1, :cond_0

    .line 1511
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->m(Lcom/mbridge/msdk/reward/a/a;)Landroid/content/Context;

    move-result-object v0

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p1

    invoke-virtual {p1, p4}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object p1

    move-object v1, p1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, ""

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;

    move-result-object v3

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->i(Lcom/mbridge/msdk/reward/a/a;)Z

    move-result v4

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v6

    move-object v5, p3

    invoke-static/range {v0 .. v6}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 1513
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a$4;->e:Lcom/mbridge/msdk/reward/a/a;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a;->d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;

    move-result-object p1

    const-string p2, "errorCode: 3201 errorMessage: campaign resource download failed"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/reward/a/a$c;->d(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V

    :cond_1
    return-void
.end method
