.class public final Lcom/tkay/expressad/video/module/a/a/n;
.super Lcom/tkay/expressad/video/module/a/a/o;


# instance fields
.field private ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

.field private ai:I

.field private aj:Z

.field private ak:I

.field private al:Z


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/video/signal/factory/IJSFactory;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/c/c;Lcom/tkay/expressad/videocommon/b/a;Ljava/lang/String;Ljava/lang/String;IILcom/tkay/expressad/video/module/a/a;IZI)V
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

    .line 25
    invoke-direct/range {v0 .. v8}, Lcom/tkay/expressad/video/module/a/a/o;-><init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/c/c;Lcom/tkay/expressad/videocommon/b/a;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/video/module/a/a;IZ)V

    const/4 v0, 0x0

    .line 20
    iput-boolean v0, v9, Lcom/tkay/expressad/video/module/a/a/n;->aj:Z

    .line 22
    iput-boolean v0, v9, Lcom/tkay/expressad/video/module/a/a/n;->al:Z

    .line 26
    iput-object v10, v9, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    move/from16 v1, p7

    .line 27
    iput v1, v9, Lcom/tkay/expressad/video/module/a/a/n;->ai:I

    if-nez p8, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    move v1, v0

    .line 28
    :goto_0
    iput-boolean v1, v9, Lcom/tkay/expressad/video/module/a/a/n;->aj:Z

    move/from16 v1, p12

    .line 29
    iput v1, v9, Lcom/tkay/expressad/video/module/a/a/n;->ak:I

    if-nez v10, :cond_1

    .line 31
    iput-boolean v0, v9, Lcom/tkay/expressad/video/module/a/a/n;->W:Z

    :cond_1
    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/Object;)V
    .locals 10

    .line 37
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->W:Z

    if-eqz v0, :cond_15

    const-string v0, ""

    const/4 v1, 0x1

    if-eq p1, v1, :cond_14

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

    goto/16 :goto_6

    .line 200
    :pswitch_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/e;->hideAlertWebview()V

    goto/16 :goto_6

    .line 193
    :pswitch_1
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v1}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSNotifyProxy()Lcom/tkay/expressad/video/signal/g;

    move-result-object v1

    const/16 v2, 0x7b

    if-ne p1, v2, :cond_0

    const/4 v7, 0x7

    :cond_0
    invoke-interface {v1, v7, v0}, Lcom/tkay/expressad/video/signal/g;->a(ILjava/lang/String;)V

    goto/16 :goto_6

    :pswitch_2
    if-eqz p2, :cond_15

    .line 144
    instance-of v0, p2, Lcom/tkay/expressad/video/module/TkayVideoView$a;

    if-eqz v0, :cond_15

    .line 145
    move-object v0, p2

    check-cast v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;

    .line 150
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/a/a/n;->aj:Z

    .line 152
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v1}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSNotifyProxy()Lcom/tkay/expressad/video/signal/g;

    move-result-object v1

    invoke-interface {v1, v0}, Lcom/tkay/expressad/video/signal/g;->a(Lcom/tkay/expressad/video/module/TkayVideoView$a;)V

    goto/16 :goto_6

    .line 168
    :pswitch_3
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->aj:Z

    if-nez v0, :cond_15

    .line 169
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    invoke-interface {v0, v4, v1}, Lcom/tkay/expressad/video/signal/j;->closeVideoOperate(II)V

    goto/16 :goto_6

    .line 161
    :pswitch_4
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/j;->isH5Canvas()Z

    move-result v0

    if-nez v0, :cond_1

    .line 162
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    invoke-interface {v0, v4, v5}, Lcom/tkay/expressad/video/signal/j;->closeVideoOperate(II)V

    .line 164
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSNotifyProxy()Lcom/tkay/expressad/video/signal/g;

    move-result-object v0

    invoke-interface {v0, v6}, Lcom/tkay/expressad/video/signal/g;->a(I)V

    goto/16 :goto_6

    .line 48
    :pswitch_5
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    invoke-interface {v0, v3}, Lcom/tkay/expressad/video/signal/j;->videoOperate(I)V

    .line 50
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->F()I

    move-result v0

    if-eq v0, v3, :cond_2

    .line 51
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v0

    if-eq v0, v5, :cond_3

    .line 52
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    invoke-interface {v0, v2}, Lcom/tkay/expressad/video/signal/j;->setVisible(I)V

    goto :goto_0

    .line 55
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    invoke-interface {v0, v4}, Lcom/tkay/expressad/video/signal/j;->setVisible(I)V

    :cond_3
    :goto_0
    const/16 v0, 0xc

    if-ne p1, v0, :cond_4

    .line 60
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/n;->f()V

    move v2, v5

    goto :goto_1

    :cond_4
    move v2, v1

    .line 62
    :goto_1
    iget-object v3, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v3}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSNotifyProxy()Lcom/tkay/expressad/video/signal/g;

    move-result-object v3

    invoke-interface {v3, v2}, Lcom/tkay/expressad/video/signal/g;->a(I)V

    .line 63
    iget-object v2, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v2

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/c;->m()I

    move-result v2

    if-ne v2, v5, :cond_5

    .line 64
    iget-object v2, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v2

    invoke-interface {v2, v4}, Lcom/tkay/expressad/video/signal/j;->setVisible(I)V

    .line 65
    iget-object v2, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v2

    .line 66
    iget-object v3, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v3}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v4

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/j;->getBorderViewTop()I

    move-result v5

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/j;->getBorderViewLeft()I

    move-result v6

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/j;->getBorderViewWidth()I

    move-result v7

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/j;->getBorderViewHeight()I

    move-result v8

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/j;->getBorderViewRadius()I

    move-result v9

    invoke-interface/range {v4 .. v9}, Lcom/tkay/expressad/video/signal/e;->showMiniCard(IIIII)V

    goto :goto_2

    :cond_5
    if-ne p1, v0, :cond_7

    .line 69
    iget v2, p0, Lcom/tkay/expressad/video/module/a/a/n;->ak:I

    if-ne v2, v1, :cond_9

    .line 70
    iget-object v2, p0, Lcom/tkay/expressad/video/module/a/a/n;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v2

    if-eq v2, v5, :cond_6

    .line 71
    iget-object v2, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/video/module/a/a/n;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->F()I

    move-result v3

    invoke-interface {v2, v3}, Lcom/tkay/expressad/video/signal/e;->showEndcard(I)V

    goto :goto_2

    .line 73
    :cond_6
    iget-object v2, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v2

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/e;->showVideoEndCover()V

    goto :goto_2

    .line 77
    :cond_7
    iget-object v2, p0, Lcom/tkay/expressad/video/module/a/a/n;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v2

    if-eq v2, v5, :cond_8

    .line 78
    iget-object v2, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/video/module/a/a/n;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->F()I

    move-result v3

    invoke-interface {v2, v3}, Lcom/tkay/expressad/video/signal/e;->showEndcard(I)V

    goto :goto_2

    .line 80
    :cond_8
    iget-object v2, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v2

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/e;->showVideoEndCover()V

    .line 85
    :cond_9
    :goto_2
    iget-object v2, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v2

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/j;->dismissAllAlert()V

    if-ne p1, v0, :cond_15

    .line 88
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->al:Z

    if-nez v0, :cond_15

    iget v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ak:I

    if-ne v0, v1, :cond_15

    .line 89
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/n;->f()V

    .line 90
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/n;->e()V

    .line 91
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/n;->d()V

    .line 92
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/n;->c()V

    goto/16 :goto_6

    .line 156
    :pswitch_6
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/a/a/n;->al:Z

    .line 157
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSNotifyProxy()Lcom/tkay/expressad/video/signal/g;

    move-result-object v0

    invoke-interface {v0, v4}, Lcom/tkay/expressad/video/signal/g;->a(I)V

    goto/16 :goto_6

    .line 179
    :cond_a
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    .line 180
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v1}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v1

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/j;->getBorderViewWidth()I

    move-result v2

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/j;->getBorderViewHeight()I

    move-result v3

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/j;->getBorderViewRadius()I

    move-result v0

    invoke-interface {v1, v2, v3, v0}, Lcom/tkay/expressad/video/signal/e;->configurationChanged(III)V

    goto/16 :goto_6

    .line 173
    :cond_b
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c;->m()I

    move-result v0

    if-ne v0, v5, :cond_15

    .line 174
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    .line 175
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v1}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v2

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/j;->getBorderViewTop()I

    move-result v3

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/j;->getBorderViewLeft()I

    move-result v4

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/j;->getBorderViewWidth()I

    move-result v5

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/j;->getBorderViewHeight()I

    move-result v6

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/j;->getBorderViewRadius()I

    move-result v7

    invoke-interface/range {v2 .. v7}, Lcom/tkay/expressad/video/signal/e;->showMiniCard(IIIII)V

    goto/16 :goto_6

    .line 184
    :cond_c
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/e;->showAlertWebView()Z

    move-result v0

    if-nez v0, :cond_d

    .line 185
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/j;->showAlertView()V

    goto/16 :goto_6

    .line 187
    :cond_d
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/j;->alertWebViewShowed()V

    goto/16 :goto_6

    :cond_e
    if-eqz p2, :cond_15

    .line 130
    instance-of v0, p2, Ljava/lang/Integer;

    if-eqz v0, :cond_15

    .line 131
    move-object v0, p2

    check-cast v0, Ljava/lang/Integer;

    .line 132
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    if-ne v0, v1, :cond_f

    .line 133
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    goto :goto_3

    .line 135
    :cond_f
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    .line 137
    :goto_3
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v1}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v1

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v2

    invoke-interface {v1, v2, v6}, Lcom/tkay/expressad/video/signal/j;->soundOperate(II)V

    .line 139
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v1}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSNotifyProxy()Lcom/tkay/expressad/video/signal/g;

    move-result-object v1

    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-interface {v1, v7, v0}, Lcom/tkay/expressad/video/signal/g;->a(ILjava/lang/String;)V

    goto/16 :goto_6

    .line 100
    :cond_10
    iget-object v6, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v6}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v6

    invoke-interface {v6}, Lcom/tkay/expressad/video/signal/j;->dismissAllAlert()V

    if-ne p1, v5, :cond_11

    .line 102
    iget-object v6, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v6}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSNotifyProxy()Lcom/tkay/expressad/video/signal/g;

    move-result-object v6

    invoke-interface {v6, v5, v0}, Lcom/tkay/expressad/video/signal/g;->a(ILjava/lang/String;)V

    .line 105
    :cond_11
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    invoke-interface {v0, v3}, Lcom/tkay/expressad/video/signal/j;->videoOperate(I)V

    .line 106
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c;->m()I

    move-result v0

    const/16 v6, 0x10

    if-eq v0, v5, :cond_13

    .line 109
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->F()I

    move-result v0

    if-eq v0, v3, :cond_12

    .line 110
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    invoke-interface {v0, v2}, Lcom/tkay/expressad/video/signal/j;->setVisible(I)V

    goto :goto_4

    .line 112
    :cond_12
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    invoke-interface {v0, v4}, Lcom/tkay/expressad/video/signal/j;->setVisible(I)V

    .line 115
    :goto_4
    iget v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ai:I

    if-ne v0, v5, :cond_13

    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/e;->endCardShowing()Z

    move-result v0

    if-nez v0, :cond_13

    .line 116
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v0

    if-eq v0, v5, :cond_13

    .line 117
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/expressad/video/module/a/a/n;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->F()I

    move-result v2

    invoke-interface {v0, v2}, Lcom/tkay/expressad/video/signal/e;->showEndcard(I)V

    goto :goto_5

    :cond_13
    move p1, v6

    .line 126
    :goto_5
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSNotifyProxy()Lcom/tkay/expressad/video/signal/g;

    move-result-object v0

    invoke-interface {v0, v1}, Lcom/tkay/expressad/video/signal/g;->a(I)V

    goto :goto_6

    .line 40
    :cond_14
    iget-object v2, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object v2

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/e;->endCardShowing()Z

    move-result v2

    if-nez v2, :cond_15

    .line 42
    iget-object v2, p0, Lcom/tkay/expressad/video/module/a/a/n;->ag:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSNotifyProxy()Lcom/tkay/expressad/video/signal/g;

    move-result-object v2

    invoke-interface {v2, v1, v0}, Lcom/tkay/expressad/video/signal/g;->a(ILjava/lang/String;)V

    .line 204
    :cond_15
    :goto_6
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/module/a/a/o;->a(ILjava/lang/Object;)V

    return-void

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
