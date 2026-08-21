.class public Lcom/mbridge/msdk/video/module/a/a/n;
.super Lcom/mbridge/msdk/video/module/a/a/j;
.source "VideoViewStatisticsListener.java"


# instance fields
.field protected k:I

.field private l:Z

.field private m:Z

.field private n:Z

.field private o:Z

.field private p:Z

.field private q:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private r:I


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/b/d;Lcom/mbridge/msdk/videocommon/download/a;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/video/module/a/a;IZ)V
    .locals 10

    move-object v9, p0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p3

    move-object v3, p2

    move-object v4, p4

    move-object v5, p5

    move-object/from16 v6, p6

    move/from16 v7, p7

    move/from16 v8, p8

    .line 43
    invoke-direct/range {v0 .. v8}, Lcom/mbridge/msdk/video/module/a/a/j;-><init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/download/a;Lcom/mbridge/msdk/videocommon/b/d;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/video/module/a/a;IZ)V

    const/4 v0, 0x0

    .line 29
    iput-boolean v0, v9, Lcom/mbridge/msdk/video/module/a/a/n;->p:Z

    .line 30
    iput v0, v9, Lcom/mbridge/msdk/video/module/a/a/n;->k:I

    const/4 v0, -0x1

    .line 50
    iput v0, v9, Lcom/mbridge/msdk/video/module/a/a/n;->r:I

    .line 44
    iget-boolean v0, v9, Lcom/mbridge/msdk/video/module/a/a/n;->a:Z

    if-eqz v0, :cond_0

    .line 45
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdvImpList()Ljava/util/Map;

    move-result-object v0

    iput-object v0, v9, Lcom/mbridge/msdk/video/module/a/a/n;->q:Ljava/util/Map;

    .line 47
    :cond_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoCompleteTime()I

    move-result v0

    iput v0, v9, Lcom/mbridge/msdk/video/module/a/a/n;->k:I

    return-void
.end method


# virtual methods
.method public a(ILjava/lang/Object;)V
    .locals 7

    const/4 v0, 0x2

    const/4 v1, 0x1

    if-eq p1, v0, :cond_b

    const/16 v2, 0x82

    if-eq p1, v2, :cond_a

    const/4 v2, 0x6

    if-eq p1, v2, :cond_b

    const/4 v2, 0x7

    if-eq p1, v2, :cond_8

    const/16 v0, 0xf

    const/4 v2, 0x0

    if-eq p1, v0, :cond_2

    const/16 v0, 0x10

    if-eq p1, v0, :cond_b

    packed-switch p1, :pswitch_data_0

    goto/16 :goto_4

    .line 130
    :pswitch_0
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/a/a/n;->b()V

    .line 132
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/a/a/n;->c()V

    goto/16 :goto_4

    .line 136
    :pswitch_1
    new-instance v0, Lcom/mbridge/msdk/video/module/a/a/n$1;

    invoke-direct {v0, p0, p2}, Lcom/mbridge/msdk/video/module/a/a/n$1;-><init>(Lcom/mbridge/msdk/video/module/a/a/n;Ljava/lang/Object;)V

    .line 143
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/b;->d()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 144
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->a()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v1

    invoke-virtual {v1, v0}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 146
    :cond_0
    invoke-interface {v0}, Ljava/lang/Runnable;->run()V

    .line 148
    :goto_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/a/a/n;->d()V

    .line 149
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/a/a/n;->b()V

    .line 150
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/a/a/n;->c()V

    .line 1388
    new-instance v0, Lcom/mbridge/msdk/video/module/a/a/j$4;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/video/module/a/a/j$4;-><init>(Lcom/mbridge/msdk/video/module/a/a/j;)V

    .line 1419
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/b;->d()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 1420
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->a()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v1

    invoke-virtual {v1, v0}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    goto :goto_1

    .line 1422
    :cond_1
    invoke-interface {v0}, Ljava/lang/Runnable;->run()V

    .line 2243
    :goto_1
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/videocommon/download/b;->b(Z)V

    goto/16 :goto_4

    .line 1243
    :pswitch_2
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/videocommon/download/b;->b(Z)V

    .line 125
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/a/a/n;->d()V

    goto/16 :goto_4

    .line 90
    :cond_2
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/a/a/n;->g()V

    .line 91
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/a/a/n;->f()V

    .line 92
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/a/a/n;->e()V

    if-eqz p2, :cond_3

    .line 95
    instance-of v0, p2, Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;

    if-eqz v0, :cond_3

    .line 96
    move-object v0, p2

    check-cast v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;

    iget v2, v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;->a:I

    .line 97
    move-object v0, p2

    check-cast v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;

    iget v0, v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;->b:I

    move v6, v2

    move v2, v0

    move v0, v6

    goto :goto_2

    :cond_3
    move v0, v2

    :goto_2
    if-nez v2, :cond_4

    .line 99
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/a/a/n;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v3, :cond_4

    .line 100
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/n;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoLength()I

    move-result v2

    .line 102
    :cond_4
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/a/a/n;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget v5, p0, Lcom/mbridge/msdk/video/module/a/a/n;->j:I

    invoke-static {v3, v4, v0, v2, v5}, Lcom/mbridge/msdk/video/module/b/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;III)V

    .line 103
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/a/a/n;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/a/a/n;->q:Ljava/util/Map;

    iget-object v5, p0, Lcom/mbridge/msdk/video/module/a/a/n;->g:Ljava/lang/String;

    invoke-static {v3, v4, v5, v0}, Lcom/mbridge/msdk/video/module/b/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/Map;Ljava/lang/String;I)V

    .line 104
    iget-boolean v3, p0, Lcom/mbridge/msdk/video/module/a/a/n;->o:Z

    if-nez v3, :cond_5

    .line 105
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/a/a/n;->o:Z

    .line 106
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/a/a/n;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/a/a/n;->g:Ljava/lang/String;

    invoke-static {v3, v4}, Lcom/mbridge/msdk/video/module/b/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    .line 108
    :cond_5
    iget-boolean v3, p0, Lcom/mbridge/msdk/video/module/a/a/n;->p:Z

    if-nez v3, :cond_7

    iget v3, p0, Lcom/mbridge/msdk/video/module/a/a/n;->k:I

    if-nez v3, :cond_6

    goto :goto_3

    :cond_6
    iget v2, p0, Lcom/mbridge/msdk/video/module/a/a/n;->k:I

    :goto_3
    if-lt v0, v2, :cond_7

    .line 109
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/a/a/n;->p:Z

    const/16 p1, 0x11

    .line 118
    :cond_7
    iput v0, p0, Lcom/mbridge/msdk/video/module/a/a/n;->r:I

    goto :goto_4

    .line 59
    :cond_8
    iget-boolean v2, p0, Lcom/mbridge/msdk/video/module/a/a/n;->a:Z

    if-eqz v2, :cond_c

    if-eqz p2, :cond_c

    instance-of v2, p2, Ljava/lang/Integer;

    if-eqz v2, :cond_c

    .line 60
    move-object v2, p2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    if-ne v2, v0, :cond_9

    .line 62
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/n;->m:Z

    if-nez v0, :cond_c

    .line 63
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/a/a/n;->m:Z

    .line 64
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/n;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/video/module/b/b;->b(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    goto :goto_4

    :cond_9
    if-ne v2, v1, :cond_c

    .line 67
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/n;->l:Z

    if-nez v0, :cond_c

    .line 68
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/a/a/n;->l:Z

    .line 69
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/n;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/video/module/b/b;->c(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    goto :goto_4

    .line 156
    :cond_a
    instance-of v0, p2, Ljava/lang/Integer;

    if-eqz v0, :cond_c

    .line 157
    move-object v0, p2

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/video/module/a/a/n;->k:I

    goto :goto_4

    .line 79
    :cond_b
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/n;->a:Z

    if-eqz v0, :cond_c

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/n;->n:Z

    if-nez v0, :cond_c

    .line 80
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/a/a/n;->n:Z

    .line 81
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/a/a/n;->d()V

    .line 82
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/n;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/video/module/b/b;->e(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 161
    :cond_c
    :goto_4
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/n;->i:Lcom/mbridge/msdk/video/module/a/a;

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_5

    :catchall_0
    move-exception p1

    .line 163
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    const-string v0, "NotifyListener"

    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_5
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0xb
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
