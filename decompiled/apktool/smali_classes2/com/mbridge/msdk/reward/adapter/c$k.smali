.class final Lcom/mbridge/msdk/reward/adapter/c$k;
.super Lcom/mbridge/msdk/mbjscommon/c/b;
.source "RewardCampaignsResourceManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/reward/adapter/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "k"
.end annotation


# instance fields
.field private a:Landroid/os/Handler;

.field private b:Ljava/lang/Runnable;

.field private final c:Z

.field private final d:Z

.field private e:Ljava/lang/String;

.field private final f:Lcom/mbridge/msdk/reward/adapter/c$j;

.field private final g:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

.field private final h:Ljava/lang/String;

.field private final i:Ljava/lang/String;

.field private final j:Ljava/lang/String;

.field private final k:Lcom/mbridge/msdk/videocommon/a$a;

.field private final l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private m:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private n:J

.field private o:Z

.field private p:Z

.field private final q:Ljava/lang/Runnable;

.field private final r:Ljava/lang/Runnable;


# direct methods
.method public constructor <init>(Landroid/os/Handler;Ljava/lang/Runnable;ZZLjava/lang/String;Lcom/mbridge/msdk/reward/adapter/c$j;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/concurrent/CopyOnWriteArrayList;J)V
    .locals 16
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/os/Handler;",
            "Ljava/lang/Runnable;",
            "ZZ",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/reward/adapter/c$j;",
            "Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/videocommon/a$a;",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;J)V"
        }
    .end annotation

    move-object/from16 v12, p0

    move-object/from16 v13, p1

    .line 1627
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/mbjscommon/c/b;-><init>()V

    .line 1628
    iput-object v13, v12, Lcom/mbridge/msdk/reward/adapter/c$k;->a:Landroid/os/Handler;

    move-object/from16 v0, p2

    .line 1629
    iput-object v0, v12, Lcom/mbridge/msdk/reward/adapter/c$k;->b:Ljava/lang/Runnable;

    move/from16 v0, p3

    .line 1630
    iput-boolean v0, v12, Lcom/mbridge/msdk/reward/adapter/c$k;->c:Z

    move/from16 v14, p4

    .line 1631
    iput-boolean v14, v12, Lcom/mbridge/msdk/reward/adapter/c$k;->d:Z

    move-object/from16 v15, p5

    .line 1632
    iput-object v15, v12, Lcom/mbridge/msdk/reward/adapter/c$k;->e:Ljava/lang/String;

    move-object/from16 v11, p6

    .line 1633
    iput-object v11, v12, Lcom/mbridge/msdk/reward/adapter/c$k;->f:Lcom/mbridge/msdk/reward/adapter/c$j;

    move-object/from16 v0, p7

    .line 1634
    iput-object v0, v12, Lcom/mbridge/msdk/reward/adapter/c$k;->g:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-object/from16 v9, p8

    .line 1635
    iput-object v9, v12, Lcom/mbridge/msdk/reward/adapter/c$k;->h:Ljava/lang/String;

    move-object/from16 v10, p10

    .line 1636
    iput-object v10, v12, Lcom/mbridge/msdk/reward/adapter/c$k;->i:Ljava/lang/String;

    move-object/from16 v8, p9

    .line 1637
    iput-object v8, v12, Lcom/mbridge/msdk/reward/adapter/c$k;->j:Ljava/lang/String;

    move-object/from16 v7, p11

    .line 1638
    iput-object v7, v12, Lcom/mbridge/msdk/reward/adapter/c$k;->k:Lcom/mbridge/msdk/videocommon/a$a;

    move-object/from16 v6, p12

    .line 1639
    iput-object v6, v12, Lcom/mbridge/msdk/reward/adapter/c$k;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-object/from16 v0, p13

    .line 1640
    iput-object v0, v12, Lcom/mbridge/msdk/reward/adapter/c$k;->m:Ljava/util/concurrent/CopyOnWriteArrayList;

    move-wide/from16 v4, p14

    .line 1641
    iput-wide v4, v12, Lcom/mbridge/msdk/reward/adapter/c$k;->n:J

    .line 1643
    new-instance v3, Lcom/mbridge/msdk/reward/adapter/c$k$1;

    move-object v0, v3

    move-object/from16 v1, p0

    move-object/from16 v2, p6

    move-object v14, v3

    move-object/from16 v3, p11

    move-object/from16 v4, p10

    move-object/from16 v5, p5

    move-object/from16 v6, p8

    move-object/from16 v7, p12

    move/from16 v8, p4

    move-wide/from16 v9, p14

    move-object/from16 v11, p9

    invoke-direct/range {v0 .. v11}, Lcom/mbridge/msdk/reward/adapter/c$k$1;-><init>(Lcom/mbridge/msdk/reward/adapter/c$k;Lcom/mbridge/msdk/reward/adapter/c$j;Lcom/mbridge/msdk/videocommon/a$a;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZJLjava/lang/String;)V

    iput-object v14, v12, Lcom/mbridge/msdk/reward/adapter/c$k;->r:Ljava/lang/Runnable;

    .line 1677
    new-instance v14, Lcom/mbridge/msdk/reward/adapter/c$k$2;

    move-object v0, v14

    invoke-direct/range {v0 .. v11}, Lcom/mbridge/msdk/reward/adapter/c$k$2;-><init>(Lcom/mbridge/msdk/reward/adapter/c$k;Lcom/mbridge/msdk/reward/adapter/c$j;Lcom/mbridge/msdk/videocommon/a$a;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZJLjava/lang/String;)V

    iput-object v14, v12, Lcom/mbridge/msdk/reward/adapter/c$k;->q:Ljava/lang/Runnable;

    if-eqz v13, :cond_0

    .line 1711
    iget-object v0, v12, Lcom/mbridge/msdk/reward/adapter/c$k;->r:Ljava/lang/Runnable;

    const-wide/16 v1, 0x1388

    invoke-virtual {v13, v0, v1, v2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Landroid/webkit/WebView;I)V
    .locals 11

    .line 1717
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/c/b;->a(Landroid/webkit/WebView;I)V

    .line 1718
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->a:Landroid/os/Handler;

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->q:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    .line 1719
    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1722
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->a:Landroid/os/Handler;

    if-eqz p1, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->r:Ljava/lang/Runnable;

    if-eqz v0, :cond_1

    .line 1723
    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1726
    :cond_1
    iget-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->p:Z

    if-nez p1, :cond_9

    .line 1728
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "preload temp readState: "

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->i:Ljava/lang/String;

    iget-boolean v4, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->d:Z

    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->e:Ljava/lang/String;

    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1729
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v6

    .line 1730
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    iget-wide v9, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->n:J

    sub-long/2addr v7, v9

    .line 1728
    invoke-static/range {v0 .. v8}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 1734
    :catch_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->i:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "_"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->h:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 p1, 0x1

    if-ne p2, p1, :cond_7

    .line 1736
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "TempalteWindVaneWebviewClient template \u9884\u52a0\u8f7d\u6210\u529f state \uff1a"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v1, "WindVaneWebView"

    invoke-static {v1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1737
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->b:Ljava/lang/Runnable;

    if-eqz p2, :cond_2

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->a:Landroid/os/Handler;

    if-eqz v2, :cond_2

    .line 1738
    invoke-virtual {v2, p2}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1741
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object p2

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->i:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->e:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->h:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setTemplatePreLoadDone(Ljava/lang/String;Z)V

    .line 1742
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->k:Lcom/mbridge/msdk/videocommon/a$a;

    if-eqz p2, :cond_3

    .line 1743
    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/videocommon/a$a;->a(Z)V

    .line 1745
    :cond_3
    iget-boolean p2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->c:Z

    if-eqz p2, :cond_5

    .line 1746
    iget-boolean p2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->d:Z

    const/16 v0, 0x11f

    if-eqz p2, :cond_4

    const-string p2, "put templeteCache in bidIVCache "

    .line 1747
    invoke-static {v1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1748
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object p2

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->k:Lcom/mbridge/msdk/videocommon/a$a;

    invoke-static {v0, p2, v1}, Lcom/mbridge/msdk/videocommon/a;->a(ILjava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V

    goto :goto_0

    :cond_4
    const-string p2, "put templeteCache in iVCache "

    .line 1750
    invoke-static {v1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1751
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object p2

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->k:Lcom/mbridge/msdk/videocommon/a$a;

    invoke-static {v0, p2, v1}, Lcom/mbridge/msdk/videocommon/a;->b(ILjava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V

    goto :goto_0

    .line 1754
    :cond_5
    iget-boolean p2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->d:Z

    const/16 v0, 0x5e

    if-eqz p2, :cond_6

    const-string p2, "put templeteCache in bidRVCache "

    .line 1755
    invoke-static {v1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1756
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object p2

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->k:Lcom/mbridge/msdk/videocommon/a$a;

    invoke-static {v0, p2, v1}, Lcom/mbridge/msdk/videocommon/a;->a(ILjava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V

    goto :goto_0

    :cond_6
    const-string p2, "put templeteCache in rVCache "

    .line 1758
    invoke-static {v1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1759
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object p2

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->k:Lcom/mbridge/msdk/videocommon/a$a;

    invoke-static {v0, p2, v1}, Lcom/mbridge/msdk/videocommon/a;->b(ILjava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V

    .line 1763
    :goto_0
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->f:Lcom/mbridge/msdk/reward/adapter/c$j;

    if-eqz v2, :cond_8

    .line 1764
    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->j:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->i:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->e:Ljava/lang/String;

    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->h:Ljava/lang/String;

    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->k:Lcom/mbridge/msdk/videocommon/a$a;

    invoke-interface/range {v2 .. v8}, Lcom/mbridge/msdk/reward/adapter/c$j;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V

    goto :goto_1

    .line 1767
    :cond_7
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->f:Lcom/mbridge/msdk/reward/adapter/c$j;

    if-eqz v2, :cond_8

    .line 1768
    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->j:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->i:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->e:Ljava/lang/String;

    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->h:Ljava/lang/String;

    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->k:Lcom/mbridge/msdk/videocommon/a$a;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "state "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-interface/range {v2 .. v9}, Lcom/mbridge/msdk/reward/adapter/c$j;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;Ljava/lang/String;)V

    .line 1771
    :cond_8
    :goto_1
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->p:Z

    :cond_9
    return-void
.end method

.method public final a(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 20

    move-object/from16 v1, p0

    move-object/from16 v0, p3

    .line 1777
    invoke-super/range {p0 .. p4}, Lcom/mbridge/msdk/mbjscommon/c/b;->a(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    .line 1778
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "TempalteWindVaneWebviewClient preLoadTemplate onReceivedError: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v10, "WindVaneWebView"

    invoke-static {v10, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1779
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->i:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "_"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->e:Ljava/lang/String;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->h:Ljava/lang/String;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v5, 0x0

    invoke-virtual {v2, v3, v5}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setTemplatePreLoadDone(Ljava/lang/String;Z)V

    .line 1781
    :try_start_0
    iget-object v11, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v12

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "WebView onReceivedError exception: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    iget-object v14, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->i:Ljava/lang/String;

    iget-boolean v15, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->d:Z

    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->e:Ljava/lang/String;

    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1783
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v17

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    iget-wide v8, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->n:J

    sub-long v18, v6, v8

    move-object/from16 v16, v2

    .line 1781
    invoke-static/range {v11 .. v19}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 1788
    :catch_0
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->a:Landroid/os/Handler;

    if-eqz v2, :cond_1

    .line 1789
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->q:Ljava/lang/Runnable;

    if-eqz v3, :cond_0

    .line 1790
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->r:Ljava/lang/Runnable;

    invoke-virtual {v2, v3}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1793
    :cond_0
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->q:Ljava/lang/Runnable;

    if-eqz v2, :cond_1

    .line 1794
    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->a:Landroid/os/Handler;

    invoke-virtual {v3, v2}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1798
    :cond_1
    :try_start_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->i:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->h:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 1799
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->k:Lcom/mbridge/msdk/videocommon/a$a;

    if-eqz v2, :cond_2

    .line 1800
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->k:Lcom/mbridge/msdk/videocommon/a$a;

    invoke-virtual {v2, v5}, Lcom/mbridge/msdk/videocommon/a$a;->a(Z)V

    .line 1802
    :cond_2
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->f:Lcom/mbridge/msdk/reward/adapter/c$j;

    if-eqz v2, :cond_3

    .line 1803
    iget-object v2, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->f:Lcom/mbridge/msdk/reward/adapter/c$j;

    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->j:Ljava/lang/String;

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->i:Ljava/lang/String;

    iget-object v6, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->e:Ljava/lang/String;

    iget-object v8, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->k:Lcom/mbridge/msdk/videocommon/a$a;

    move-object/from16 v7, p4

    move-object/from16 v9, p3

    invoke-interface/range {v2 .. v9}, Lcom/mbridge/msdk/reward/adapter/c$j;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_1
    move-exception v0

    .line 1806
    sget-boolean v2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v2, :cond_3

    .line 1807
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v10, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_0
    return-void
.end method

.method public final a(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V
    .locals 16

    move-object/from16 v1, p0

    .line 1814
    invoke-super/range {p0 .. p3}, Lcom/mbridge/msdk/mbjscommon/c/b;->a(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V

    .line 1815
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "TempalteWindVaneWebviewClient preLoadTemplate onReceivedSslError: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ""

    if-nez p3, :cond_0

    move-object v3, v2

    goto :goto_0

    :cond_0
    invoke-virtual/range {p3 .. p3}, Landroid/net/http/SslError;->getPrimaryError()I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    :goto_0
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "WindVaneWebView"

    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1816
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v0

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->i:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "_"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->e:Ljava/lang/String;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->h:Ljava/lang/String;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const/4 v6, 0x0

    invoke-virtual {v0, v4, v6}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setTemplatePreLoadDone(Ljava/lang/String;Z)V

    .line 1818
    :try_start_0
    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v8

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "WebView onReceivedSslError exception: "

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-nez p3, :cond_1

    const-string v4, "SSLError"

    goto :goto_1

    .line 1820
    :cond_1
    invoke-virtual/range {p3 .. p3}, Landroid/net/http/SslError;->getPrimaryError()I

    move-result v4

    .line 1819
    invoke-static {v4}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v4

    :goto_1
    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    iget-object v10, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->i:Ljava/lang/String;

    iget-boolean v11, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->d:Z

    iget-object v12, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->e:Ljava/lang/String;

    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1820
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v13

    .line 1821
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v14

    move-object v0, v7

    iget-wide v6, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->n:J

    sub-long/2addr v14, v6

    move-object v7, v0

    .line 1818
    invoke-static/range {v7 .. v15}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 1825
    :catch_0
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->a:Landroid/os/Handler;

    if-eqz v0, :cond_3

    .line 1826
    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->q:Ljava/lang/Runnable;

    if-eqz v4, :cond_2

    .line 1827
    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->r:Ljava/lang/Runnable;

    invoke-virtual {v0, v4}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1830
    :cond_2
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->q:Ljava/lang/Runnable;

    if-eqz v0, :cond_3

    .line 1831
    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->a:Landroid/os/Handler;

    invoke-virtual {v4, v0}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1835
    :cond_3
    :try_start_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->i:Ljava/lang/String;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->h:Ljava/lang/String;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 1836
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->k:Lcom/mbridge/msdk/videocommon/a$a;

    if-eqz v0, :cond_4

    .line 1837
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->k:Lcom/mbridge/msdk/videocommon/a$a;

    const/4 v4, 0x0

    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/videocommon/a$a;->a(Z)V

    .line 1839
    :cond_4
    iget-object v0, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->f:Lcom/mbridge/msdk/reward/adapter/c$j;

    if-eqz v0, :cond_6

    .line 1840
    iget-object v5, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->f:Lcom/mbridge/msdk/reward/adapter/c$j;

    iget-object v7, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->j:Ljava/lang/String;

    iget-object v8, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->i:Ljava/lang/String;

    iget-object v9, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->e:Ljava/lang/String;

    iget-object v10, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->h:Ljava/lang/String;

    iget-object v11, v1, Lcom/mbridge/msdk/reward/adapter/c$k;->k:Lcom/mbridge/msdk/videocommon/a$a;

    if-nez p3, :cond_5

    goto :goto_2

    .line 1841
    :cond_5
    invoke-virtual/range {p3 .. p3}, Landroid/net/http/SslError;->getPrimaryError()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v2

    :goto_2
    move-object v12, v2

    .line 1840
    invoke-interface/range {v5 .. v12}, Lcom/mbridge/msdk/reward/adapter/c$j;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_3

    :catch_1
    move-exception v0

    .line 1844
    sget-boolean v2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v2, :cond_6

    .line 1845
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    :goto_3
    return-void
.end method

.method public final a(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 13

    .line 1852
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/c/b;->a(Landroid/webkit/WebView;Ljava/lang/String;)V

    const-string v0, "WindVaneWebView"

    const-string v1, "TempalteWindVaneWebviewClient preLoadTemplate onPageFinished: "

    .line 1853
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1855
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->a:Landroid/os/Handler;

    if-eqz v1, :cond_0

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->r:Ljava/lang/Runnable;

    if-eqz v2, :cond_0

    .line 1856
    invoke-virtual {v1, v2}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1859
    :cond_0
    iget-boolean v1, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->o:Z

    if-nez v1, :cond_8

    .line 1861
    :try_start_0
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    const-string v4, "preload temp onPageFinish"

    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->i:Ljava/lang/String;

    iget-boolean v6, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->d:Z

    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->e:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1862
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v8

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v9

    iget-wide v11, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->n:J

    sub-long/2addr v9, v11

    .line 1861
    invoke-static/range {v2 .. v10}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    const-string v1, "wfr=1"

    .line 1866
    invoke-virtual {p2, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p2

    const/4 v1, 0x1

    if-nez p2, :cond_6

    .line 1867
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->i:Ljava/lang/String;

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->h:Ljava/lang/String;

    invoke-virtual {p2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 1868
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object p2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->i:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->e:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->h:Ljava/lang/String;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, v2, v1}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setTemplatePreLoadDone(Ljava/lang/String;Z)V

    .line 1869
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->b:Ljava/lang/Runnable;

    if-eqz p2, :cond_1

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->a:Landroid/os/Handler;

    if-eqz v2, :cond_1

    .line 1870
    invoke-virtual {v2, p2}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1872
    :cond_1
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->k:Lcom/mbridge/msdk/videocommon/a$a;

    if-eqz p2, :cond_2

    .line 1873
    invoke-virtual {p2, v1}, Lcom/mbridge/msdk/videocommon/a$a;->a(Z)V

    .line 1885
    :cond_2
    iget-boolean p2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->c:Z

    if-eqz p2, :cond_4

    .line 1886
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result p2

    const/16 v2, 0x11f

    if-eqz p2, :cond_3

    const-string p2, "TempalteWindVaneWebviewClient Tempalte put templeteCache in bidIVCache "

    .line 1887
    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1888
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->k:Lcom/mbridge/msdk/videocommon/a$a;

    invoke-static {v2, p2, v0}, Lcom/mbridge/msdk/videocommon/a;->a(ILjava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V

    goto :goto_0

    :cond_3
    const-string p2, "TempalteWindVaneWebviewClient Tempalte put templeteCache in iVCache "

    .line 1890
    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1891
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->k:Lcom/mbridge/msdk/videocommon/a$a;

    invoke-static {v2, p2, v0}, Lcom/mbridge/msdk/videocommon/a;->b(ILjava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V

    goto :goto_0

    .line 1895
    :cond_4
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result p2

    const/16 v2, 0x5e

    if-eqz p2, :cond_5

    const-string p2, "TempalteWindVaneWebviewClient Tempalte put templeteCache in bidRVCache "

    .line 1896
    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1897
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->k:Lcom/mbridge/msdk/videocommon/a$a;

    invoke-static {v2, p2, v0}, Lcom/mbridge/msdk/videocommon/a;->a(ILjava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V

    goto :goto_0

    :cond_5
    const-string p2, "TempalteWindVaneWebviewClient Tempalte put templeteCache in rVCache "

    .line 1899
    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1900
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->l:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->k:Lcom/mbridge/msdk/videocommon/a$a;

    invoke-static {v2, p2, v0}, Lcom/mbridge/msdk/videocommon/a;->b(ILjava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V

    .line 1905
    :goto_0
    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->f:Lcom/mbridge/msdk/reward/adapter/c$j;

    if-eqz v4, :cond_7

    .line 1906
    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->j:Ljava/lang/String;

    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->i:Ljava/lang/String;

    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->e:Ljava/lang/String;

    iget-object v9, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->h:Ljava/lang/String;

    iget-object v10, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->k:Lcom/mbridge/msdk/videocommon/a$a;

    invoke-interface/range {v4 .. v10}, Lcom/mbridge/msdk/reward/adapter/c$j;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V

    goto :goto_1

    .line 1909
    :cond_6
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->a:Landroid/os/Handler;

    if-eqz p2, :cond_7

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->q:Ljava/lang/Runnable;

    if-eqz v0, :cond_7

    const-wide/16 v2, 0x1388

    .line 1910
    invoke-virtual {p2, v0, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 1913
    :cond_7
    :goto_1
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;)V

    .line 1914
    iput-boolean v1, p0, Lcom/mbridge/msdk/reward/adapter/c$k;->o:Z

    :cond_8
    return-void
.end method
