.class public final Lcom/mbridge/msdk/video/module/a/a/m;
.super Lcom/mbridge/msdk/video/module/a/a/n;
.source "VideoViewJSListener.java"


# instance fields
.field private l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

.field private m:I

.field private n:Z

.field private o:I

.field private p:Z


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/video/js/factory/IJSFactory;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/b/d;Lcom/mbridge/msdk/videocommon/download/a;Ljava/lang/String;Ljava/lang/String;IILcom/mbridge/msdk/video/module/a/a;IZI)V
    .locals 11

    move-object v9, p0

    move-object v10, p1

    move-object v0, p0

    move-object v1, p2

    move-object v2, p3

    move-object v3, p4

    move-object/from16 v4, p5

    move-object/from16 v5, p6

    move-object/from16 v6, p9

    move/from16 v7, p10

    move/from16 v8, p11

    .line 32
    invoke-direct/range {v0 .. v8}, Lcom/mbridge/msdk/video/module/a/a/n;-><init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/b/d;Lcom/mbridge/msdk/videocommon/download/a;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/video/module/a/a;IZ)V

    const/4 v0, 0x0

    .line 27
    iput-boolean v0, v9, Lcom/mbridge/msdk/video/module/a/a/m;->n:Z

    .line 29
    iput-boolean v0, v9, Lcom/mbridge/msdk/video/module/a/a/m;->p:Z

    .line 33
    iput-object v10, v9, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    move/from16 v1, p7

    .line 34
    iput v1, v9, Lcom/mbridge/msdk/video/module/a/a/m;->m:I

    if-nez p8, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    move v1, v0

    .line 35
    :goto_0
    iput-boolean v1, v9, Lcom/mbridge/msdk/video/module/a/a/m;->n:Z

    move/from16 v1, p12

    .line 36
    iput v1, v9, Lcom/mbridge/msdk/video/module/a/a/m;->o:I

    if-nez v10, :cond_1

    .line 38
    iput-boolean v0, v9, Lcom/mbridge/msdk/video/module/a/a/m;->a:Z

    :cond_1
    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/Object;)V
    .locals 10

    .line 44
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->a:Z

    if-eqz v0, :cond_17

    const-string v0, ""

    const/4 v1, 0x1

    if-eq p1, v1, :cond_15

    const/16 v2, 0x8

    const/4 v3, 0x3

    const/4 v4, 0x0

    const/4 v5, 0x2

    if-eq p1, v5, :cond_10

    const/4 v6, -0x1

    const/4 v7, 0x5

    if-eq p1, v7, :cond_e

    const/4 v7, 0x6

    if-eq p1, v7, :cond_10

    if-eq p1, v2, :cond_c

    const/16 v8, 0x72

    if-eq p1, v8, :cond_b

    const/16 v8, 0x74

    if-eq p1, v8, :cond_a

    packed-switch p1, :pswitch_data_0

    packed-switch p1, :pswitch_data_1

    goto/16 :goto_8

    .line 207
    :pswitch_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/e;->hideAlertWebview()V

    goto/16 :goto_8

    .line 200
    :pswitch_1
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v1}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSNotifyProxy()Lcom/mbridge/msdk/video/js/f;

    move-result-object v1

    const/16 v2, 0x7b

    if-ne p1, v2, :cond_0

    const/4 v7, 0x7

    :cond_0
    invoke-interface {v1, v7, v0}, Lcom/mbridge/msdk/video/js/f;->a(ILjava/lang/String;)V

    goto/16 :goto_8

    :pswitch_2
    if-eqz p2, :cond_17

    .line 151
    instance-of v0, p2, Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;

    if-eqz v0, :cond_17

    .line 152
    move-object v0, p2

    check-cast v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;

    .line 157
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/a/a/m;->n:Z

    .line 159
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v1}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSNotifyProxy()Lcom/mbridge/msdk/video/js/f;

    move-result-object v1

    invoke-interface {v1, v0}, Lcom/mbridge/msdk/video/js/f;->a(Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;)V

    goto/16 :goto_8

    .line 175
    :pswitch_3
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->n:Z

    if-nez v0, :cond_17

    .line 176
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0, v4, v1}, Lcom/mbridge/msdk/video/js/i;->closeVideoOperate(II)V

    goto/16 :goto_8

    .line 168
    :pswitch_4
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/i;->isH5Canvas()Z

    move-result v0

    if-nez v0, :cond_1

    .line 169
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0, v4, v5}, Lcom/mbridge/msdk/video/js/i;->closeVideoOperate(II)V

    .line 171
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSNotifyProxy()Lcom/mbridge/msdk/video/js/f;

    move-result-object v0

    invoke-interface {v0, v6}, Lcom/mbridge/msdk/video/js/f;->a(I)V

    goto/16 :goto_8

    .line 55
    :pswitch_5
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0, v3}, Lcom/mbridge/msdk/video/js/i;->videoOperate(I)V

    .line 57
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideo_end_type()I

    move-result v0

    if-eq v0, v3, :cond_2

    .line 58
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v0

    if-eq v0, v5, :cond_3

    .line 59
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0, v2}, Lcom/mbridge/msdk/video/js/i;->setVisible(I)V

    goto :goto_0

    .line 62
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0, v4}, Lcom/mbridge/msdk/video/js/i;->setVisible(I)V

    :cond_3
    :goto_0
    const/16 v0, 0xc

    if-ne p1, v0, :cond_4

    .line 67
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/a/a/m;->h()V

    move v2, v5

    goto :goto_1

    :cond_4
    move v2, v1

    .line 69
    :goto_1
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v3}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSNotifyProxy()Lcom/mbridge/msdk/video/js/f;

    move-result-object v3

    invoke-interface {v3, v2}, Lcom/mbridge/msdk/video/js/f;->a(I)V

    .line 70
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v2

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/c;->h()I

    move-result v2

    if-ne v2, v5, :cond_5

    .line 71
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v2

    invoke-interface {v2, v4}, Lcom/mbridge/msdk/video/js/i;->setVisible(I)V

    .line 72
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v2

    .line 73
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v3}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v4

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/i;->getBorderViewTop()I

    move-result v5

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/i;->getBorderViewLeft()I

    move-result v6

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/i;->getBorderViewWidth()I

    move-result v7

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/i;->getBorderViewHeight()I

    move-result v8

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/i;->getBorderViewRadius()I

    move-result v9

    invoke-interface/range {v4 .. v9}, Lcom/mbridge/msdk/video/js/e;->showMiniCard(IIIII)V

    goto :goto_2

    :cond_5
    if-ne p1, v0, :cond_7

    .line 76
    iget v2, p0, Lcom/mbridge/msdk/video/module/a/a/m;->o:I

    if-ne v2, v1, :cond_9

    .line 77
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/m;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v2

    if-eq v2, v5, :cond_6

    .line 78
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/a/a/m;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideo_end_type()I

    move-result v3

    invoke-interface {v2, v3}, Lcom/mbridge/msdk/video/js/e;->showEndcard(I)V

    goto :goto_2

    .line 80
    :cond_6
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v2

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/e;->showVideoEndCover()V

    goto :goto_2

    .line 84
    :cond_7
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/m;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v2

    if-eq v2, v5, :cond_8

    .line 85
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/a/a/m;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideo_end_type()I

    move-result v3

    invoke-interface {v2, v3}, Lcom/mbridge/msdk/video/js/e;->showEndcard(I)V

    goto :goto_2

    .line 87
    :cond_8
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v2

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/e;->showVideoEndCover()V

    .line 92
    :cond_9
    :goto_2
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v2

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/i;->dismissAllAlert()V

    if-ne p1, v0, :cond_17

    .line 95
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->p:Z

    if-nez v0, :cond_17

    iget v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->o:I

    if-ne v0, v1, :cond_17

    .line 96
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/a/a/m;->h()V

    .line 97
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/a/a/m;->g()V

    .line 98
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/a/a/m;->f()V

    .line 99
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/a/a/m;->e()V

    goto/16 :goto_8

    .line 163
    :pswitch_6
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/a/a/m;->p:Z

    .line 164
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSNotifyProxy()Lcom/mbridge/msdk/video/js/f;

    move-result-object v0

    invoke-interface {v0, v4}, Lcom/mbridge/msdk/video/js/f;->a(I)V

    goto/16 :goto_8

    .line 186
    :cond_a
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    .line 187
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v1}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v1

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/i;->getBorderViewWidth()I

    move-result v2

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/i;->getBorderViewHeight()I

    move-result v3

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/i;->getBorderViewRadius()I

    move-result v0

    invoke-interface {v1, v2, v3, v0}, Lcom/mbridge/msdk/video/js/e;->configurationChanged(III)V

    goto/16 :goto_8

    .line 180
    :cond_b
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c;->h()I

    move-result v0

    if-ne v0, v5, :cond_17

    .line 181
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    .line 182
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v1}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v2

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/i;->getBorderViewTop()I

    move-result v3

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/i;->getBorderViewLeft()I

    move-result v4

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/i;->getBorderViewWidth()I

    move-result v5

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/i;->getBorderViewHeight()I

    move-result v6

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/i;->getBorderViewRadius()I

    move-result v7

    invoke-interface/range {v2 .. v7}, Lcom/mbridge/msdk/video/js/e;->showMiniCard(IIIII)V

    goto/16 :goto_8

    .line 191
    :cond_c
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/e;->showAlertWebView()Z

    move-result v0

    if-nez v0, :cond_d

    .line 192
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/i;->showAlertView()V

    goto/16 :goto_8

    .line 194
    :cond_d
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/i;->alertWebViewShowed()V

    goto/16 :goto_8

    :cond_e
    if-eqz p2, :cond_17

    .line 137
    instance-of v2, p2, Ljava/lang/Integer;

    if-eqz v2, :cond_17

    .line 138
    move-object v2, p2

    check-cast v2, Ljava/lang/Integer;

    .line 139
    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    if-ne v2, v1, :cond_f

    .line 140
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    goto :goto_3

    .line 142
    :cond_f
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    .line 144
    :goto_3
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v2

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v3

    invoke-interface {v2, v3, v6}, Lcom/mbridge/msdk/video/js/i;->soundOperate(II)V

    .line 146
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSNotifyProxy()Lcom/mbridge/msdk/video/js/f;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-interface {v2, v7, v0}, Lcom/mbridge/msdk/video/js/f;->a(ILjava/lang/String;)V

    goto/16 :goto_8

    .line 107
    :cond_10
    iget-object v6, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v6}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v6

    invoke-interface {v6}, Lcom/mbridge/msdk/video/js/i;->dismissAllAlert()V

    if-ne p1, v5, :cond_11

    .line 109
    iget-object v6, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v6}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSNotifyProxy()Lcom/mbridge/msdk/video/js/f;

    move-result-object v6

    invoke-interface {v6, v5, v0}, Lcom/mbridge/msdk/video/js/f;->a(ILjava/lang/String;)V

    .line 112
    :cond_11
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0, v3}, Lcom/mbridge/msdk/video/js/i;->videoOperate(I)V

    .line 113
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c;->h()I

    move-result v0

    const/16 v6, 0x10

    if-ne v0, v5, :cond_12

    goto :goto_5

    .line 116
    :cond_12
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideo_end_type()I

    move-result v0

    if-eq v0, v3, :cond_13

    .line 117
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0, v2}, Lcom/mbridge/msdk/video/js/i;->setVisible(I)V

    goto :goto_4

    .line 119
    :cond_13
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object v0

    invoke-interface {v0, v4}, Lcom/mbridge/msdk/video/js/i;->setVisible(I)V

    .line 122
    :goto_4
    iget v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->m:I

    if-ne v0, v5, :cond_14

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/e;->endCardShowing()Z

    move-result v0

    if-nez v0, :cond_14

    .line 123
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v0

    if-eq v0, v5, :cond_14

    .line 124
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/m;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideo_end_type()I

    move-result v2

    invoke-interface {v0, v2}, Lcom/mbridge/msdk/video/js/e;->showEndcard(I)V

    goto :goto_6

    :cond_14
    :goto_5
    move p1, v6

    .line 133
    :goto_6
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSNotifyProxy()Lcom/mbridge/msdk/video/js/f;

    move-result-object v0

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/js/f;->a(I)V

    goto :goto_8

    .line 47
    :cond_15
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSContainerModule()Lcom/mbridge/msdk/video/js/e;

    move-result-object v2

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/e;->endCardShowing()Z

    move-result v2

    if-nez v2, :cond_17

    .line 49
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/a/a/m;->l:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-interface {v2}, Lcom/mbridge/msdk/video/js/factory/IJSFactory;->getJSNotifyProxy()Lcom/mbridge/msdk/video/js/f;

    move-result-object v2

    if-nez p2, :cond_16

    goto :goto_7

    :cond_16
    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    :goto_7
    invoke-interface {v2, v1, v0}, Lcom/mbridge/msdk/video/js/f;->a(ILjava/lang/String;)V

    .line 211
    :cond_17
    :goto_8
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/module/a/a/n;->a(ILjava/lang/Object;)V

    return-void

    nop

    :pswitch_data_0
    .packed-switch 0xa
        :pswitch_6
        :pswitch_5
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x7b
        :pswitch_1
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
