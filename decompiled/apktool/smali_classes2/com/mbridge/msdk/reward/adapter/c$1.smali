.class final Lcom/mbridge/msdk/reward/adapter/c$1;
.super Ljava/lang/Object;
.source "RewardCampaignsResourceManager.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/reward/adapter/c;->a(Landroid/content/Context;ZIZILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;Lcom/mbridge/msdk/reward/adapter/c$c;Lcom/mbridge/msdk/reward/adapter/c$i;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/concurrent/CopyOnWriteArrayList;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:I

.field final synthetic e:Ljava/lang/String;

.field final synthetic f:Ljava/lang/String;

.field final synthetic g:Lcom/mbridge/msdk/reward/adapter/c$i;

.field final synthetic h:Lcom/mbridge/msdk/reward/adapter/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/reward/adapter/c;Ljava/util/concurrent/CopyOnWriteArrayList;Landroid/content/Context;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/reward/adapter/c$i;)V
    .locals 0

    .line 102
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$1;->h:Lcom/mbridge/msdk/reward/adapter/c;

    iput-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    iput-object p3, p0, Lcom/mbridge/msdk/reward/adapter/c$1;->b:Landroid/content/Context;

    iput-object p4, p0, Lcom/mbridge/msdk/reward/adapter/c$1;->c:Ljava/lang/String;

    iput p5, p0, Lcom/mbridge/msdk/reward/adapter/c$1;->d:I

    iput-object p6, p0, Lcom/mbridge/msdk/reward/adapter/c$1;->e:Ljava/lang/String;

    iput-object p7, p0, Lcom/mbridge/msdk/reward/adapter/c$1;->f:Ljava/lang/String;

    iput-object p8, p0, Lcom/mbridge/msdk/reward/adapter/c$1;->g:Lcom/mbridge/msdk/reward/adapter/c$i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 24

    move-object/from16 v1, p0

    .line 105
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_12

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-lez v0, :cond_12

    const-string v2, "RewardCampaignsResourceManager"

    const-string v0, "\u5f00\u59cb\u4e0b\u8f7d video"

    .line 107
    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 109
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v0

    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setCampaignList(Ljava/util/concurrent/CopyOnWriteArrayList;)V

    .line 110
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v4

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->b:Landroid/content/Context;

    iget-object v6, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->c:Ljava/lang/String;

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    iget v8, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->d:I

    new-instance v9, Lcom/mbridge/msdk/reward/adapter/c$f;

    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->h:Lcom/mbridge/msdk/reward/adapter/c;

    .line 111
    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/c;->a(Lcom/mbridge/msdk/reward/adapter/c;)Lcom/mbridge/msdk/reward/adapter/c$h;

    move-result-object v0

    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->e:Ljava/lang/String;

    iget-object v10, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->c:Ljava/lang/String;

    iget-object v11, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->f:Ljava/lang/String;

    invoke-direct {v9, v0, v3, v10, v11}, Lcom/mbridge/msdk/reward/adapter/c$f;-><init>(Landroid/os/Handler;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 110
    invoke-virtual/range {v4 .. v9}, Lcom/mbridge/msdk/videocommon/download/b;->createUnitCache(Landroid/content/Context;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;ILcom/mbridge/msdk/videocommon/listener/a;)Lcom/mbridge/msdk/videocommon/download/d;

    .line 112
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v0

    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->c:Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/videocommon/download/b;->load(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 114
    sget-boolean v3, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v3, :cond_0

    .line 115
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 119
    :cond_0
    :goto_0
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_1
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_12

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    move-object v14, v0

    check-cast v14, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez v14, :cond_1

    goto :goto_1

    .line 123
    :cond_1
    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v15

    const-string v13, ".zip"

    const-string v12, ""

    if-eqz v15, :cond_4

    .line 125
    invoke-virtual {v15}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v0

    .line 126
    invoke-virtual {v15}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->b()I

    move-result v4

    .line 127
    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v5

    if-eqz v5, :cond_2

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ae;->i(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_2

    .line 128
    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->h:Lcom/mbridge/msdk/reward/adapter/c;

    const/4 v6, 0x1

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v5, v6, v14, v4, v0}, Lcom/mbridge/msdk/reward/adapter/c;->a(Lcom/mbridge/msdk/reward/adapter/c;ILcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_3

    .line 130
    :cond_2
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_4

    const-string v4, "cmpt=1"

    invoke-virtual {v0, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_4

    .line 131
    invoke-virtual {v0, v13}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_3

    const-string v4, "\u5f00\u59cb\u4e0b\u8f7d zip \u7c7b\u578b\u7684 template"

    .line 132
    invoke-static {v2, v4}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 134
    :try_start_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object v11

    new-instance v10, Lcom/mbridge/msdk/reward/adapter/c$g;

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->b:Landroid/content/Context;

    iget-object v6, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->e:Ljava/lang/String;

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->c:Ljava/lang/String;

    iget-object v8, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->f:Ljava/lang/String;

    const/16 v16, 0x35b

    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->h:Lcom/mbridge/msdk/reward/adapter/c;

    .line 138
    invoke-static {v4}, Lcom/mbridge/msdk/reward/adapter/c;->a(Lcom/mbridge/msdk/reward/adapter/c;)Lcom/mbridge/msdk/reward/adapter/c$h;

    move-result-object v17

    iget-object v9, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->g:Lcom/mbridge/msdk/reward/adapter/c$i;

    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2

    move-object/from16 v18, v4

    move-object v4, v10

    move-object/from16 v19, v9

    move-object v9, v14

    move-object/from16 v20, v3

    move-object v3, v10

    move/from16 v10, v16

    move-object/from16 v21, v11

    move-object/from16 v11, v17

    move-object/from16 v22, v12

    move-object/from16 v12, v19

    move-object/from16 v23, v13

    move-object/from16 v13, v18

    :try_start_2
    invoke-direct/range {v4 .. v13}, Lcom/mbridge/msdk/reward/adapter/c$g;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ILandroid/os/Handler;Lcom/mbridge/msdk/reward/adapter/c$i;Ljava/util/concurrent/CopyOnWriteArrayList;)V

    move-object/from16 v4, v21

    .line 134
    invoke-virtual {v4, v0, v3}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->downloadH5Res(Ljava/lang/String;Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_4

    :catch_1
    move-exception v0

    goto :goto_2

    :catch_2
    move-exception v0

    move-object/from16 v20, v3

    move-object/from16 v22, v12

    move-object/from16 v23, v13

    .line 142
    :goto_2
    sget-boolean v3, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v3, :cond_5

    .line 143
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_4

    :cond_3
    move-object/from16 v20, v3

    move-object/from16 v22, v12

    move-object/from16 v23, v13

    const-string v3, "\u5f00\u59cb\u4e0b\u8f7d html \u7c7b\u578b\u7684 template"

    .line 147
    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 149
    :try_start_3
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object v3

    new-instance v13, Lcom/mbridge/msdk/reward/adapter/c$d;

    const/16 v5, 0x35b

    iget-object v6, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->e:Ljava/lang/String;

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->c:Ljava/lang/String;

    iget-object v8, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->f:Ljava/lang/String;

    iget-object v10, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->g:Lcom/mbridge/msdk/reward/adapter/c$i;

    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->h:Lcom/mbridge/msdk/reward/adapter/c;

    .line 151
    invoke-static {v4}, Lcom/mbridge/msdk/reward/adapter/c;->a(Lcom/mbridge/msdk/reward/adapter/c;)Lcom/mbridge/msdk/reward/adapter/c$h;

    move-result-object v11

    iget-object v12, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    move-object v4, v13

    move-object v9, v14

    invoke-direct/range {v4 .. v12}, Lcom/mbridge/msdk/reward/adapter/c$d;-><init>(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/reward/adapter/c$i;Landroid/os/Handler;Ljava/util/concurrent/CopyOnWriteArrayList;)V

    .line 149
    invoke-virtual {v3, v0, v13}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->downloadH5Res(Ljava/lang/String;Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    goto :goto_4

    :catch_3
    move-exception v0

    .line 153
    sget-boolean v3, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v3, :cond_5

    .line 154
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_4

    :cond_4
    :goto_3
    move-object/from16 v20, v3

    move-object/from16 v22, v12

    move-object/from16 v23, v13

    .line 163
    :cond_5
    :goto_4
    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v10

    .line 164
    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    .line 165
    invoke-static {v10}, Lcom/mbridge/msdk/foundation/tools/ae;->j(Ljava/lang/String;)Z

    move-result v3

    .line 166
    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_8

    if-nez v0, :cond_6

    .line 168
    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->h:Lcom/mbridge/msdk/reward/adapter/c;

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->b:Landroid/content/Context;

    iget-object v6, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->e:Ljava/lang/String;

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->c:Ljava/lang/String;

    iget-object v8, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->f:Ljava/lang/String;

    iget-object v11, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->g:Lcom/mbridge/msdk/reward/adapter/c$i;

    iget-object v12, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    move-object v9, v14

    invoke-static/range {v4 .. v12}, Lcom/mbridge/msdk/reward/adapter/c;->a(Lcom/mbridge/msdk/reward/adapter/c;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Lcom/mbridge/msdk/reward/adapter/c$i;Ljava/util/concurrent/CopyOnWriteArrayList;)V

    goto :goto_6

    :cond_6
    if-eqz v3, :cond_7

    .line 172
    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->h:Lcom/mbridge/msdk/reward/adapter/c;

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->b:Landroid/content/Context;

    iget-object v6, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->e:Ljava/lang/String;

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->c:Ljava/lang/String;

    iget-object v8, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->f:Ljava/lang/String;

    iget-object v11, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->g:Lcom/mbridge/msdk/reward/adapter/c$i;

    iget-object v12, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    move-object v9, v14

    invoke-static/range {v4 .. v12}, Lcom/mbridge/msdk/reward/adapter/c;->a(Lcom/mbridge/msdk/reward/adapter/c;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Lcom/mbridge/msdk/reward/adapter/c$i;Ljava/util/concurrent/CopyOnWriteArrayList;)V

    goto :goto_6

    .line 175
    :cond_7
    invoke-static {v10}, Lcom/mbridge/msdk/foundation/tools/ae;->i(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_8

    :try_start_4
    const-string v0, "ecid"

    .line 178
    invoke-static {v10, v0}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 179
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    goto :goto_5

    :catchall_0
    move-exception v0

    const/16 v3, 0x194

    .line 182
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    move v0, v3

    .line 184
    :goto_5
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->h:Lcom/mbridge/msdk/reward/adapter/c;

    const/4 v4, 0x2

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-object/from16 v6, v22

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v4, v14, v0, v10}, Lcom/mbridge/msdk/reward/adapter/c;->a(Lcom/mbridge/msdk/reward/adapter/c;ILcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V

    .line 190
    :cond_8
    :goto_6
    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getEndScreenUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_9

    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-nez v0, :cond_9

    .line 191
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object v0

    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getEndScreenUrl()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->download(Ljava/lang/String;)V

    .line 195
    :cond_9
    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v0

    .line 196
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_a

    const-string v3, "\u5f00\u59cb\u4e0b\u8f7d icon"

    .line 197
    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 199
    :try_start_5
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->b:Landroid/content/Context;

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v3

    new-instance v11, Lcom/mbridge/msdk/reward/adapter/c$e;

    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->h:Lcom/mbridge/msdk/reward/adapter/c;

    invoke-static {v4}, Lcom/mbridge/msdk/reward/adapter/c;->a(Lcom/mbridge/msdk/reward/adapter/c;)Lcom/mbridge/msdk/reward/adapter/c$h;

    move-result-object v5

    const/4 v6, 0x0

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->e:Ljava/lang/String;

    iget-object v8, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->c:Ljava/lang/String;

    iget-object v9, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->f:Ljava/lang/String;

    move-object v4, v11

    move-object v10, v14

    invoke-direct/range {v4 .. v10}, Lcom/mbridge/msdk/reward/adapter/c$e;-><init>(Landroid/os/Handler;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    invoke-virtual {v3, v0, v11}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_4

    goto :goto_7

    :catch_4
    move-exception v0

    .line 204
    sget-boolean v3, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v3, :cond_a

    .line 205
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 209
    :cond_a
    :goto_7
    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v0

    .line 210
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_b

    const-string v3, "\u5f00\u59cb\u4e0b\u8f7d image"

    .line 211
    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 213
    :try_start_6
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->b:Landroid/content/Context;

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v3

    new-instance v11, Lcom/mbridge/msdk/reward/adapter/c$e;

    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->h:Lcom/mbridge/msdk/reward/adapter/c;

    invoke-static {v4}, Lcom/mbridge/msdk/reward/adapter/c;->a(Lcom/mbridge/msdk/reward/adapter/c;)Lcom/mbridge/msdk/reward/adapter/c$h;

    move-result-object v5

    const/4 v6, 0x0

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->e:Ljava/lang/String;

    iget-object v8, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->c:Ljava/lang/String;

    iget-object v9, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->f:Ljava/lang/String;

    move-object v4, v11

    move-object v10, v14

    invoke-direct/range {v4 .. v10}, Lcom/mbridge/msdk/reward/adapter/c$e;-><init>(Landroid/os/Handler;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    invoke-virtual {v3, v0, v11}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_5

    goto :goto_8

    :catch_5
    move-exception v0

    .line 218
    sget-boolean v3, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v3, :cond_b

    .line 219
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_b
    :goto_8
    if-eqz v15, :cond_11

    .line 226
    invoke-virtual {v15}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->d()Ljava/lang/String;

    move-result-object v0

    .line 227
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_d

    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v3

    if-nez v3, :cond_d

    move-object/from16 v3, v23

    .line 228
    invoke-virtual {v0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_c

    const-string v3, "\u5f00\u59cb\u4e0b\u8f7d zip \u7c7b\u578b\u7684 pause"

    .line 229
    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 231
    :try_start_7
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object v3

    new-instance v13, Lcom/mbridge/msdk/reward/adapter/c$g;

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->b:Landroid/content/Context;

    iget-object v6, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->e:Ljava/lang/String;

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->c:Ljava/lang/String;

    iget-object v8, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->f:Ljava/lang/String;

    const/16 v10, 0x139

    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->h:Lcom/mbridge/msdk/reward/adapter/c;

    .line 235
    invoke-static {v4}, Lcom/mbridge/msdk/reward/adapter/c;->a(Lcom/mbridge/msdk/reward/adapter/c;)Lcom/mbridge/msdk/reward/adapter/c$h;

    move-result-object v11

    iget-object v12, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->g:Lcom/mbridge/msdk/reward/adapter/c$i;

    iget-object v9, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_7

    move-object v4, v13

    move-object/from16 v16, v9

    move-object v9, v14

    move-object/from16 v17, v15

    move-object v15, v13

    move-object/from16 v13, v16

    :try_start_8
    invoke-direct/range {v4 .. v13}, Lcom/mbridge/msdk/reward/adapter/c$g;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ILandroid/os/Handler;Lcom/mbridge/msdk/reward/adapter/c$i;Ljava/util/concurrent/CopyOnWriteArrayList;)V

    .line 231
    invoke-virtual {v3, v0, v15}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->downloadH5Res(Ljava/lang/String;Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;)V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_6

    goto :goto_a

    :catch_6
    move-exception v0

    goto :goto_9

    :catch_7
    move-exception v0

    move-object/from16 v17, v15

    .line 239
    :goto_9
    sget-boolean v3, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v3, :cond_e

    .line 240
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_a

    :cond_c
    move-object/from16 v17, v15

    const-string v3, "\u5f00\u59cb\u4e0b\u8f7d html \u7c7b\u578b\u7684 pause"

    .line 244
    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 246
    :try_start_9
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object v3

    new-instance v13, Lcom/mbridge/msdk/reward/adapter/c$d;

    const/16 v5, 0x139

    iget-object v6, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->e:Ljava/lang/String;

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->c:Ljava/lang/String;

    iget-object v8, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->f:Ljava/lang/String;

    iget-object v10, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->g:Lcom/mbridge/msdk/reward/adapter/c$i;

    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->h:Lcom/mbridge/msdk/reward/adapter/c;

    .line 248
    invoke-static {v4}, Lcom/mbridge/msdk/reward/adapter/c;->a(Lcom/mbridge/msdk/reward/adapter/c;)Lcom/mbridge/msdk/reward/adapter/c$h;

    move-result-object v11

    iget-object v12, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    move-object v4, v13

    move-object v9, v14

    invoke-direct/range {v4 .. v12}, Lcom/mbridge/msdk/reward/adapter/c$d;-><init>(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/reward/adapter/c$i;Landroid/os/Handler;Ljava/util/concurrent/CopyOnWriteArrayList;)V

    .line 246
    invoke-virtual {v3, v0, v13}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->downloadH5Res(Ljava/lang/String;Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;)V
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_8

    goto :goto_a

    :catch_8
    move-exception v0

    .line 250
    sget-boolean v3, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v3, :cond_e

    .line 251
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_a

    :cond_d
    move-object/from16 v17, v15

    .line 257
    :cond_e
    :goto_a
    invoke-virtual/range {v17 .. v17}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->f()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_11

    .line 258
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_11

    .line 259
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :cond_f
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_11

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c$a;

    if-eqz v0, :cond_f

    .line 260
    iget-object v4, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c$a;->b:Ljava/util/List;

    if-eqz v4, :cond_f

    iget-object v4, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c$a;->b:Ljava/util/List;

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v4

    if-lez v4, :cond_f

    .line 261
    iget-object v0, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c$a;->b:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v11

    :cond_10
    :goto_b
    invoke-interface {v11}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_f

    invoke-interface {v11}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 262
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_10

    .line 264
    :try_start_a
    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->b:Landroid/content/Context;

    invoke-static {v4}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v12

    new-instance v13, Lcom/mbridge/msdk/reward/adapter/c$e;

    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->h:Lcom/mbridge/msdk/reward/adapter/c;

    .line 265
    invoke-static {v4}, Lcom/mbridge/msdk/reward/adapter/c;->a(Lcom/mbridge/msdk/reward/adapter/c;)Lcom/mbridge/msdk/reward/adapter/c$h;

    move-result-object v5

    const/4 v6, 0x1

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->e:Ljava/lang/String;

    iget-object v8, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->c:Ljava/lang/String;

    iget-object v9, v1, Lcom/mbridge/msdk/reward/adapter/c$1;->f:Ljava/lang/String;

    move-object v4, v13

    move-object v10, v14

    invoke-direct/range {v4 .. v10}, Lcom/mbridge/msdk/reward/adapter/c$e;-><init>(Landroid/os/Handler;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 264
    invoke-virtual {v12, v0, v13}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_9

    goto :goto_b

    :catch_9
    move-exception v0

    .line 271
    sget-boolean v4, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v4, :cond_10

    .line 272
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_b

    :cond_11
    move-object/from16 v3, v20

    goto/16 :goto_1

    :cond_12
    return-void
.end method
