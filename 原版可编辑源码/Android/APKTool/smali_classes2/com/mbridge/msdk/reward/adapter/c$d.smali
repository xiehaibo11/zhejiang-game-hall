.class final Lcom/mbridge/msdk/reward/adapter/c$d;
.super Ljava/lang/Object;
.source "RewardCampaignsResourceManager.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$IH5SourceDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/reward/adapter/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "d"
.end annotation


# instance fields
.field private a:Z

.field private b:I

.field private final c:Ljava/lang/String;

.field private final d:Ljava/lang/String;

.field private final e:Ljava/lang/String;

.field private f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private g:Lcom/mbridge/msdk/reward/adapter/c$i;

.field private h:Landroid/os/Handler;

.field private i:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private final j:J


# direct methods
.method public constructor <init>(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/reward/adapter/c$i;Landroid/os/Handler;Ljava/util/concurrent/CopyOnWriteArrayList;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            "Lcom/mbridge/msdk/reward/adapter/c$i;",
            "Landroid/os/Handler;",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    .line 946
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 933
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->a:Z

    .line 947
    iput p1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->b:I

    .line 948
    iput-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->c:Ljava/lang/String;

    .line 949
    iput-object p3, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->d:Ljava/lang/String;

    .line 950
    iput-object p4, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->e:Ljava/lang/String;

    .line 951
    iput-object p5, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 952
    iput-object p6, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->g:Lcom/mbridge/msdk/reward/adapter/c$i;

    .line 953
    iput-object p7, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->h:Landroid/os/Handler;

    .line 954
    iput-object p8, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->i:Ljava/util/concurrent/CopyOnWriteArrayList;

    .line 955
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->j:J

    return-void
.end method


# virtual methods
.method public final a(Z)V
    .locals 0

    .line 959
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->a:Z

    return-void
.end method

.method public final onFailed(Ljava/lang/String;Ljava/lang/String;)V
    .locals 11

    .line 1039
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setZipDownloadDone(Ljava/lang/String;Z)V

    .line 1040
    iget v0, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->b:I

    const/16 v1, 0x139

    const-string v2, "url"

    const/16 v3, 0xc9

    const-string v4, "message"

    const-string v5, "request_id"

    const-string v6, "unit_id"

    if-eq v0, v1, :cond_4

    const/16 v1, 0x1f1

    if-eq v0, v1, :cond_1

    const/16 v1, 0x35b

    if-eq v0, v1, :cond_0

    goto/16 :goto_1

    .line 1116
    :cond_0
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    const/16 v1, 0xcd

    .line 1117
    iput v1, v0, Landroid/os/Message;->what:I

    .line 1118
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 1119
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->d:Ljava/lang/String;

    invoke-virtual {v1, v6, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1120
    sget-object v2, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->c:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1121
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->e:Ljava/lang/String;

    invoke-virtual {v1, v5, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1122
    invoke-virtual {v1, v4, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1123
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 1124
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->h:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 1126
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->g:Lcom/mbridge/msdk/reward/adapter/c$i;

    if-eqz v2, :cond_5

    .line 1127
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->c:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->d:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->e:Ljava/lang/String;

    move-object v6, p1

    move-object v7, p2

    invoke-interface/range {v2 .. v7}, Lcom/mbridge/msdk/reward/adapter/c$i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_1

    .line 1049
    :cond_1
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 1050
    iput v3, v0, Landroid/os/Message;->what:I

    .line 1051
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 1052
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->d:Ljava/lang/String;

    invoke-virtual {v1, v6, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1053
    sget-object v3, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->c:Ljava/lang/String;

    invoke-virtual {v1, v3, v6}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1054
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->e:Ljava/lang/String;

    invoke-virtual {v1, v5, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1055
    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1056
    invoke-virtual {v1, v4, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1057
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 1058
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->h:Landroid/os/Handler;

    invoke-virtual {p2, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 1060
    iget-boolean p2, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->a:Z

    if-eqz p2, :cond_5

    .line 1061
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->j:J

    sub-long/2addr v0, v2

    .line 1063
    :try_start_0
    new-instance p2, Lcom/mbridge/msdk/foundation/entity/p;

    const-string v3, "2000043"

    const/16 v4, 0x15

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v0, ""

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1065
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v7

    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->d:Ljava/lang/String;

    const-string v9, "url download failed"

    const-string v10, "2"

    move-object v2, p2

    move-object v6, p1

    invoke-direct/range {v2 .. v10}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 1068
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 1069
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 1070
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 1071
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result p1

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/foundation/entity/p;->b(I)V

    .line 1072
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result p1

    const/16 v0, 0x11f

    if-ne p1, v0, :cond_2

    const-string p1, "3"

    .line 1073
    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V

    goto :goto_0

    .line 1074
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result p1

    const/16 v0, 0x5e

    if-ne p1, v0, :cond_3

    const-string p1, "1"

    .line 1075
    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V

    .line 1077
    :cond_3
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->d:Ljava/lang/String;

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Lcom/mbridge/msdk/foundation/entity/p;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 1079
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_5

    .line 1080
    invoke-virtual {p1}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "RewardCampaignsResourceManager"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 1095
    :cond_4
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 1096
    iput v3, v0, Landroid/os/Message;->what:I

    .line 1097
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 1098
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->d:Ljava/lang/String;

    invoke-virtual {v1, v6, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1099
    sget-object v3, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->c:Ljava/lang/String;

    invoke-virtual {v1, v3, v6}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1100
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->e:Ljava/lang/String;

    invoke-virtual {v1, v5, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1101
    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1102
    invoke-virtual {v1, v4, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1103
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 1104
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->h:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    :cond_5
    :goto_1
    return-void
.end method

.method public final onSuccess(Ljava/lang/String;)V
    .locals 12

    .line 964
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setZipDownloadDone(Ljava/lang/String;Z)V

    .line 965
    iget v0, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->b:I

    const/16 v1, 0x139

    const-string v2, "url"

    const/16 v3, 0x65

    const-string v4, "request_id"

    const-string v5, "unit_id"

    if-eq v0, v1, :cond_4

    const/16 v1, 0x1f1

    if-eq v0, v1, :cond_1

    const/16 v1, 0x35b

    if-eq v0, v1, :cond_0

    goto/16 :goto_1

    .line 1020
    :cond_0
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    const/16 v1, 0x69

    .line 1021
    iput v1, v0, Landroid/os/Message;->what:I

    .line 1022
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 1023
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->d:Ljava/lang/String;

    invoke-virtual {v1, v5, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1024
    sget-object v2, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->c:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1025
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->e:Ljava/lang/String;

    invoke-virtual {v1, v4, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1026
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 1027
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->h:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 1029
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->g:Lcom/mbridge/msdk/reward/adapter/c$i;

    if-eqz v0, :cond_5

    .line 1030
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->c:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->d:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->e:Ljava/lang/String;

    invoke-interface {v0, v1, v2, v3, p1}, Lcom/mbridge/msdk/reward/adapter/c$i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_1

    .line 967
    :cond_1
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 968
    iput v3, v0, Landroid/os/Message;->what:I

    .line 969
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 970
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->d:Ljava/lang/String;

    invoke-virtual {v1, v5, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 971
    sget-object v3, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->c:Ljava/lang/String;

    invoke-virtual {v1, v3, v5}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 972
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->e:Ljava/lang/String;

    invoke-virtual {v1, v4, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 973
    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 974
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 975
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->h:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 977
    iget-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->a:Z

    if-eqz v0, :cond_5

    .line 978
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->j:J

    sub-long/2addr v0, v2

    .line 981
    :try_start_0
    new-instance v11, Lcom/mbridge/msdk/foundation/entity/p;

    const-string v3, "2000043"

    const/16 v4, 0x14

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v0, ""

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 983
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v7

    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->d:Ljava/lang/String;

    const-string v9, ""

    const-string v10, "2"

    move-object v2, v11

    move-object v6, p1

    invoke-direct/range {v2 .. v10}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 986
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v11, p1}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 987
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v11, p1}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 988
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v11, p1}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 989
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result p1

    invoke-virtual {v11, p1}, Lcom/mbridge/msdk/foundation/entity/p;->b(I)V

    .line 990
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result p1

    const/16 v0, 0x11f

    if-ne p1, v0, :cond_2

    const-string p1, "3"

    .line 991
    invoke-virtual {v11, p1}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V

    goto :goto_0

    .line 992
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->f:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result p1

    const/16 v0, 0x5e

    if-ne p1, v0, :cond_3

    const-string p1, "1"

    .line 993
    invoke-virtual {v11, p1}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V

    .line 995
    :cond_3
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->d:Ljava/lang/String;

    invoke-static {v11, p1}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Lcom/mbridge/msdk/foundation/entity/p;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 997
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_5

    .line 998
    invoke-virtual {p1}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "RewardCampaignsResourceManager"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 1006
    :cond_4
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 1007
    iput v3, v0, Landroid/os/Message;->what:I

    .line 1008
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    .line 1009
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->d:Ljava/lang/String;

    invoke-virtual {v1, v5, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1010
    sget-object v3, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->c:Ljava/lang/String;

    invoke-virtual {v1, v3, v5}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1011
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->e:Ljava/lang/String;

    invoke-virtual {v1, v4, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1012
    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1013
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 1014
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$d;->h:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    :cond_5
    :goto_1
    return-void
.end method
