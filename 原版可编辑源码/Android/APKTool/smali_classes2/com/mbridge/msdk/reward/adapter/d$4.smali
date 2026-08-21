.class final Lcom/mbridge/msdk/reward/adapter/d$4;
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
.field final synthetic a:Z

.field final synthetic b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic c:I

.field final synthetic d:Lcom/mbridge/msdk/reward/adapter/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/reward/adapter/d;ZLcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 0

    .line 2348
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$4;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean p2, p0, Lcom/mbridge/msdk/reward/adapter/d$4;->a:Z

    iput-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d$4;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput p4, p0, Lcom/mbridge/msdk/reward/adapter/d$4;->c:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    const-string p1, "RewardMVVideoAdapter"

    const-string p2, "template \u4e0b\u8f7d\u6210\u529f\uff1a "

    .line 2351
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 17

    move-object/from16 v0, p0

    move-object/from16 v1, p2

    move-object/from16 v11, p3

    move-object/from16 v12, p5

    const-string v13, "RewardMVVideoAdapter"

    const-string v2, "template \u4e0b\u8f7d\u5931\u8d25\uff1a "

    .line 2356
    invoke-static {v13, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2358
    iget-boolean v2, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->a:Z

    const/4 v14, 0x1

    if-nez v2, :cond_1

    iget-object v2, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v2

    if-eqz v2, :cond_1

    iget-object v2, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v2

    if-eqz v2, :cond_1

    const-string v2, "\u64ad\u653e\u6a21\u677f\u4e0b\u8f7d\u5931\u8d25\uff0c\u975e\u5927\u6a21\u677f"

    .line 2359
    invoke-static {v13, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2361
    :try_start_0
    iget-object v2, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "resource download failed: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " is tpl: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v5, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->a:Z

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    iget-object v5, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v5

    iget-object v6, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v6}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v6

    iget-object v7, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v8

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v9

    iget-object v7, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide v15

    sub-long/2addr v9, v15

    move-object/from16 v7, p3

    invoke-static/range {v2 .. v10}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 2364
    :catch_0
    iget-object v2, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v2

    if-eqz v2, :cond_0

    iget-object v2, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v2

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lez v2, :cond_0

    .line 2365
    iget-object v2, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v2

    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    const-string v1, "template download fail but hit ignoreCheckRule"

    .line 2366
    invoke-static {v13, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 2371
    :cond_0
    iget-object v2, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v2

    new-instance v3, Lcom/mbridge/msdk/reward/adapter/d$4$1;

    invoke-direct {v3, v0, v1, v12, v11}, Lcom/mbridge/msdk/reward/adapter/d$4$1;-><init>(Lcom/mbridge/msdk/reward/adapter/d$4;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v2, v3}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto/16 :goto_0

    .line 2389
    :cond_1
    iget v2, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->c:I

    if-ne v2, v14, :cond_4

    .line 2390
    iget-object v2, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v2

    if-eqz v2, :cond_3

    iget-object v2, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v2

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lez v2, :cond_3

    .line 2391
    iget-object v2, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v2

    const/4 v3, 0x3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    const-string v1, "tpl download fail but hit ignoreCheckRule"

    .line 2392
    invoke-static {v13, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 2395
    :cond_2
    iget-object v2, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v2

    iget-object v3, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 2396
    iget-object v2, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v2

    const/4 v3, 0x2

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    const-string v1, "endcard download fail but hit ignoreCheckRule at 3203"

    .line 2397
    invoke-static {v13, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 2402
    :cond_3
    iget-object v2, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v2

    if-eqz v2, :cond_4

    iget-object v2, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v2

    if-eqz v2, :cond_4

    .line 2403
    iget-object v2, v0, Lcom/mbridge/msdk/reward/adapter/d$4;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v2

    new-instance v3, Lcom/mbridge/msdk/reward/adapter/d$4$2;

    invoke-direct {v3, v0, v1, v11}, Lcom/mbridge/msdk/reward/adapter/d$4$2;-><init>(Lcom/mbridge/msdk/reward/adapter/d$4;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v2, v3}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_4
    :goto_0
    return-void
.end method
