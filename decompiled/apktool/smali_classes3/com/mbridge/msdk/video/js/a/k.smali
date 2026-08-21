.class public final Lcom/mbridge/msdk/video/js/a/k;
.super Lcom/mbridge/msdk/video/js/a/d;
.source "JSContainerModule.java"


# instance fields
.field private a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/video/module/MBridgeContainerView;)V
    .locals 0

    .line 17
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/d;-><init>()V

    .line 18
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    return-void
.end method


# virtual methods
.method public final configurationChanged(III)V
    .locals 1

    .line 208
    invoke-super {p0, p1, p2, p3}, Lcom/mbridge/msdk/video/js/a/d;->configurationChanged(III)V

    .line 210
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_0

    .line 211
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v0, p1, p2, p3}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->configurationChanged(III)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 214
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public final endCardShowing()Z
    .locals 1

    .line 137
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_0

    .line 138
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->endCardShowing()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v0

    :catchall_0
    move-exception v0

    .line 141
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 143
    :cond_0
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/d;->endCardShowing()Z

    move-result v0

    return v0
.end method

.method public final hideAlertWebview()V
    .locals 1

    .line 220
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/d;->hideAlertWebview()V

    .line 221
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_0

    .line 222
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->hideAlertWebview()V

    :cond_0
    return-void
.end method

.method public final ivRewardAdsWithoutVideo(Ljava/lang/String;)V
    .locals 1

    .line 228
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/a/d;->ivRewardAdsWithoutVideo(Ljava/lang/String;)V

    .line 229
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_0

    .line 230
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->ivRewardAdsWithoutVideo(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final miniCardShowing()Z
    .locals 1

    .line 149
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_0

    .line 150
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->miniCardShowing()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v0

    :catchall_0
    move-exception v0

    .line 153
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 155
    :cond_0
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/d;->miniCardShowing()Z

    move-result v0

    return v0
.end method

.method public final readyStatus(I)V
    .locals 1

    .line 173
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_0

    .line 174
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->readyStatus(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 177
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 179
    :cond_0
    :goto_0
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/a/d;->readyStatus(I)V

    return-void
.end method

.method public final resizeMiniCard(III)V
    .locals 1

    .line 196
    invoke-super {p0, p1, p2, p3}, Lcom/mbridge/msdk/video/js/a/d;->resizeMiniCard(III)V

    .line 198
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_0

    .line 199
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v0, p1, p2, p3}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->resizeMiniCard(III)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 202
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public final showAlertWebView()Z
    .locals 1

    .line 23
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/d;->showAlertWebView()Z

    .line 24
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_0

    .line 25
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showAlertWebView()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final showEndcard(I)V
    .locals 1

    .line 64
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/a/d;->showEndcard(I)V

    .line 66
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_0

    .line 67
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showEndcard(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 70
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public final showMiniCard(IIIII)V
    .locals 7

    .line 184
    invoke-super/range {p0 .. p5}, Lcom/mbridge/msdk/video/js/a/d;->showMiniCard(IIIII)V

    .line 186
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_0

    .line 187
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    move v2, p1

    move v3, p2

    move v4, p3

    move v5, p4

    move v6, p5

    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showMiniCard(IIIII)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 190
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public final showVideoClickView(I)V
    .locals 1

    .line 32
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/a/d;->showVideoClickView(I)V

    .line 33
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_0

    .line 34
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showVideoClickView(I)V

    :cond_0
    return-void
.end method

.method public final showVideoEndCover()V
    .locals 1

    .line 76
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/d;->showVideoEndCover()V

    .line 78
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_0

    .line 79
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->showVideoEndCover()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 82
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public final toggleCloseBtn(I)V
    .locals 1

    .line 88
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/a/d;->toggleCloseBtn(I)V

    .line 90
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    if-eqz v0, :cond_0

    .line 91
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/k;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->toggleCloseBtn(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 94
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method
