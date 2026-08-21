.class public final Lcom/tkay/expressad/video/signal/a/k;
.super Lcom/tkay/expressad/video/signal/a/d;


# instance fields
.field private k:Lcom/tkay/expressad/video/module/TkayContainerView;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/video/module/TkayContainerView;)V
    .locals 0

    .line 12
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/a/d;-><init>()V

    .line 13
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    return-void
.end method


# virtual methods
.method public final configurationChanged(III)V
    .locals 1

    .line 191
    invoke-super {p0, p1, p2, p3}, Lcom/tkay/expressad/video/signal/a/d;->configurationChanged(III)V

    .line 193
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 194
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0, p1, p2, p3}, Lcom/tkay/expressad/video/module/TkayContainerView;->configurationChanged(III)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 197
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final endCardShowing()Z
    .locals 1

    .line 120
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 121
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->endCardShowing()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v0

    :catchall_0
    move-exception v0

    .line 124
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 126
    :cond_0
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/a/d;->endCardShowing()Z

    move-result v0

    return v0
.end method

.method public final hideAlertWebview()V
    .locals 1

    .line 203
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/a/d;->hideAlertWebview()V

    .line 204
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 205
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->hideAlertWebview()V

    :cond_0
    return-void
.end method

.method public final install(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    .line 83
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/a/d;->install(Lcom/tkay/expressad/foundation/d/c;)V

    .line 85
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 86
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->install(Lcom/tkay/expressad/foundation/d/c;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 89
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final ivRewardAdsWithoutVideo(Ljava/lang/String;)V
    .locals 1

    .line 211
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/a/d;->ivRewardAdsWithoutVideo(Ljava/lang/String;)V

    .line 212
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 213
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->ivRewardAdsWithoutVideo(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final miniCardLoaded()Z
    .locals 1

    .line 144
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 145
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->miniCardLoaded()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v0

    :catchall_0
    move-exception v0

    .line 148
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 150
    :cond_0
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/a/d;->miniCardLoaded()Z

    move-result v0

    return v0
.end method

.method public final miniCardShowing()Z
    .locals 1

    .line 132
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 133
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->miniCardShowing()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v0

    :catchall_0
    move-exception v0

    .line 136
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 138
    :cond_0
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/a/d;->miniCardShowing()Z

    move-result v0

    return v0
.end method

.method public final orientation(Landroid/content/res/Configuration;)V
    .locals 1

    .line 107
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/a/d;->orientation(Landroid/content/res/Configuration;)V

    .line 109
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 110
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->orientation(Landroid/content/res/Configuration;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 113
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V
    .locals 1

    .line 35
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/a/d;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    .line 37
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 38
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 41
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final readyStatus(I)V
    .locals 1

    .line 156
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 157
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->readyStatus(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 160
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 162
    :cond_0
    :goto_0
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/a/d;->readyStatus(I)V

    return-void
.end method

.method public final resizeMiniCard(III)V
    .locals 1

    .line 179
    invoke-super {p0, p1, p2, p3}, Lcom/tkay/expressad/video/signal/a/d;->resizeMiniCard(III)V

    .line 181
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 182
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0, p1, p2, p3}, Lcom/tkay/expressad/video/module/TkayContainerView;->resizeMiniCard(III)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 185
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final showAlertWebView()Z
    .locals 1

    .line 18
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/a/d;->showAlertWebView()Z

    .line 19
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 20
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->showAlertWebView()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final showEndcard(I)V
    .locals 1

    .line 59
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/a/d;->showEndcard(I)V

    .line 61
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 62
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->showEndcard(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 65
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final showMiniCard(IIIII)V
    .locals 7

    .line 167
    invoke-super/range {p0 .. p5}, Lcom/tkay/expressad/video/signal/a/d;->showMiniCard(IIIII)V

    .line 169
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 170
    iget-object v1, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    move v2, p1

    move v3, p2

    move v4, p3

    move v5, p4

    move v6, p5

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/expressad/video/module/TkayContainerView;->showMiniCard(IIIII)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 173
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final showPlayableView()V
    .locals 1

    .line 47
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/a/d;->showPlayableView()V

    .line 49
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 50
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->showPlayableView()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception v0

    .line 53
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final showVideoClickView(I)V
    .locals 1

    .line 27
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/a/d;->showVideoClickView(I)V

    .line 28
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 29
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->showVideoClickView(I)V

    :cond_0
    return-void
.end method

.method public final toggleCloseBtn(I)V
    .locals 1

    .line 71
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/a/d;->toggleCloseBtn(I)V

    .line 73
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 74
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->toggleCloseBtn(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 77
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final webviewshow()V
    .locals 1

    .line 95
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/a/d;->webviewshow()V

    .line 97
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 98
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/k;->k:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->webviewshow()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception v0

    .line 101
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method
