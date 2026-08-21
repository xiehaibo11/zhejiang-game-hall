.class public Lcom/sigmob/sdk/base/views/c;
.super Landroid/widget/RelativeLayout;

# interfaces
.implements Landroid/media/MediaPlayer$OnBufferingUpdateListener;
.implements Landroid/view/SurfaceHolder$Callback;


# instance fields
.field a:Landroid/view/SurfaceView;

.field private b:Landroid/media/MediaPlayer;

.field private c:Landroid/view/SurfaceHolder;

.field private d:Ljava/lang/String;

.field private e:I

.field private f:I

.field private g:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    const-string v0, ""

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/c;->d:Ljava/lang/String;

    new-instance v0, Landroid/view/SurfaceView;

    invoke-direct {v0, p1}, Landroid/view/SurfaceView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/c;->a:Landroid/view/SurfaceView;

    new-instance p1, Landroid/view/ViewGroup$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {p1, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v0, p1}, Lcom/sigmob/sdk/base/views/c;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/c;->a:Landroid/view/SurfaceView;

    invoke-virtual {p1}, Landroid/view/SurfaceView;->getHolder()Landroid/view/SurfaceHolder;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/c;->c:Landroid/view/SurfaceHolder;

    invoke-interface {p1, p0}, Landroid/view/SurfaceHolder;->addCallback(Landroid/view/SurfaceHolder$Callback;)V

    new-instance p1, Landroid/media/MediaPlayer;

    invoke-direct {p1}, Landroid/media/MediaPlayer;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/media/MediaPlayer;->setLooping(Z)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    invoke-virtual {p1, p0}, Landroid/media/MediaPlayer;->setOnBufferingUpdateListener(Landroid/media/MediaPlayer$OnBufferingUpdateListener;)V

    return-void
.end method

.method private g()V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->reset()V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/c;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/media/MediaPlayer;->setDataSource(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->prepareAsync()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method


# virtual methods
.method public a()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->isPlaying()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->pause()V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->getCurrentPosition()I

    move-result v0

    iput v0, p0, Lcom/sigmob/sdk/base/views/c;->g:I

    :cond_0
    return-void
.end method

.method public a(I)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Landroid/media/MediaPlayer;->seekTo(I)V

    :cond_0
    return-void
.end method

.method public a(II)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/base/views/c;->e:I

    iput p2, p0, Lcom/sigmob/sdk/base/views/c;->f:I

    return-void
.end method

.method public a(Z)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    if-eqz v0, :cond_0

    xor-int/lit8 p1, p1, 0x1

    int-to-float p1, p1

    invoke-virtual {v0, p1, p1}, Landroid/media/MediaPlayer;->setVolume(FF)V

    :cond_0
    return-void
.end method

.method public b()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    if-eqz v0, :cond_0

    iget v1, p0, Lcom/sigmob/sdk/base/views/c;->g:I

    invoke-virtual {v0, v1}, Landroid/media/MediaPlayer;->seekTo(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->start()V

    :cond_0
    return-void
.end method

.method public c()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->stop()V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->reset()V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->release()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    :cond_0
    return-void
.end method

.method public d()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->start()V

    :cond_0
    return-void
.end method

.method public e()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->stop()V

    :cond_0
    return-void
.end method

.method public f()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->pause()V

    :cond_0
    return-void
.end method

.method public onBufferingUpdate(Landroid/media/MediaPlayer;I)V
    .locals 0

    return-void
.end method

.method protected onMeasure(II)V
    .locals 4

    const/4 v0, 0x0

    invoke-static {v0, p1}, Lcom/sigmob/sdk/base/views/c;->getDefaultSize(II)I

    move-result v1

    invoke-static {v0, p2}, Lcom/sigmob/sdk/base/views/c;->getDefaultSize(II)I

    move-result v0

    iget v2, p0, Lcom/sigmob/sdk/base/views/c;->f:I

    iget v3, p0, Lcom/sigmob/sdk/base/views/c;->e:I

    if-le v0, v1, :cond_1

    if-le v2, v3, :cond_0

    goto :goto_0

    :cond_0
    int-to-float v0, v2

    int-to-float v2, v3

    div-float/2addr v0, v2

    int-to-float v2, v1

    mul-float/2addr v2, v0

    float-to-int v0, v2

    goto :goto_0

    :cond_1
    if-le v2, v3, :cond_2

    int-to-float v1, v3

    int-to-float v2, v2

    div-float/2addr v1, v2

    int-to-float v2, v0

    mul-float/2addr v2, v1

    float-to-int v1, v2

    :cond_2
    :goto_0
    iget v2, p0, Lcom/sigmob/sdk/base/views/c;->f:I

    iget v3, p0, Lcom/sigmob/sdk/base/views/c;->e:I

    if-ne v2, v3, :cond_4

    const/4 v0, -0x1

    if-ne v2, v0, :cond_3

    invoke-static {p1}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result p1

    invoke-static {p2}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result p2

    invoke-virtual {p0, p1, p2}, Lcom/sigmob/sdk/base/views/c;->setMeasuredDimension(II)V

    goto :goto_1

    :cond_3
    invoke-super {p0, p1, p2}, Landroid/widget/RelativeLayout;->onMeasure(II)V

    goto :goto_1

    :cond_4
    invoke-virtual {p0, v1, v0}, Lcom/sigmob/sdk/base/views/c;->setMeasuredDimension(II)V

    :goto_1
    return-void
.end method

.method public setOnPreparedListener(Landroid/media/MediaPlayer$OnPreparedListener;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    invoke-virtual {v0, p1}, Landroid/media/MediaPlayer;->setOnPreparedListener(Landroid/media/MediaPlayer$OnPreparedListener;)V

    return-void
.end method

.method public setOnSeekCompleteListener(Landroid/media/MediaPlayer$OnSeekCompleteListener;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    invoke-virtual {v0, p1}, Landroid/media/MediaPlayer;->setOnSeekCompleteListener(Landroid/media/MediaPlayer$OnSeekCompleteListener;)V

    return-void
.end method

.method public setVideoPath(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/c;->d:Ljava/lang/String;

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/c;->g()V

    return-void
.end method

.method public surfaceChanged(Landroid/view/SurfaceHolder;III)V
    .locals 0

    return-void
.end method

.method public surfaceCreated(Landroid/view/SurfaceHolder;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    invoke-virtual {v0, p1}, Landroid/media/MediaPlayer;->setDisplay(Landroid/view/SurfaceHolder;)V

    return-void
.end method

.method public surfaceDestroyed(Landroid/view/SurfaceHolder;)V
    .locals 0

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Landroid/media/MediaPlayer;->isPlaying()Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    invoke-virtual {p1}, Landroid/media/MediaPlayer;->stop()V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/c;->b:Landroid/media/MediaPlayer;

    invoke-virtual {p1}, Landroid/media/MediaPlayer;->release()V

    :cond_0
    return-void
.end method
