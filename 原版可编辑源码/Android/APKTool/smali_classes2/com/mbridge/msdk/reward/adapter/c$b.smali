.class final Lcom/mbridge/msdk/reward/adapter/c$b;
.super Lcom/mbridge/msdk/mbjscommon/c/a;
.source "RewardCampaignsResourceManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/reward/adapter/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "b"
.end annotation


# instance fields
.field private final a:Landroid/os/Handler;

.field private final b:Ljava/lang/Runnable;

.field private final c:Z

.field private final d:Z

.field private e:I

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private i:Ljava/lang/String;

.field private j:Lcom/mbridge/msdk/videocommon/a$a;

.field private k:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private l:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private m:Lcom/mbridge/msdk/videocommon/d/c;

.field private final n:Lcom/mbridge/msdk/reward/adapter/c$j;

.field private o:Z

.field private p:Z

.field private q:Z

.field private r:I

.field private s:Z

.field private t:J


# direct methods
.method public constructor <init>(ZLandroid/os/Handler;Ljava/lang/Runnable;ZZILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/concurrent/CopyOnWriteArrayList;Lcom/mbridge/msdk/videocommon/d/c;Lcom/mbridge/msdk/reward/adapter/c$j;ZJ)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(Z",
            "Landroid/os/Handler;",
            "Ljava/lang/Runnable;",
            "ZZI",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/videocommon/a$a;",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;",
            "Lcom/mbridge/msdk/videocommon/d/c;",
            "Lcom/mbridge/msdk/reward/adapter/c$j;",
            "ZJ)V"
        }
    .end annotation

    move-object v0, p0

    .line 2050
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/c/a;-><init>()V

    const/4 v1, 0x0

    .line 2041
    iput v1, v0, Lcom/mbridge/msdk/reward/adapter/c$b;->r:I

    move-object v1, p2

    .line 2051
    iput-object v1, v0, Lcom/mbridge/msdk/reward/adapter/c$b;->a:Landroid/os/Handler;

    move-object v1, p3

    .line 2052
    iput-object v1, v0, Lcom/mbridge/msdk/reward/adapter/c$b;->b:Ljava/lang/Runnable;

    move v1, p4

    .line 2053
    iput-boolean v1, v0, Lcom/mbridge/msdk/reward/adapter/c$b;->c:Z

    move v1, p5

    .line 2054
    iput-boolean v1, v0, Lcom/mbridge/msdk/reward/adapter/c$b;->d:Z

    move v1, p6

    .line 2055
    iput v1, v0, Lcom/mbridge/msdk/reward/adapter/c$b;->e:I

    move-object v1, p7

    .line 2056
    iput-object v1, v0, Lcom/mbridge/msdk/reward/adapter/c$b;->f:Ljava/lang/String;

    move-object v1, p8

    .line 2057
    iput-object v1, v0, Lcom/mbridge/msdk/reward/adapter/c$b;->h:Ljava/lang/String;

    move-object v1, p9

    .line 2058
    iput-object v1, v0, Lcom/mbridge/msdk/reward/adapter/c$b;->g:Ljava/lang/String;

    move-object v1, p10

    .line 2059
    iput-object v1, v0, Lcom/mbridge/msdk/reward/adapter/c$b;->i:Ljava/lang/String;

    move-object v1, p11

    .line 2060
    iput-object v1, v0, Lcom/mbridge/msdk/reward/adapter/c$b;->j:Lcom/mbridge/msdk/videocommon/a$a;

    move-object v1, p12

    .line 2062
    iput-object v1, v0, Lcom/mbridge/msdk/reward/adapter/c$b;->k:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-object/from16 v1, p13

    .line 2063
    iput-object v1, v0, Lcom/mbridge/msdk/reward/adapter/c$b;->l:Ljava/util/concurrent/CopyOnWriteArrayList;

    move-object/from16 v1, p14

    .line 2064
    iput-object v1, v0, Lcom/mbridge/msdk/reward/adapter/c$b;->m:Lcom/mbridge/msdk/videocommon/d/c;

    move-object/from16 v1, p15

    .line 2065
    iput-object v1, v0, Lcom/mbridge/msdk/reward/adapter/c$b;->n:Lcom/mbridge/msdk/reward/adapter/c$j;

    move/from16 v1, p16

    .line 2066
    iput-boolean v1, v0, Lcom/mbridge/msdk/reward/adapter/c$b;->o:Z

    move v1, p1

    .line 2067
    iput-boolean v1, v0, Lcom/mbridge/msdk/reward/adapter/c$b;->s:Z

    move-wide/from16 v1, p17

    .line 2068
    iput-wide v1, v0, Lcom/mbridge/msdk/reward/adapter/c$b;->t:J

    const-string v1, "RewardCampaignsResourceManager_test"

    const-string v2, "\u5f00\u59cb\u9884\u52a0\u8f7d\u5927\u6a21\u677f"

    .line 2069
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public final a(Landroid/webkit/WebView;I)V
    .locals 11

    .line 2075
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "\u6536\u5230\u5927\u6a21\u677f readyState \u56de\u8c03: "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "RewardCampaignsResourceManager_test"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2076
    iget-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->q:Z

    if-nez p1, :cond_6

    .line 2078
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->k:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "preload tpl readyState: "

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->g:Ljava/lang/String;

    iget-boolean v4, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->d:Z

    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->i:Ljava/lang/String;

    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->k:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 2079
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v6

    .line 2080
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    iget-wide v9, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->t:J

    sub-long/2addr v7, v9

    .line 2078
    invoke-static/range {v0 .. v8}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 2084
    :catch_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->g:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "_"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->f:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 2085
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "CampaignTPLWindVaneWebviewClient \u5f00\u59cb\u9884\u52a0\u8f7d\u5927\u6a21\u677f\u8d44\u6e90 readyState\uff1a "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " isCache: "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->o:Z

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v1, "test_pre_load_tpl"

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x1

    if-ne p2, p1, :cond_3

    .line 2087
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "CampaignTPLWindVaneWebviewClient templete preload readyState state = "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v2, "RVWindVaneWebView"

    invoke-static {v2, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2088
    iget-boolean p2, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->o:Z

    if-eqz p2, :cond_0

    .line 2089
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->g:Ljava/lang/String;

    invoke-virtual {p2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->i:Ljava/lang/String;

    invoke-virtual {p2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/mbridge/msdk/videocommon/a;->e(Ljava/lang/String;)V

    goto :goto_0

    .line 2091
    :cond_0
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->g:Ljava/lang/String;

    invoke-virtual {p2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->i:Ljava/lang/String;

    invoke-virtual {p2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/mbridge/msdk/videocommon/a;->d(Ljava/lang/String;)V

    .line 2093
    :goto_0
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "\u6dfb\u52a0\u5927\u6a21\u677f\uff1a "

    invoke-virtual {p2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->g:Ljava/lang/String;

    invoke-virtual {p2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->i:Ljava/lang/String;

    invoke-virtual {p2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->f:Ljava/lang/String;

    invoke-virtual {p2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2094
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->g:Ljava/lang/String;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->i:Ljava/lang/String;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->f:Ljava/lang/String;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->j:Lcom/mbridge/msdk/videocommon/a$a;

    iget-boolean v4, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->o:Z

    invoke-static {p2, v1, p1, v4}, Lcom/mbridge/msdk/videocommon/a;->a(Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;ZZ)V

    .line 2095
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->a:Landroid/os/Handler;

    if-eqz p2, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->b:Ljava/lang/Runnable;

    if-eqz v1, :cond_1

    .line 2096
    invoke-virtual {p2, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 2098
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object p2

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->g:Ljava/lang/String;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->i:Ljava/lang/String;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->f:Ljava/lang/String;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setTemplatePreLoadDone(Ljava/lang/String;Z)V

    .line 2100
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->j:Lcom/mbridge/msdk/videocommon/a$a;

    if-eqz p2, :cond_2

    .line 2101
    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/videocommon/a$a;->a(Z)V

    .line 2107
    :cond_2
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->n:Lcom/mbridge/msdk/reward/adapter/c$j;

    if-eqz p2, :cond_5

    const-string p2, "CampaignTPLWindVaneWebviewClient rewardTemplatePreLoadListener.onPreLoadSuccess "

    .line 2108
    invoke-static {v2, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2109
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->n:Lcom/mbridge/msdk/reward/adapter/c$j;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->h:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->g:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->i:Ljava/lang/String;

    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->f:Ljava/lang/String;

    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->j:Lcom/mbridge/msdk/videocommon/a$a;

    invoke-interface/range {v2 .. v8}, Lcom/mbridge/msdk/reward/adapter/c$j;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V

    goto :goto_1

    .line 2113
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object p2

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->g:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->i:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->f:Ljava/lang/String;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {p2, v0, v1}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setTemplatePreLoadDone(Ljava/lang/String;Z)V

    .line 2114
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->j:Lcom/mbridge/msdk/videocommon/a$a;

    if-eqz p2, :cond_4

    .line 2115
    invoke-virtual {p2, v1}, Lcom/mbridge/msdk/videocommon/a$a;->a(Z)V

    .line 2117
    :cond_4
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->n:Lcom/mbridge/msdk/reward/adapter/c$j;

    if-eqz v2, :cond_5

    .line 2118
    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->h:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->g:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->i:Ljava/lang/String;

    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->f:Ljava/lang/String;

    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->j:Lcom/mbridge/msdk/videocommon/a$a;

    const-string v9, "state 2"

    invoke-interface/range {v2 .. v9}, Lcom/mbridge/msdk/reward/adapter/c$j;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;Ljava/lang/String;)V

    .line 2121
    :cond_5
    :goto_1
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->q:Z

    :cond_6
    return-void
.end method

.method public final a(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 9

    .line 2219
    invoke-super {p0, p1, p2, p3, p4}, Lcom/mbridge/msdk/mbjscommon/c/a;->a(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    .line 2220
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, "onReceivedError\uff1a "

    invoke-virtual {p1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "  "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "RewardCampaignsResourceManager_test"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2221
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p4, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->g:Ljava/lang/String;

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p4, "_"

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->i:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->f:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const/4 v0, 0x0

    invoke-virtual {p1, p2, v0}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setTemplatePreLoadDone(Ljava/lang/String;Z)V

    .line 2222
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->n:Lcom/mbridge/msdk/reward/adapter/c$j;

    if-eqz p1, :cond_1

    .line 2223
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->g:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->f:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 2224
    iget-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->j:Lcom/mbridge/msdk/videocommon/a$a;

    if-eqz p1, :cond_0

    .line 2225
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/videocommon/a$a;->a(Z)V

    .line 2227
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->n:Lcom/mbridge/msdk/reward/adapter/c$j;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->h:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->g:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->i:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->f:Ljava/lang/String;

    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->j:Lcom/mbridge/msdk/videocommon/a$a;

    move-object v8, p3

    invoke-interface/range {v1 .. v8}, Lcom/mbridge/msdk/reward/adapter/c$j;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final a(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 12

    .line 2181
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/c/a;->a(Landroid/webkit/WebView;Ljava/lang/String;)V

    const-string v0, "RewardCampaignsResourceManager_test"

    const-string v1, "onPageFinished"

    .line 2182
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2183
    iget-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->p:Z

    if-nez v0, :cond_3

    .line 2185
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->k:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    const-string v3, "preload tpl onPageFinish"

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->g:Ljava/lang/String;

    iget-boolean v5, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->d:Z

    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->i:Ljava/lang/String;

    iget-object v0, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->k:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 2186
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v7

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    iget-wide v10, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->t:J

    sub-long/2addr v8, v10

    .line 2185
    invoke-static/range {v1 .. v9}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 2190
    :catch_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->f:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v0, "wfr=1"

    .line 2191
    invoke-virtual {p2, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p2

    const/4 v0, 0x1

    if-nez p2, :cond_2

    const-string p2, "RVWindVaneWebView"

    const-string v2, "CampaignTPLWindVaneWebviewClient templete preload wfr=1 \u4e0d\u5305\u542b "

    .line 2192
    invoke-static {p2, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2193
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;

    move-result-object p2

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->g:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->i:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->f:Ljava/lang/String;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1, v0}, Lcom/mbridge/msdk/foundation/download/download/ResDownloadCheckManager;->setTemplatePreLoadDone(Ljava/lang/String;Z)V

    .line 2194
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->a:Landroid/os/Handler;

    if-eqz p2, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->b:Ljava/lang/Runnable;

    if-eqz v1, :cond_0

    .line 2195
    invoke-virtual {p2, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 2198
    :cond_0
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->j:Lcom/mbridge/msdk/videocommon/a$a;

    if-eqz p2, :cond_1

    .line 2199
    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/videocommon/a$a;->a(Z)V

    .line 2207
    :cond_1
    iget-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->n:Lcom/mbridge/msdk/reward/adapter/c$j;

    if-eqz p2, :cond_2

    const-string p2, "RewardCampaignsResourceManager"

    const-string v1, "CampaignTPLWindVaneWebviewClient rewardTemplatePreLoadListener.onPreLoadSuccess "

    .line 2208
    invoke-static {p2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2209
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->n:Lcom/mbridge/msdk/reward/adapter/c$j;

    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->h:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->g:Ljava/lang/String;

    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->i:Ljava/lang/String;

    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->f:Ljava/lang/String;

    iget-object v9, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->j:Lcom/mbridge/msdk/videocommon/a$a;

    invoke-interface/range {v3 .. v9}, Lcom/mbridge/msdk/reward/adapter/c$j;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;)V

    .line 2212
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;)V

    .line 2213
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/adapter/c$b;->p:Z

    :cond_3
    return-void
.end method

.method public final a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;II)V
    .locals 2

    .line 2127
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "loadAds: unitID "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " type "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " adType "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "RVWindVaneWebView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x1

    if-ne p4, p1, :cond_1

    .line 2130
    :try_start_0
    new-instance p4, Lcom/mbridge/msdk/reward/a/a;

    invoke-direct {p4}, Lcom/mbridge/msdk/reward/a/a;-><init>()V

    const/4 v0, 0x0

    .line 2131
    invoke-virtual {p4, v0}, Lcom/mbridge/msdk/reward/a/a;->b(Z)V

    const/4 v1, 0x2

    if-ne p5, v1, :cond_0

    goto :goto_0

    :cond_0
    move p1, v0

    .line 2132
    :goto_0
    invoke-virtual {p4, p1}, Lcom/mbridge/msdk/reward/a/a;->a(Z)V

    .line 2133
    invoke-virtual {p4, p2, p3}, Lcom/mbridge/msdk/reward/a/a;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 2134
    new-instance p1, Lcom/mbridge/msdk/video/bt/module/b/a;

    const/4 p2, 0x0

    invoke-direct {p1, p2}, Lcom/mbridge/msdk/video/bt/module/b/a;-><init>(Lcom/mbridge/msdk/video/bt/module/b/g;)V

    invoke-virtual {p4, p1}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;)V

    .line 2135
    invoke-virtual {p4, v0}, Lcom/mbridge/msdk/reward/a/a;->d(Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_1
    return-void
.end method

.method public final a(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 17

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    const-string v2, "id"

    const-string v3, "RewardCampaignsResourceManager_test"

    const-string v4, "====\u5f00\u59cb\u9884\u52a0\u8f7d\u64ad\u653e\u6a21\u677f===="

    .line 2149
    invoke-static {v3, v4}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v0, :cond_7

    .line 2151
    :try_start_0
    invoke-static/range {p2 .. p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_7

    .line 2152
    new-instance v4, Lorg/json/JSONObject;

    move-object/from16 v5, p2

    invoke-direct {v4, v5}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 2153
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    .line 2154
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v4

    invoke-virtual {v4, v0, v13}, Lcom/mbridge/msdk/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 2155
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v4

    invoke-virtual {v4, v13}, Lcom/mbridge/msdk/video/bt/a/c;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    .line 2156
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v4

    invoke-virtual {v4, v13}, Lcom/mbridge/msdk/video/bt/a/c;->a(Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v9

    .line 2157
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v4

    invoke-virtual {v4, v13}, Lcom/mbridge/msdk/video/bt/a/c;->b(Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object v12

    .line 2158
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "preloadSubPlayTemplateView id = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2159
    new-instance v10, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v10}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    .line 2160
    invoke-virtual {v10, v9}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    .line 2161
    check-cast v0, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 2162
    iget-object v4, v0, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    instance-of v4, v4, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_6

    const-string v4, "\u5f00\u59cb\u9884\u52a0\u8f7d\u64ad\u653e\u6a21\u677f 00 "

    .line 2163
    invoke-static {v3, v4}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2164
    iget-object v8, v0, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 3087
    invoke-static {}, Lcom/mbridge/msdk/reward/adapter/c$m;->a()Lcom/mbridge/msdk/reward/adapter/c;

    move-result-object v6

    .line 2165
    iget-boolean v7, v1, Lcom/mbridge/msdk/reward/adapter/c$b;->s:Z

    iget v0, v1, Lcom/mbridge/msdk/reward/adapter/c$b;->r:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v0, :cond_0

    const/4 v0, 0x3

    goto :goto_0

    :cond_0
    const/4 v0, 0x6

    :goto_0
    if-eqz v8, :cond_5

    const-string v4, "onSubPlayTemplateViewLoad"

    const-string v5, "data"

    const-string v14, "data is null"

    const-string v15, "error"

    const-string v3, "result"

    const-string v1, "RewardCampaignsResourceManager"

    if-eqz v9, :cond_4

    if-eqz v12, :cond_4

    .line 4241
    :try_start_1
    invoke-virtual {v9}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v16

    if-eqz v16, :cond_4

    invoke-static {v11}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v16

    if-eqz v16, :cond_1

    goto/16 :goto_1

    .line 4258
    :cond_1
    invoke-virtual {v9}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v16

    invoke-virtual/range {v16 .. v16}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v16

    invoke-static/range {v16 .. v16}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v16

    if-eqz v16, :cond_2

    .line 4259
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 4261
    :try_start_2
    invoke-virtual {v0, v2, v13}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 4262
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const/4 v6, 0x1

    .line 4263
    invoke-virtual {v2, v3, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 4264
    invoke-virtual {v2, v15, v14}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 4265
    invoke-virtual {v0, v5, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 4266
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v2

    .line 4267
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v3, 0x2

    invoke-static {v0, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    .line 4266
    invoke-virtual {v2, v8, v4, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto/16 :goto_2

    :catch_0
    move-exception v0

    .line 4269
    :try_start_3
    sget-boolean v2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v2, :cond_5

    .line 4270
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_2

    .line 4275
    :cond_2
    invoke-virtual {v9}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v2

    .line 4274
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    .line 4275
    invoke-virtual {v9}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v2

    const-string v3, "cmpt=1"

    invoke-virtual {v2, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_3

    const-string v0, "getTeamplateUrl contains cmpt=1"

    .line 4276
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 4279
    :cond_3
    new-instance v1, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 4280
    new-instance v2, Lcom/mbridge/msdk/reward/adapter/c$4;

    move-object v5, v2

    invoke-direct/range {v5 .. v13}, Lcom/mbridge/msdk/reward/adapter/c$4;-><init>(Lcom/mbridge/msdk/reward/adapter/c;ZLcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/concurrent/CopyOnWriteArrayList;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/d/c;Ljava/lang/String;)V

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v3, v0

    invoke-virtual {v1, v2, v3, v4}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_2

    .line 4242
    :cond_4
    :goto_1
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 4244
    :try_start_4
    invoke-virtual {v0, v2, v13}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 4245
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const/4 v6, 0x2

    .line 4246
    invoke-virtual {v2, v3, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 4247
    invoke-virtual {v2, v15, v14}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 4248
    invoke-virtual {v0, v5, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 4249
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v2

    .line 4250
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v3, 0x2

    invoke-static {v0, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    .line 4249
    invoke-virtual {v2, v8, v4, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    goto :goto_2

    :catch_1
    move-exception v0

    .line 4252
    :try_start_5
    sget-boolean v2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v2, :cond_5

    .line 4253
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v0

    move-object/from16 v1, p0

    goto :goto_3

    :cond_5
    :goto_2
    move-object/from16 v1, p0

    .line 2167
    :try_start_6
    iget v0, v1, Lcom/mbridge/msdk/reward/adapter/c$b;->r:I

    const/4 v2, 0x1

    add-int/2addr v0, v2

    iput v0, v1, Lcom/mbridge/msdk/reward/adapter/c$b;->r:I

    goto :goto_4

    :cond_6
    const-string v0, "\u5f00\u59cb\u9884\u52a0\u8f7d\u64ad\u653e\u6a21\u677f 11 "

    .line 2169
    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_4

    :catchall_1
    move-exception v0

    goto :goto_3

    :cond_7
    const-string v0, "preloadSubPlayTemplateView: RewardCampaignsResourceManager  object or params null"

    .line 2172
    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    goto :goto_4

    .line 2175
    :goto_3
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v2, "RVWindVaneWebView"

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_4
    return-void
.end method
