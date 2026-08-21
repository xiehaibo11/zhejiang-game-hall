.class final Lcom/mbridge/msdk/reward/adapter/d$3;
.super Ljava/lang/Object;
.source "RewardMVVideoAdapter.java"

# interfaces
.implements Lcom/mbridge/msdk/reward/adapter/c$c;


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

    .line 2049
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean p2, p0, Lcom/mbridge/msdk/reward/adapter/d$3;->a:Z

    iput-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d$3;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput p4, p0, Lcom/mbridge/msdk/reward/adapter/d$3;->c:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;)V
    .locals 21
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

    move-object/from16 v8, p0

    move-object/from16 v0, p2

    move-object/from16 v9, p4

    .line 2053
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Campaign \u4e0b\u8f7d\u6210\u529f\uff1a "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p4 .. p4}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "RewardMVVideoAdapter"

    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2054
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    const/4 v10, 0x1

    iput-boolean v10, v1, Lcom/mbridge/msdk/reward/adapter/d;->e:Z

    const/4 v11, 0x0

    if-eqz v9, :cond_0

    .line 2056
    invoke-virtual/range {p4 .. p4}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 2058
    :try_start_0
    invoke-virtual {v9, v11}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    move-object v12, v1

    check-cast v12, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v13

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "resource download success is tpl :"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v2, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->a:Z

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v15

    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v16

    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v18

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iget-object v3, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide v3

    sub-long v19, v1, v3

    move-object/from16 v17, p3

    invoke-static/range {v12 .. v20}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 2063
    :catch_0
    :cond_0
    iget-boolean v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->a:Z

    if-nez v1, :cond_9

    const-string v1, "RewardMVVideoAdapter"

    const-string v2, "Campaign \u4e0b\u8f7d\u6210\u529f\uff1a \u975e\u5927\u6a21\u677f"

    .line 2064
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2065
    invoke-virtual/range {p4 .. p4}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v12

    :cond_1
    :goto_0
    invoke-interface {v12}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_c

    invoke-interface {v12}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    move-object v14, v1

    check-cast v14, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v14, :cond_2

    .line 2066
    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v1

    if-eqz v1, :cond_2

    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v1

    const-string v2, "cmpt=1"

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v1

    if-eqz v1, :cond_2

    const-string v1, "RewardMVVideoAdapter"

    const-string v2, "Campaign \u4e0b\u8f7d\u6210\u529f\uff1a \u975e\u5927\u6a21\u677f\uff0c\u5f00\u59cb\u9884\u52a0\u8f7d\u64ad\u653e\u6a21\u677f"

    .line 2067
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2068
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v13

    new-instance v15, Lcom/mbridge/msdk/reward/adapter/d$3$1;

    move-object v1, v15

    move-object/from16 v2, p0

    move-object v3, v14

    move-object/from16 v4, p1

    move-object/from16 v5, p2

    move-object/from16 v6, p3

    move-object/from16 v7, p4

    invoke-direct/range {v1 .. v7}, Lcom/mbridge/msdk/reward/adapter/d$3$1;-><init>(Lcom/mbridge/msdk/reward/adapter/d$3;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;)V

    invoke-virtual {v13, v15}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    :cond_2
    const-string v1, "RewardMVVideoAdapter"

    const-string v2, "Campaign \u4e0b\u8f7d\u6210\u529f\uff1a \u975e\u5927\u6a21\u677f\uff0c\u4e0d\u5b58\u5728\u64ad\u653e\u6a21\u677f"

    .line 2162
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2163
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->e(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v2

    iget-boolean v3, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->a:Z

    iget v4, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->c:I

    invoke-virtual {v1, v2, v3, v4}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/util/List;ZI)Z

    move-result v1

    const/4 v2, 0x5

    if-eqz v1, :cond_5

    const-string v1, "RewardMVVideoAdapter"

    const-string v3, "Campaign \u4e0b\u8f7d\u6210\u529f\uff1a \u975e\u5927\u6a21\u677f\uff0c\u4e0d\u5b58\u5728\u64ad\u653e\u6a21\u677f,isReay true"

    .line 2164
    invoke-static {v1, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2165
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u6a21\u677f\u52a0\u8f7d\u6210\u529f requestId "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "HBOPTIMIZE"

    invoke-static {v3, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2166
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v3

    iget-object v4, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v4}, Lcom/mbridge/msdk/reward/adapter/d;->g(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v4

    iget-object v5, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v5

    invoke-static {v1, v3, v9, v4, v5}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Ljava/util/List;Ljava/util/List;Z)V

    .line 2167
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v1

    if-eqz v1, :cond_3

    .line 2168
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, v2}, Landroid/os/Handler;->removeMessages(I)V

    .line 2170
    :cond_3
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 2171
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v1, v1, Lcom/mbridge/msdk/reward/adapter/d;->h:Z

    if-nez v1, :cond_1

    .line 2172
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v10, v1, Lcom/mbridge/msdk/reward/adapter/d;->h:Z

    .line 2173
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    .line 2174
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iget-object v3, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide v3

    sub-long/2addr v1, v3

    .line 2175
    iget-object v3, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v3

    iget-object v4, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v4}, Lcom/mbridge/msdk/reward/adapter/d;->e(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v4

    iget-object v5, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v5}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v3, v4, v5, v1, v2}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;J)V

    .line 2177
    :cond_4
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v1

    invoke-interface {v1}, Lcom/mbridge/msdk/reward/adapter/b;->a()V

    const-string v1, "RewardMVVideoAdapter"

    const-string v2, "Campaign \u4e0b\u8f7d\u6210\u529f\uff1a \u975e\u5927\u6a21\u677f\uff0c\u64ad\u653e\u6a21\u677f\u9884\u52a0\u8f7d\u6210\u529f,isReay true onVideoLoadSuccess"

    .line 2178
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    :cond_5
    const-string v1, "RewardMVVideoAdapter"

    const-string v3, "Campaign \u4e0b\u8f7d\u6210\u529f\uff1a \u975e\u5927\u6a21\u677f\uff0c\u4e0d\u5b58\u5728\u64ad\u653e\u6a21\u677f,isReay false"

    .line 2182
    invoke-static {v1, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2183
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u6a21\u677f\u52a0\u8f7d\u5931\u8d25 requestId "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v11}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "HBOPTIMIZE"

    invoke-static {v3, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2184
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v3

    iget-object v4, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v4}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v4

    invoke-static {v1, v0, v3, v4}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Ljava/util/List;Z)V

    .line 2185
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v1

    if-eqz v1, :cond_6

    .line 2186
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v1

    invoke-virtual {v1, v2}, Landroid/os/Handler;->removeMessages(I)V

    .line 2188
    :cond_6
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 2189
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v1, v1, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    if-nez v1, :cond_1

    .line 2190
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v10, v1, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    .line 2191
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_8

    if-eqz v14, :cond_7

    .line 2193
    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_7

    .line 2194
    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v1

    goto :goto_1

    :cond_7
    const-string v1, ""

    :goto_1
    move-object/from16 v19, v1

    .line 2196
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v13

    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v16

    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v17

    const-string v15, "have no temp but isReady false"

    move-object/from16 v18, p3

    invoke-static/range {v13 .. v19}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 2198
    :cond_8
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v1

    const-string v2, "errorCode: 3503 errorMessage: have no temp but isReady false"

    invoke-interface {v1, v2}, Lcom/mbridge/msdk/reward/adapter/b;->a(Ljava/lang/String;)V

    const-string v1, "RewardMVVideoAdapter"

    const-string v2, "Campaign \u4e0b\u8f7d\u6210\u529f\uff1a \u975e\u5927\u6a21\u677f\uff0c\u4e0d\u5b58\u5728\u64ad\u653e\u6a21\u677f,isReay false onVideoLoadFail"

    .line 2199
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_0

    :cond_9
    const-string v1, "RewardMVVideoAdapter"

    const-string v2, "Campaign \u4e0b\u8f7d\u6210\u529f\uff1a \u5927\u6a21\u677f"

    .line 2207
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2208
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v1, v1, Lcom/mbridge/msdk/reward/adapter/d;->f:Z

    if-eqz v1, :cond_b

    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v1, v1, Lcom/mbridge/msdk/reward/adapter/d;->g:Z

    if-nez v1, :cond_b

    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v1

    if-eqz v1, :cond_b

    const-string v1, "RewardMVVideoAdapter"

    const-string v2, "Campaign \u4e0b\u8f7d\u6210\u529f\uff1a \u5927\u6a21\u677f\uff0c\u5927\u6a21\u677f\u4e0b\u8f7d\u6210\u529f\uff0c\u5f00\u59cb\u9884\u52a0\u8f7d\u5927\u6a21\u677f"

    .line 2209
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2210
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v1, v1, Lcom/mbridge/msdk/reward/adapter/d;->a:Ljava/lang/Object;

    monitor-enter v1

    .line 2211
    :try_start_1
    iget-object v2, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v2, v2, Lcom/mbridge/msdk/reward/adapter/d;->g:Z

    if-eqz v2, :cond_a

    .line 2212
    monitor-exit v1

    return-void

    .line 2214
    :cond_a
    iget-object v2, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v10, v2, Lcom/mbridge/msdk/reward/adapter/d;->g:Z

    .line 2216
    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const-string v1, "test_pre_load_tpl"

    const-string v2, "Campaign \u4e0b\u8f7d\u6210\u529f\uff0c\u5927\u6a21\u677f\u4e0b\u8f7d\u6210\u529f\uff0c\u5f00\u59cb\u9884\u52a0\u8f7d\u5927\u6a21\u677f"

    .line 2217
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2218
    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v1

    new-instance v2, Lcom/mbridge/msdk/reward/adapter/d$3$2;

    move-object/from16 v3, p3

    invoke-direct {v2, v8, v3, v0, v9}, Lcom/mbridge/msdk/reward/adapter/d$3$2;-><init>(Lcom/mbridge/msdk/reward/adapter/d$3;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;)V

    invoke-virtual {v1, v2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_2

    :catchall_0
    move-exception v0

    .line 2216
    :try_start_2
    monitor-exit v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw v0

    .line 2309
    :cond_b
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Campaign \u4e0b\u8f7d\u6210\u529f\uff1a \u5927\u6a21\u677f\uff0c\u5927\u6a21\u677f\u4e0b\u8f7d\u4e0d\u6210\u529f\uff1a isCampaignTPLDownloadSuccess\uff1a "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v1, v1, Lcom/mbridge/msdk/reward/adapter/d;->f:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, "  isCampaignTPLProLoad\uff1a "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, v8, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v1, v1, Lcom/mbridge/msdk/reward/adapter/d;->g:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RewardMVVideoAdapter"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_c
    :goto_2
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;Ljava/lang/String;)V
    .locals 16
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

    move-object/from16 v6, p0

    move-object/from16 v3, p4

    .line 2316
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Campaign \u4e0b\u8f7d\u5931\u8d25\uff1a "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p4 .. p4}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RewardMVVideoAdapter"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2317
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6a21\u677f\u52a0\u8f7d\u5931\u8d25 requestId "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v5, p3

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "HBOPTIMIZE"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2319
    iget-object v0, v6, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/mbridge/msdk/reward/adapter/d;->e:Z

    if-eqz v3, :cond_0

    .line 2320
    invoke-virtual/range {p4 .. p4}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 2322
    :try_start_0
    invoke-virtual {v3, v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    move-object v7, v0

    check-cast v7, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v0, v6, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v8

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "resource download failed: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object/from16 v4, p5

    :try_start_1
    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " is tpl: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, v6, Lcom/mbridge/msdk/reward/adapter/d$3;->a:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    iget-object v0, v6, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v10

    iget-object v0, v6, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v11

    iget-object v0, v6, Lcom/mbridge/msdk/reward/adapter/d$3;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v13

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-object v2, v6, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide v14

    sub-long v14, v0, v14

    move-object/from16 v12, p3

    invoke-static/range {v7 .. v15}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_0
    :cond_0
    move-object/from16 v4, p5

    .line 2326
    :catch_1
    :goto_0
    iget-object v0, v6, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->c(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/reward/adapter/b;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, v6, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 2327
    iget-object v0, v6, Lcom/mbridge/msdk/reward/adapter/d$3;->d:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->k(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/os/Handler;

    move-result-object v7

    new-instance v8, Lcom/mbridge/msdk/reward/adapter/d$3$3;

    move-object v0, v8

    move-object/from16 v1, p0

    move-object/from16 v2, p2

    move-object/from16 v3, p4

    move-object/from16 v4, p5

    move-object/from16 v5, p3

    invoke-direct/range {v0 .. v5}, Lcom/mbridge/msdk/reward/adapter/d$3$3;-><init>(Lcom/mbridge/msdk/reward/adapter/d$3;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v7, v8}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_1
    return-void
.end method
