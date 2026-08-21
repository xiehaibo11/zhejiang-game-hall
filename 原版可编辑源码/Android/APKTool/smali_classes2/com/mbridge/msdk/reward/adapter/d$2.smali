.class final Lcom/mbridge/msdk/reward/adapter/d$2;
.super Lcom/mbridge/msdk/reward/c/a;
.source "RewardMVVideoAdapter.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/reward/adapter/d;->b(Ljava/lang/String;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/reward/adapter/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/reward/adapter/d;)V
    .locals 0

    .line 1593
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-direct {p0}, Lcom/mbridge/msdk/reward/c/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/String;)V
    .locals 11

    const-string v0, "RewardMVVideoAdapter"

    .line 1641
    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1642
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "V3 \u6570\u636e\u8bf7\u6c42\u5931\u8d25 errorCode "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "errorMsg "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "HBOPTIMIZE"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v2, 0x0

    .line 1644
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "load offer failed: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v5

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v6

    const-string v7, ""

    const-string v8, ""

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-object v9, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v9}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide v9

    sub-long v9, v0, v9

    invoke-static/range {v2 .. v10}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 1648
    :catch_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onLoadCompaginFailed load failed errorCode:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " msg:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RewardMVVideoAdapter"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, -0x1

    if-ne p1, v0, :cond_0

    .line 1651
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-static {p1, v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;J)J

    .line 1654
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->e(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 1655
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->e(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object p1

    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->clear()V

    .line 1657
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 1658
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/List;->clear()V

    .line 1660
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    const/4 v0, 0x0

    iput-boolean v0, p1, Lcom/mbridge/msdk/reward/adapter/d;->e:Z

    .line 1661
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v0, p1, Lcom/mbridge/msdk/reward/adapter/d;->f:Z

    .line 1662
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object p1, p1, Lcom/mbridge/msdk/reward/adapter/d;->a:Ljava/lang/Object;

    monitor-enter p1

    .line 1663
    :try_start_1
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v1, v1, Lcom/mbridge/msdk/reward/adapter/d;->g:Z

    if-eqz v1, :cond_3

    .line 1664
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v0, v1, Lcom/mbridge/msdk/reward/adapter/d;->g:Z

    .line 1666
    :cond_3
    monitor-exit p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1667
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v0, p1, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    .line 1668
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v0, p1, Lcom/mbridge/msdk/reward/adapter/d;->h:Z

    .line 1669
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;)V

    .line 1670
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->q(Lcom/mbridge/msdk/reward/adapter/d;)V

    return-void

    :catchall_0
    move-exception p2

    .line 1666
    :try_start_2
    monitor-exit p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw p2
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V
    .locals 13

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "RewardMVVideoAdapter"

    const-string v2, "onLoadCompaginSuccess \u6570\u636e\u521a\u8bf7\u6c42\u56de\u6765"

    .line 1598
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "HBOPTIMIZE"

    .line 1599
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "V3 \u6570\u636e\u521a\u8bf7\u6c42\u56de\u6765 requestId "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getRequestId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p1, :cond_1

    .line 1600
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v1

    if-eqz v1, :cond_1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-lez v1, :cond_1

    .line 1602
    :try_start_1
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v1

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    move-object v2, v1

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v3

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "load offer success tpl "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v4

    invoke-virtual {v4, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    const/4 v4, 0x1

    goto :goto_0

    :cond_0
    move v4, v0

    :goto_0
    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v5

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v6

    const-string v7, ""

    const-string v8, ""

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v9

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide v11

    sub-long/2addr v9, v11

    invoke-static/range {v2 .. v10}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    .line 1607
    :catch_0
    :cond_1
    :try_start_2
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1, p1}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V

    .line 1608
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getRequestId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, v1, Lcom/mbridge/msdk/reward/adapter/d;->b:Ljava/lang/String;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto/16 :goto_1

    :catch_1
    move-exception p1

    .line 1610
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_2

    .line 1611
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    const-string v1, "RewardMVVideoAdapter"

    const-string v2, "onLoadCompaginSuccess \u6570\u636e\u521a\u8bf7\u6c42\u5931\u8d25"

    .line 1613
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1614
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->e(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v1

    if-eqz v1, :cond_3

    .line 1615
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->e(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->clear()V

    .line 1617
    :cond_3
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v1

    if-eqz v1, :cond_4

    .line 1618
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->d(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->clear()V

    .line 1620
    :cond_4
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v0, v1, Lcom/mbridge/msdk/reward/adapter/d;->e:Z

    .line 1621
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v0, v1, Lcom/mbridge/msdk/reward/adapter/d;->f:Z

    .line 1622
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v1, v1, Lcom/mbridge/msdk/reward/adapter/d;->a:Ljava/lang/Object;

    monitor-enter v1

    .line 1623
    :try_start_3
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v2, v2, Lcom/mbridge/msdk/reward/adapter/d;->g:Z

    if-eqz v2, :cond_5

    .line 1624
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v0, v2, Lcom/mbridge/msdk/reward/adapter/d;->g:Z

    .line 1626
    :cond_5
    monitor-exit v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 1627
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v0, v1, Lcom/mbridge/msdk/reward/adapter/d;->i:Z

    .line 1628
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    iput-boolean v0, v1, Lcom/mbridge/msdk/reward/adapter/d;->h:Z

    const/4 v2, 0x0

    .line 1630
    :try_start_4
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "load offer failed: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->f(Lcom/mbridge/msdk/reward/adapter/d;)Ljava/lang/String;

    move-result-object v5

    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->h(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v6

    const-string v7, ""

    const-string v8, ""

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->i(Lcom/mbridge/msdk/reward/adapter/d;)J

    move-result-wide v9

    sub-long v9, v0, v9

    invoke-static/range {v2 .. v10}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    .line 1634
    :catch_2
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    const-string v0, "exception after load success"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;)V

    .line 1635
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$2;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/adapter/d;->q(Lcom/mbridge/msdk/reward/adapter/d;)V

    :goto_1
    return-void

    :catchall_0
    move-exception p1

    .line 1626
    :try_start_5
    monitor-exit v1
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    throw p1
.end method
