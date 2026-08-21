.class final Lcom/mbridge/msdk/reward/adapter/c$g;
.super Ljava/lang/Object;
.source "RewardCampaignsResourceManager.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/reward/adapter/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "g"
.end annotation


# instance fields
.field private a:Z

.field private b:Landroid/content/Context;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private g:I

.field private h:Landroid/os/Handler;

.field private i:Lcom/mbridge/msdk/reward/adapter/c$i;

.field private j:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private k:J


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ILandroid/os/Handler;Lcom/mbridge/msdk/reward/adapter/c$i;Ljava/util/concurrent/CopyOnWriteArrayList;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            "I",
            "Landroid/os/Handler;",
            "Lcom/mbridge/msdk/reward/adapter/c$i;",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    .line 691
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 677
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->a:Z

    .line 692
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->b:Landroid/content/Context;

    .line 693
    iput-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->d:Ljava/lang/String;

    .line 694
    iput-object p3, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->c:Ljava/lang/String;

    .line 695
    iput-object p4, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->e:Ljava/lang/String;

    .line 696
    iput-object p5, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 697
    iput p6, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->g:I

    .line 698
    iput-object p7, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->h:Landroid/os/Handler;

    .line 699
    iput-object p8, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->i:Lcom/mbridge/msdk/reward/adapter/c$i;

    .line 700
    iput-object p9, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->j:Ljava/util/concurrent/CopyOnWriteArrayList;

    .line 701
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->k:J

    return-void
.end method


# virtual methods
.method public final a(Z)V
    .locals 0

    .line 705
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->a:Z

    return-void
.end method

.method public final onFailed(Ljava/lang/String;Ljava/lang/String;)V
    .locals 12

    .line 806
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v1, p2, v2}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setZipDownloadDone(Ljava/lang/String;Z)V

    .line 807
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->k:J

    sub-long/2addr v1, v3

    .line 810
    iget v3, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->g:I

    const/16 v4, 0x139

    const-string v5, "message"

    const-string v6, "url"

    const-string v8, "request_id"

    const-string v9, "unit_id"

    const-string v10, "RewardCampaignsResourceManager"

    if-eq v3, v4, :cond_7

    const/16 v4, 0x1f1

    if-eq v3, v4, :cond_4

    const/16 v1, 0x35b

    if-eq v3, v1, :cond_0

    goto/16 :goto_1

    :cond_0
    const-string v1, "zip template download failed"

    .line 879
    invoke-static {v10, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 887
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v1

    const/16 v2, 0xcb

    .line 888
    iput v2, v1, Landroid/os/Message;->what:I

    .line 889
    new-instance v2, Landroid/os/Bundle;

    invoke-direct {v2}, Landroid/os/Bundle;-><init>()V

    .line 890
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->c:Ljava/lang/String;

    invoke-virtual {v2, v9, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 891
    sget-object v3, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->d:Ljava/lang/String;

    invoke-virtual {v2, v3, v4}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 892
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->e:Ljava/lang/String;

    invoke-virtual {v2, v8, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 893
    invoke-virtual {v2, v6, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 894
    invoke-virtual {v2, v5, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 895
    invoke-virtual {v1, v2}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 896
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->h:Landroid/os/Handler;

    invoke-virtual {v2, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 898
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->i:Lcom/mbridge/msdk/reward/adapter/c$i;

    if-eqz v1, :cond_1

    .line 899
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->d:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->c:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->e:Ljava/lang/String;

    move-object v5, p2

    move-object v6, p1

    invoke-interface/range {v1 .. v6}, Lcom/mbridge/msdk/reward/adapter/c$i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 902
    :cond_1
    :try_start_0
    new-instance v1, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {v1}, Lcom/mbridge/msdk/foundation/entity/p;-><init>()V

    const-string v2, "2000045"

    .line 903
    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->o(Ljava/lang/String;)V

    .line 904
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->b:Landroid/content/Context;

    if-eqz v2, :cond_2

    .line 905
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->b:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v2

    .line 906
    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->c(I)V

    :cond_2
    const/4 v2, 0x3

    .line 908
    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->d(I)V

    .line 909
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v2, :cond_3

    .line 910
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 911
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 912
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 914
    :cond_3
    invoke-virtual {v1, p2}, Lcom/mbridge/msdk/foundation/entity/p;->i(Ljava/lang/String;)V

    .line 915
    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/p;->p(Ljava/lang/String;)V

    .line 916
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->c:Ljava/lang/String;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/entity/p;->m(Ljava/lang/String;)V

    .line 917
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/t;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/entity/p;)J
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto/16 :goto_1

    :catch_0
    move-exception v0

    .line 919
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_8

    .line 920
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v10, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_1

    .line 812
    :cond_4
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "zip endcard download failed:  "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v10, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 821
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v3

    const/16 v4, 0xc9

    .line 822
    iput v4, v3, Landroid/os/Message;->what:I

    .line 823
    new-instance v4, Landroid/os/Bundle;

    invoke-direct {v4}, Landroid/os/Bundle;-><init>()V

    .line 824
    iget-object v11, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->c:Ljava/lang/String;

    invoke-virtual {v4, v9, v11}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 825
    sget-object v9, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v11, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->d:Ljava/lang/String;

    invoke-virtual {v4, v9, v11}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 826
    iget-object v9, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->e:Ljava/lang/String;

    invoke-virtual {v4, v8, v9}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 827
    invoke-virtual {v4, v6, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 828
    invoke-virtual {v4, v5, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 829
    invoke-virtual {v3, v4}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 830
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->h:Landroid/os/Handler;

    invoke-virtual {v0, v3}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 831
    iget-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->a:Z

    if-eqz v0, :cond_8

    .line 833
    :try_start_1
    new-instance v0, Lcom/mbridge/msdk/foundation/entity/p;

    const-string v3, "2000043"

    const/4 v4, 0x3

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 835
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v6

    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->c:Ljava/lang/String;

    const-string v9, "zip download failed"

    const-string v11, "1"

    move-object v1, v0

    move-object v2, v3

    move v3, v4

    move-object v4, v5

    move-object v5, p2

    move-object v7, v8

    move-object v8, v9

    move-object v9, v11

    invoke-direct/range {v1 .. v9}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 837
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 838
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 839
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 840
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->b(I)V

    .line 841
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v1

    const/16 v2, 0x11f

    if-ne v1, v2, :cond_5

    const-string v1, "3"

    .line 842
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V

    goto :goto_0

    .line 843
    :cond_5
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v1

    const/16 v2, 0x5e

    if-ne v1, v2, :cond_6

    const-string v1, "1"

    .line 844
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V

    .line 846
    :cond_6
    :goto_0
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->c:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Lcom/mbridge/msdk/foundation/entity/p;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    .line 848
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_8

    .line 849
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v10, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_7
    const-string v1, "zip pause download failed"

    .line 856
    invoke-static {v10, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 864
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v1

    const/16 v2, 0x65

    .line 866
    iput v2, v1, Landroid/os/Message;->what:I

    .line 867
    new-instance v2, Landroid/os/Bundle;

    invoke-direct {v2}, Landroid/os/Bundle;-><init>()V

    .line 868
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->c:Ljava/lang/String;

    invoke-virtual {v2, v9, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 869
    sget-object v3, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->d:Ljava/lang/String;

    invoke-virtual {v2, v3, v4}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 870
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->e:Ljava/lang/String;

    invoke-virtual {v2, v8, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 871
    invoke-virtual {v2, v6, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 872
    invoke-virtual {v2, v5, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 873
    invoke-virtual {v1, v2}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 874
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->h:Landroid/os/Handler;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    :cond_8
    :goto_1
    return-void
.end method

.method public final onSuccess(Ljava/lang/String;)V
    .locals 13

    .line 710
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v1, p1, v2}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setZipDownloadDone(Ljava/lang/String;Z)V

    .line 711
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    iget-wide v5, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->k:J

    sub-long/2addr v3, v5

    .line 713
    iget v1, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->g:I

    const/16 v5, 0x139

    const-string v6, "url"

    const/16 v7, 0x65

    const-string v8, "request_id"

    const-string v9, "unit_id"

    const-string v10, "RewardCampaignsResourceManager"

    if-eq v1, v5, :cond_7

    const/16 v5, 0x1f1

    const-string v11, ""

    if-eq v1, v5, :cond_4

    const/16 v3, 0x35b

    if-eq v1, v3, :cond_0

    goto/16 :goto_1

    :cond_0
    const-string v1, "zip template download success"

    .line 764
    invoke-static {v10, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 765
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v1

    const/16 v3, 0x67

    .line 766
    iput v3, v1, Landroid/os/Message;->what:I

    .line 767
    new-instance v3, Landroid/os/Bundle;

    invoke-direct {v3}, Landroid/os/Bundle;-><init>()V

    .line 768
    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->c:Ljava/lang/String;

    invoke-virtual {v3, v9, v4}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 769
    sget-object v4, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->d:Ljava/lang/String;

    invoke-virtual {v3, v4, v5}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 770
    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->e:Ljava/lang/String;

    invoke-virtual {v3, v8, v4}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 771
    invoke-virtual {v1, v3}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 772
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->h:Landroid/os/Handler;

    invoke-virtual {v3, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 774
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->i:Lcom/mbridge/msdk/reward/adapter/c$i;

    if-eqz v1, :cond_1

    .line 775
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->d:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->c:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->e:Ljava/lang/String;

    invoke-interface {v1, v3, v4, v5, p1}, Lcom/mbridge/msdk/reward/adapter/c$i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 778
    :cond_1
    :try_start_0
    new-instance v1, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {v1}, Lcom/mbridge/msdk/foundation/entity/p;-><init>()V

    const-string v3, "2000045"

    .line 779
    invoke-virtual {v1, v3}, Lcom/mbridge/msdk/foundation/entity/p;->o(Ljava/lang/String;)V

    .line 780
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->b:Landroid/content/Context;

    if-eqz v3, :cond_2

    .line 781
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->b:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v3

    .line 782
    invoke-virtual {v1, v3}, Lcom/mbridge/msdk/foundation/entity/p;->c(I)V

    .line 784
    :cond_2
    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->d(I)V

    .line 785
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v2, :cond_3

    .line 786
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 787
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 788
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 790
    :cond_3
    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/p;->i(Ljava/lang/String;)V

    .line 791
    invoke-virtual {v1, v11}, Lcom/mbridge/msdk/foundation/entity/p;->p(Ljava/lang/String;)V

    .line 792
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->c:Ljava/lang/String;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/entity/p;->m(Ljava/lang/String;)V

    .line 793
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/t;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/entity/p;)J
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto/16 :goto_1

    :catch_0
    move-exception v0

    .line 795
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_8

    .line 796
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v10, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_1

    :cond_4
    const-string v1, "zip endcard download success"

    .line 715
    invoke-static {v10, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 716
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v1

    .line 717
    iput v7, v1, Landroid/os/Message;->what:I

    .line 718
    new-instance v2, Landroid/os/Bundle;

    invoke-direct {v2}, Landroid/os/Bundle;-><init>()V

    .line 719
    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->c:Ljava/lang/String;

    invoke-virtual {v2, v9, v5}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 720
    sget-object v5, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->d:Ljava/lang/String;

    invoke-virtual {v2, v5, v7}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 721
    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->e:Ljava/lang/String;

    invoke-virtual {v2, v8, v5}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 722
    invoke-virtual {v2, v6, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 723
    invoke-virtual {v1, v2}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 724
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->h:Landroid/os/Handler;

    invoke-virtual {v2, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 726
    iget-boolean v1, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->a:Z

    if-eqz v1, :cond_8

    .line 728
    :try_start_1
    new-instance v12, Lcom/mbridge/msdk/foundation/entity/p;

    const-string v2, "2000043"

    const/16 v5, 0xe

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 730
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v6

    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->c:Ljava/lang/String;

    const-string v8, ""

    const-string v9, "1"

    move-object v1, v12

    move v3, v5

    move-object v5, p1

    invoke-direct/range {v1 .. v9}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 732
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 733
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 734
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 735
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v0

    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/p;->b(I)V

    .line 736
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v0

    const/16 v1, 0x11f

    if-ne v0, v1, :cond_5

    const-string v0, "3"

    .line 737
    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V

    goto :goto_0

    .line 738
    :cond_5
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v0

    const/16 v1, 0x5e

    if-ne v0, v1, :cond_6

    const-string v0, "1"

    .line 739
    invoke-virtual {v12, v0}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V

    .line 741
    :cond_6
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->c:Ljava/lang/String;

    invoke-static {v12, v0}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Lcom/mbridge/msdk/foundation/entity/p;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    .line 743
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_8

    .line 744
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v10, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_7
    const-string v1, "zip pause download success"

    .line 751
    invoke-static {v10, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 752
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v1

    .line 753
    iput v7, v1, Landroid/os/Message;->what:I

    .line 754
    new-instance v2, Landroid/os/Bundle;

    invoke-direct {v2}, Landroid/os/Bundle;-><init>()V

    .line 755
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->c:Ljava/lang/String;

    invoke-virtual {v2, v9, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 756
    sget-object v3, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->d:Ljava/lang/String;

    invoke-virtual {v2, v3, v4}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 757
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->e:Ljava/lang/String;

    invoke-virtual {v2, v8, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 758
    invoke-virtual {v2, v6, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 759
    invoke-virtual {v1, v2}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 760
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$g;->h:Landroid/os/Handler;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    :cond_8
    :goto_1
    return-void
.end method
