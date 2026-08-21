.class public final Lcom/mbridge/msdk/video/module/a/a/a;
.super Lcom/mbridge/msdk/video/module/a/a/c;
.source "ContainerViewDefaultListener.java"


# instance fields
.field private k:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

.field private l:Lcom/mbridge/msdk/video/module/MBridgeContainerView;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;Lcom/mbridge/msdk/video/module/MBridgeContainerView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/b/d;Lcom/mbridge/msdk/videocommon/download/a;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/video/module/a/a;IZ)V
    .locals 12

    move-object v9, p0

    move-object v10, p1

    move-object v11, p2

    move-object v0, p0

    move-object v1, p3

    move-object/from16 v2, p5

    move-object/from16 v3, p4

    move-object/from16 v4, p6

    move-object/from16 v5, p7

    move-object/from16 v6, p8

    move/from16 v7, p9

    move/from16 v8, p10

    .line 23
    invoke-direct/range {v0 .. v8}, Lcom/mbridge/msdk/video/module/a/a/c;-><init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/download/a;Lcom/mbridge/msdk/videocommon/b/d;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/video/module/a/a;IZ)V

    .line 24
    iput-object v10, v9, Lcom/mbridge/msdk/video/module/a/a/a;->k:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    .line 25
    iput-object v11, v9, Lcom/mbridge/msdk/video/module/a/a/a;->l:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v10, :cond_0

    if-nez v11, :cond_1

    :cond_0
    const/4 v0, 0x0

    .line 27
    iput-boolean v0, v9, Lcom/mbridge/msdk/video/module/a/a/a;->a:Z

    :cond_1
    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/Object;)V
    .locals 4

    .line 33
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/a;->a:Z

    if-eqz v0, :cond_6

    const/16 v0, 0x8

    if-eq p1, v0, :cond_3

    const/16 v0, 0x6b

    const/4 v1, 0x1

    if-eq p1, v0, :cond_2

    const/16 v0, 0x70

    if-eq p1, v0, :cond_1

    const/16 v0, 0x73

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 61
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/a;->l:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/a;->k:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getBorderViewWidth()I

    move-result v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/a;->k:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getBorderViewHeight()I

    move-result v2

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/a/a/a;->k:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v3}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getBorderViewRadius()I

    move-result v3

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->resizeMiniCard(III)V

    goto :goto_0

    .line 36
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/a;->k:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setCover(Z)V

    .line 37
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/a;->k:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setMiniEndCardState(Z)V

    .line 38
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/a;->k:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->videoOperate(I)V

    goto :goto_0

    .line 42
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/a;->l:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    const/4 v2, -0x1

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showVideoClickView(I)V

    .line 43
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/a;->k:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    const/4 v2, 0x0

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setCover(Z)V

    .line 44
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/a;->k:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setMiniEndCardState(Z)V

    .line 45
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/a;->k:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->videoOperate(I)V

    goto :goto_0

    .line 64
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/a;->l:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_5

    .line 65
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showAlertWebView()Z

    move-result v0

    if-nez v0, :cond_4

    .line 66
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/a;->k:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_6

    .line 67
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->showAlertView()V

    goto :goto_0

    .line 70
    :cond_4
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/a;->k:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_6

    .line 71
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->alertWebViewShowed()V

    goto :goto_0

    .line 75
    :cond_5
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/a;->k:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_6

    .line 76
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->showAlertView()V

    .line 82
    :cond_6
    :goto_0
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/module/a/a/c;->a(ILjava/lang/Object;)V

    return-void
.end method
