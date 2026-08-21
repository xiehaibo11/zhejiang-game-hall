.class public final Lcom/mbridge/msdk/video/js/a/n;
.super Lcom/mbridge/msdk/video/js/a/g;
.source "JSVideoModule.java"


# instance fields
.field private a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V
    .locals 0

    .line 13
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/g;-><init>()V

    .line 14
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    return-void
.end method


# virtual methods
.method public final alertWebViewShowed()V
    .locals 1

    .line 182
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 183
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->alertWebViewShowed()V

    goto :goto_0

    .line 185
    :cond_0
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/g;->alertWebViewShowed()V

    :goto_0
    return-void
.end method

.method public final closeVideoOperate(II)V
    .locals 1

    .line 51
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/a/g;->closeVideoOperate(II)V

    .line 52
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 53
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->closeVideoOperate(II)V

    :cond_0
    return-void
.end method

.method public final dismissAllAlert()V
    .locals 1

    .line 201
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 202
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->dismissAllAlert()V

    goto :goto_0

    .line 204
    :cond_0
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/g;->dismissAllAlert()V

    :goto_0
    return-void
.end method

.method public final getBorderViewHeight()I
    .locals 1

    .line 128
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 129
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getBorderViewHeight()I

    move-result v0

    return v0

    .line 131
    :cond_0
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/g;->getBorderViewHeight()I

    move-result v0

    return v0
.end method

.method public final getBorderViewLeft()I
    .locals 1

    .line 155
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 156
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getBorderViewLeft()I

    move-result v0

    return v0

    .line 158
    :cond_0
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/g;->getBorderViewLeft()I

    move-result v0

    return v0
.end method

.method public final getBorderViewRadius()I
    .locals 1

    .line 137
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 138
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getBorderViewRadius()I

    move-result v0

    return v0

    .line 140
    :cond_0
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/g;->getBorderViewRadius()I

    move-result v0

    return v0
.end method

.method public final getBorderViewTop()I
    .locals 1

    .line 146
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 147
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getBorderViewTop()I

    move-result v0

    return v0

    .line 149
    :cond_0
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/g;->getBorderViewTop()I

    move-result v0

    return v0
.end method

.method public final getBorderViewWidth()I
    .locals 1

    .line 119
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 120
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getBorderViewWidth()I

    move-result v0

    return v0

    .line 122
    :cond_0
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/g;->getBorderViewWidth()I

    move-result v0

    return v0
.end method

.method public final getCurrentProgress()Ljava/lang/String;
    .locals 1

    .line 75
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 76
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getCurrentProgress()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 78
    :cond_0
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/g;->getCurrentProgress()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final hideAlertView(I)V
    .locals 1

    .line 173
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 174
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->hideAlertView(I)V

    goto :goto_0

    .line 176
    :cond_0
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/a/g;->hideAlertView(I)V

    :goto_0
    return-void
.end method

.method public final isH5Canvas()Z
    .locals 1

    .line 110
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 111
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->isH5Canvas()Z

    move-result v0

    return v0

    .line 113
    :cond_0
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/g;->isH5Canvas()Z

    move-result v0

    return v0
.end method

.method public final progressBarOperate(I)V
    .locals 1

    .line 67
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/a/g;->progressBarOperate(I)V

    .line 68
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 69
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->progressBarOperate(I)V

    :cond_0
    return-void
.end method

.method public final progressOperate(II)V
    .locals 1

    .line 59
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/a/g;->progressOperate(II)V

    .line 60
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 61
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->progressOperate(II)V

    :cond_0
    return-void
.end method

.method public final setCover(Z)V
    .locals 1

    .line 93
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 94
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setCover(Z)V

    goto :goto_0

    .line 96
    :cond_0
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/a/g;->setCover(Z)V

    :goto_0
    return-void
.end method

.method public final setInstallDialogState(Z)V
    .locals 1

    .line 210
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 211
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setInstallDialogState(Z)V

    goto :goto_0

    .line 213
    :cond_0
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/a/g;->setInstallDialogState(Z)V

    :goto_0
    return-void
.end method

.method public final setMiniEndCardState(Z)V
    .locals 1

    .line 219
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 220
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setMiniEndCardState(Z)V

    goto :goto_0

    .line 222
    :cond_0
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/a/g;->setMiniEndCardState(Z)V

    :goto_0
    return-void
.end method

.method public final setScaleFitXY(I)V
    .locals 1

    .line 101
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 102
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setScaleFitXY(I)V

    goto :goto_0

    .line 104
    :cond_0
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/a/g;->setScaleFitXY(I)V

    :goto_0
    return-void
.end method

.method public final setVisible(I)V
    .locals 1

    .line 84
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 85
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setVisible(I)V

    goto :goto_0

    .line 87
    :cond_0
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/a/g;->setVisible(I)V

    :goto_0
    return-void
.end method

.method public final showAlertView()V
    .locals 1

    .line 191
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 192
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->showAlertView()V

    goto :goto_0

    .line 194
    :cond_0
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/g;->showAlertView()V

    :goto_0
    return-void
.end method

.method public final showIVRewardAlertView(Ljava/lang/String;)V
    .locals 1

    .line 164
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 165
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->showIVRewardAlertView(Ljava/lang/String;)V

    goto :goto_0

    .line 167
    :cond_0
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/a/g;->showIVRewardAlertView(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public final showVideoLocation(IIIIIIIII)V
    .locals 11

    .line 19
    invoke-super/range {p0 .. p9}, Lcom/mbridge/msdk/video/js/a/g;->showVideoLocation(IIIIIIIII)V

    move-object v0, p0

    .line 20
    iget-object v1, v0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v1, :cond_0

    move v2, p1

    move v3, p2

    move v4, p3

    move v5, p4

    move/from16 v6, p5

    move/from16 v7, p6

    move/from16 v8, p7

    move/from16 v9, p8

    move/from16 v10, p9

    .line 21
    invoke-virtual/range {v1 .. v10}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->showVideoLocation(IIIIIIIII)V

    :cond_0
    return-void
.end method

.method public final soundOperate(II)V
    .locals 1

    .line 27
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/a/g;->soundOperate(II)V

    .line 28
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 29
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->soundOperate(II)V

    :cond_0
    return-void
.end method

.method public final soundOperate(IILjava/lang/String;)V
    .locals 1

    .line 35
    invoke-super {p0, p1, p2, p3}, Lcom/mbridge/msdk/video/js/a/g;->soundOperate(IILjava/lang/String;)V

    .line 36
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 37
    invoke-virtual {v0, p1, p2, p3}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->soundOperate(IILjava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final videoOperate(I)V
    .locals 1

    .line 43
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/a/g;->videoOperate(I)V

    .line 44
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/n;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    if-eqz v0, :cond_0

    .line 45
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->videoOperate(I)V

    :cond_0
    return-void
.end method
