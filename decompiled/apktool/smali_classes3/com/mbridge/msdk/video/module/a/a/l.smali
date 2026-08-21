.class public final Lcom/mbridge/msdk/video/module/a/a/l;
.super Lcom/mbridge/msdk/video/module/a/a/n;
.source "VideoViewDefaultListener.java"


# instance fields
.field private l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

.field private m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

.field private n:I

.field private o:Ljava/util/Timer;

.field private p:Landroid/os/Handler;

.field private q:Z

.field private r:Z

.field private s:I

.field private t:I


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;Lcom/mbridge/msdk/video/module/MBridgeContainerView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/b/d;Lcom/mbridge/msdk/videocommon/download/a;Ljava/lang/String;Ljava/lang/String;IILcom/mbridge/msdk/video/module/a/a;IZI)V
    .locals 12

    move-object v9, p0

    move-object v10, p1

    move-object v11, p2

    move-object v0, p0

    move-object v1, p3

    move-object/from16 v2, p4

    move-object/from16 v3, p5

    move-object/from16 v4, p6

    move-object/from16 v5, p7

    move-object/from16 v6, p10

    move/from16 v7, p11

    move/from16 v8, p12

    .line 51
    invoke-direct/range {v0 .. v8}, Lcom/mbridge/msdk/video/module/a/a/n;-><init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/b/d;Lcom/mbridge/msdk/videocommon/download/a;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/video/module/a/a;IZ)V

    .line 40
    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    iput-object v0, v9, Lcom/mbridge/msdk/video/module/a/a/l;->p:Landroid/os/Handler;

    const/4 v0, 0x0

    .line 42
    iput-boolean v0, v9, Lcom/mbridge/msdk/video/module/a/a/l;->q:Z

    .line 44
    iput-boolean v0, v9, Lcom/mbridge/msdk/video/module/a/a/l;->r:Z

    const/4 v1, 0x1

    .line 46
    iput v1, v9, Lcom/mbridge/msdk/video/module/a/a/l;->s:I

    .line 52
    iput-object v10, v9, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    .line 53
    iput-object v11, v9, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    move/from16 v2, p8

    .line 54
    iput v2, v9, Lcom/mbridge/msdk/video/module/a/a/l;->t:I

    move/from16 v2, p9

    .line 55
    iput v2, v9, Lcom/mbridge/msdk/video/module/a/a/l;->n:I

    move/from16 v2, p13

    .line 56
    iput v2, v9, Lcom/mbridge/msdk/video/module/a/a/l;->s:I

    if-eqz v10, :cond_1

    .line 58
    invoke-virtual {p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getVideoSkipTime()I

    move-result v2

    if-nez v2, :cond_0

    goto :goto_0

    :cond_0
    move v1, v0

    :goto_0
    iput-boolean v1, v9, Lcom/mbridge/msdk/video/module/a/a/l;->q:Z

    :cond_1
    if-eqz v10, :cond_2

    if-nez v11, :cond_3

    .line 61
    :cond_2
    iput-boolean v0, v9, Lcom/mbridge/msdk/video/module/a/a/l;->a:Z

    :cond_3
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/module/a/a/l;)Lcom/mbridge/msdk/video/module/MBridgeContainerView;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    return-object p0
.end method

.method static synthetic b(Lcom/mbridge/msdk/video/module/a/a/l;)Lcom/mbridge/msdk/video/module/MBridgeVideoView;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    return-object p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/video/module/a/a/l;)Landroid/os/Handler;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->p:Landroid/os/Handler;

    return-object p0
.end method

.method private i()V
    .locals 1

    .line 315
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->o:Ljava/util/Timer;

    if-eqz v0, :cond_0

    .line 316
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->o:Ljava/util/Timer;

    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V

    const/4 v0, 0x0

    .line 317
    iput-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->o:Ljava/util/Timer;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 320
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method private j()V
    .locals 5

    .line 357
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDynamicTempCode()I

    move-result v0

    const/4 v1, 0x5

    if-ne v0, v1, :cond_5

    const/4 v0, 0x0

    .line 359
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v1, :cond_2

    iget-object v1, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCampOrderViewData:Ljava/util/List;

    if-eqz v1, :cond_2

    const/4 v1, 0x0

    move v2, v1

    .line 361
    :goto_0
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget-object v3, v3, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCampOrderViewData:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-ge v2, v3, :cond_1

    .line 362
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget-object v3, v3, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCampOrderViewData:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    if-eqz v3, :cond_0

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget-object v3, v3, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCampOrderViewData:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v4

    if-ne v3, v4, :cond_0

    add-int/lit8 v1, v2, -0x1

    goto :goto_1

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    :goto_1
    if-ltz v1, :cond_2

    .line 367
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget-object v2, v2, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCampOrderViewData:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 368
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget-object v0, v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCampOrderViewData:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    :cond_2
    if-eqz v0, :cond_5

    .line 372
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v1, :cond_3

    .line 373
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 375
    :cond_3
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v1, :cond_4

    .line 376
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 378
    :cond_4
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/a/a/l;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :cond_5
    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/Object;)V
    .locals 7

    .line 67
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->a:Z

    const/16 v1, 0x10

    if-eqz v0, :cond_23

    const/4 v0, -0x1

    const/4 v2, 0x0

    const/4 v3, 0x1

    const/4 v4, 0x2

    if-eq p1, v3, :cond_1f

    const/4 v5, 0x3

    const/4 v6, 0x5

    if-eq p1, v4, :cond_19

    if-eq p1, v6, :cond_17

    const/4 v0, 0x6

    if-eq p1, v0, :cond_19

    const/16 v0, 0x8

    if-eq p1, v0, :cond_14

    packed-switch p1, :pswitch_data_0

    goto/16 :goto_7

    :pswitch_0
    if-eqz p2, :cond_23

    .line 205
    instance-of v0, p2, Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;

    if-eqz v0, :cond_23

    .line 206
    move-object v0, p2

    check-cast v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;

    .line 208
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->getVideoInteractiveType()I

    move-result v1

    .line 209
    iget-object v5, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v5

    if-ne v5, v4, :cond_0

    .line 210
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v1, v3}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showVideoClickView(I)V

    goto :goto_0

    :cond_0
    if-ltz v1, :cond_1

    .line 212
    iget v5, v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;->a:I

    if-lt v5, v1, :cond_1

    .line 213
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v1, v3}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showVideoClickView(I)V

    .line 214
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->soundOperate(II)V

    .line 218
    :cond_1
    :goto_0
    iget-boolean v1, v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;->c:Z

    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->q:Z

    .line 220
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDynamicTempCode()I

    move-result v1

    if-ne v1, v6, :cond_8

    .line 221
    iget v1, v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;->a:I

    iget v0, v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;->b:I

    .line 2276
    iget-boolean v5, p0, Lcom/mbridge/msdk/video/module/a/a/l;->q:Z

    if-eqz v5, :cond_2

    goto/16 :goto_7

    .line 2279
    :cond_2
    iget-object v5, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v5, :cond_23

    iget-object v5, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez v5, :cond_3

    goto/16 :goto_7

    .line 2285
    :cond_3
    iget v5, p0, Lcom/mbridge/msdk/video/module/a/a/l;->n:I

    if-ltz v5, :cond_4

    if-lt v1, v5, :cond_4

    move v5, v4

    goto :goto_1

    :cond_4
    move v5, v3

    :goto_1
    if-eq v5, v4, :cond_6

    .line 2290
    iget-object v6, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoCompleteTime()I

    move-result v6

    if-nez v6, :cond_5

    .line 2291
    iget-object v6, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget v6, v6, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCurrPlayNum:I

    if-le v6, v3, :cond_6

    goto :goto_2

    .line 2295
    :cond_5
    iget-object v6, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoCompleteTime()I

    move-result v6

    if-le v1, v6, :cond_6

    :goto_2
    move v5, v4

    :cond_6
    if-eq v5, v4, :cond_7

    .line 2300
    iget-object v6, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget v6, v6, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCurrPlayNum:I

    if-le v6, v3, :cond_7

    if-ne v1, v0, :cond_7

    move v5, v4

    :cond_7
    if-ne v5, v4, :cond_23

    .line 2307
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0, v2, v5}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->closeVideoOperate(II)V

    .line 2308
    iput-boolean v3, p0, Lcom/mbridge/msdk/video/module/a/a/l;->q:Z

    goto/16 :goto_7

    .line 224
    :cond_8
    iget v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->n:I

    if-ltz v1, :cond_9

    iget v1, v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;->a:I

    iget v5, p0, Lcom/mbridge/msdk/video/module/a/a/l;->n:I

    if-ge v1, v5, :cond_a

    iget v1, v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;->a:I

    iget v5, v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;->b:I

    if-eq v1, v5, :cond_a

    :cond_9
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoCompleteTime()I

    move-result v1

    if-lez v1, :cond_23

    iget v1, v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;->a:I

    iget-object v5, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoCompleteTime()I

    move-result v5

    if-gt v1, v5, :cond_a

    iget v1, v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;->a:I

    iget v0, v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;->b:I

    if-ne v1, v0, :cond_23

    :cond_a
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->q:Z

    if-nez v0, :cond_23

    .line 225
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0, v2, v4}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->closeVideoOperate(II)V

    .line 226
    iput-boolean v3, p0, Lcom/mbridge/msdk/video/module/a/a/l;->q:Z

    goto/16 :goto_7

    .line 243
    :pswitch_1
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->q:Z

    if-nez v0, :cond_23

    .line 244
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0, v2, v3}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->closeVideoOperate(II)V

    goto/16 :goto_7

    .line 239
    :pswitch_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0, v2, v4}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->closeVideoOperate(II)V

    goto/16 :goto_7

    .line 122
    :pswitch_3
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/a/a/l;->h()V

    .line 124
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v1, v5}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->videoOperate(I)V

    .line 125
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->dismissAllAlert()V

    .line 126
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideo_end_type()I

    move-result v1

    if-eq v1, v5, :cond_b

    .line 127
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setVisibility(I)V

    goto :goto_3

    .line 129
    :cond_b
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setVisibility(I)V

    .line 132
    :goto_3
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->r:Z

    if-nez v0, :cond_c

    iget v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->s:I

    if-nez v0, :cond_c

    goto/16 :goto_7

    .line 136
    :cond_c
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_d

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDynamicTempCode()I

    move-result v0

    if-ne v0, v6, :cond_d

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_d

    .line 138
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/a/a/l;->j()V

    .line 140
    iput v2, p0, Lcom/mbridge/msdk/video/module/a/a/l;->s:I

    .line 143
    :cond_d
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->r:Z

    if-nez v0, :cond_e

    iget v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->s:I

    if-ne v0, v3, :cond_e

    .line 144
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/a/a/l;->g()V

    .line 145
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/a/a/l;->f()V

    .line 146
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/a/a/l;->e()V

    .line 150
    :cond_e
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v0

    if-eq v0, v4, :cond_f

    .line 151
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideo_end_type()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showEndcard(I)V

    goto/16 :goto_7

    .line 153
    :cond_f
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showVideoEndCover()V

    goto/16 :goto_7

    .line 97
    :pswitch_4
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v1, v5}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->videoOperate(I)V

    .line 99
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->dismissAllAlert()V

    .line 100
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideo_end_type()I

    move-result v1

    if-eq v1, v5, :cond_10

    .line 101
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v1

    if-eq v1, v4, :cond_11

    .line 102
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setVisibility(I)V

    goto :goto_4

    .line 105
    :cond_10
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setVisibility(I)V

    .line 107
    :cond_11
    :goto_4
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_12

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDynamicTempCode()I

    move-result v0

    if-ne v0, v6, :cond_12

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget v0, v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCurrPlayNum:I

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget v1, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCampaignSize:I

    if-ne v0, v1, :cond_12

    .line 108
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_23

    .line 109
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setRewardStatus(Z)V

    .line 110
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showOrderCampView()V

    goto/16 :goto_7

    .line 113
    :cond_12
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v0

    if-ne v0, v4, :cond_13

    .line 114
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showVideoEndCover()V

    goto/16 :goto_7

    .line 116
    :cond_13
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideo_end_type()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showEndcard(I)V

    goto/16 :goto_7

    .line 232
    :pswitch_5
    iput-boolean v3, p0, Lcom/mbridge/msdk/video/module/a/a/l;->r:Z

    .line 233
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0, v2, v4}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->soundOperate(II)V

    .line 234
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0, v2, v4}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->progressOperate(II)V

    goto/16 :goto_7

    .line 248
    :cond_14
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_16

    .line 249
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showAlertWebView()Z

    move-result v0

    if-nez v0, :cond_15

    .line 250
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_23

    .line 251
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->showAlertView()V

    goto/16 :goto_7

    .line 254
    :cond_15
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_23

    .line 255
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->alertWebViewShowed()V

    goto/16 :goto_7

    .line 259
    :cond_16
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_23

    .line 260
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->showAlertView()V

    goto/16 :goto_7

    :cond_17
    if-eqz p2, :cond_23

    .line 192
    instance-of v1, p2, Ljava/lang/Integer;

    if-eqz v1, :cond_23

    .line 193
    move-object v1, p2

    check-cast v1, Ljava/lang/Integer;

    .line 194
    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    if-ne v1, v3, :cond_18

    .line 195
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    goto :goto_5

    .line 197
    :cond_18
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    .line 199
    :goto_5
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {v2, v1, v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->soundOperate(II)V

    goto/16 :goto_7

    .line 160
    :cond_19
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->dismissAllAlert()V

    .line 161
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->videoOperate(I)V

    .line 162
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1c

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_1c

    .line 163
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDynamicTempCode()I

    move-result v0

    if-ne v0, v6, :cond_1c

    .line 164
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_1b

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget v0, v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCurrPlayNum:I

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget v2, v2, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCampaignSize:I

    if-ne v0, v2, :cond_1b

    .line 165
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v0

    if-ne v0, v4, :cond_1a

    goto :goto_6

    .line 168
    :cond_1a
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->setRewardStatus(Z)V

    .line 169
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showOrderCampView()V

    goto/16 :goto_7

    .line 173
    :cond_1b
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/l;->g:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget v3, v3, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCurrentPlayProgressTime:I

    invoke-static {v0, v2, v3}, Lcom/mbridge/msdk/video/bt/module/b/f;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    .line 177
    :cond_1c
    iget v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->t:I

    if-ne v0, v4, :cond_1e

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->endCardShowing()Z

    move-result v0

    if-nez v0, :cond_1e

    .line 179
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v0

    if-ne v0, v4, :cond_1d

    goto :goto_6

    .line 182
    :cond_1d
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideo_end_type()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showEndcard(I)V

    goto :goto_7

    :cond_1e
    :goto_6
    move p1, v1

    goto :goto_7

    .line 70
    :cond_1f
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->endCardShowing()Z

    move-result v1

    if-nez v1, :cond_23

    .line 72
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->getVideoInteractiveType()I

    move-result v1

    const/4 v5, -0x2

    if-eq v1, v5, :cond_22

    if-eq v1, v0, :cond_20

    goto :goto_7

    .line 82
    :cond_20
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->isLast()Z

    move-result v1

    if-eqz v1, :cond_21

    .line 83
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showVideoClickView(I)V

    .line 84
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0, v2, v3}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->soundOperate(II)V

    .line 1326
    :try_start_0
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/a/a/l;->i()V

    .line 1327
    new-instance v0, Ljava/util/Timer;

    invoke-direct {v0}, Ljava/util/Timer;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->o:Ljava/util/Timer;

    .line 1328
    new-instance v0, Lcom/mbridge/msdk/video/module/a/a/l$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/video/module/a/a/l$1;-><init>(Lcom/mbridge/msdk/video/module/a/a/l;)V

    .line 1346
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->o:Ljava/util/Timer;

    const-wide/16 v2, 0xbb8

    invoke-virtual {v1, v0, v2, v3}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_7

    :catch_0
    move-exception v0

    .line 1348
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_7

    .line 87
    :cond_21
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showVideoClickView(I)V

    .line 88
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->l:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0, v2, v4}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->soundOperate(II)V

    .line 89
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/a/a/l;->i()V

    goto :goto_7

    .line 76
    :cond_22
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->miniCardLoaded()Z

    move-result v0

    if-eqz v0, :cond_23

    .line 77
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/l;->m:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showVideoClickView(I)V

    .line 266
    :cond_23
    :goto_7
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/module/a/a/n;->a(ILjava/lang/Object;)V

    return-void

    :pswitch_data_0
    .packed-switch 0xa
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
