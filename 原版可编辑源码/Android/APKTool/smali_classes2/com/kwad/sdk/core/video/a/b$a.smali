.class final Lcom/kwad/sdk/core/video/a/b$a;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/media/MediaPlayer$OnBufferingUpdateListener;
.implements Landroid/media/MediaPlayer$OnCompletionListener;
.implements Landroid/media/MediaPlayer$OnErrorListener;
.implements Landroid/media/MediaPlayer$OnInfoListener;
.implements Landroid/media/MediaPlayer$OnPreparedListener;
.implements Landroid/media/MediaPlayer$OnSeekCompleteListener;
.implements Landroid/media/MediaPlayer$OnTimedTextListener;
.implements Landroid/media/MediaPlayer$OnVideoSizeChangedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/video/a/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# instance fields
.field final mWeakMediaPlayer:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/kwad/sdk/core/video/a/b;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/video/a/b;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/kwad/sdk/core/video/a/b$a;->mWeakMediaPlayer:Ljava/lang/ref/WeakReference;

    return-void
.end method


# virtual methods
.method public final onBufferingUpdate(Landroid/media/MediaPlayer;I)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/sdk/core/video/a/b$a;->mWeakMediaPlayer:Ljava/lang/ref/WeakReference;

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/video/a/b;

    if-eqz p1, :cond_0

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/video/a/b;->notifyOnBufferingUpdate(I)V

    :cond_0
    return-void
.end method

.method public final onCompletion(Landroid/media/MediaPlayer;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/sdk/core/video/a/b$a;->mWeakMediaPlayer:Ljava/lang/ref/WeakReference;

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/video/a/b;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/kwad/sdk/core/video/a/b;->notifyOnCompletion()V

    :cond_0
    return-void
.end method

.method public final onError(Landroid/media/MediaPlayer;II)Z
    .locals 0

    iget-object p1, p0, Lcom/kwad/sdk/core/video/a/b$a;->mWeakMediaPlayer:Ljava/lang/ref/WeakReference;

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/video/a/b;

    if-eqz p1, :cond_0

    invoke-virtual {p1, p2, p3}, Lcom/kwad/sdk/core/video/a/b;->notifyOnError(II)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final onInfo(Landroid/media/MediaPlayer;II)Z
    .locals 0

    iget-object p1, p0, Lcom/kwad/sdk/core/video/a/b$a;->mWeakMediaPlayer:Ljava/lang/ref/WeakReference;

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/video/a/b;

    if-eqz p1, :cond_0

    invoke-virtual {p1, p2, p3}, Lcom/kwad/sdk/core/video/a/b;->notifyOnInfo(II)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final onPrepared(Landroid/media/MediaPlayer;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/sdk/core/video/a/b$a;->mWeakMediaPlayer:Ljava/lang/ref/WeakReference;

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/video/a/b;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/kwad/sdk/core/video/a/b;->notifyOnPrepared()V

    :cond_0
    return-void
.end method

.method public final onSeekComplete(Landroid/media/MediaPlayer;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/sdk/core/video/a/b$a;->mWeakMediaPlayer:Ljava/lang/ref/WeakReference;

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/video/a/b;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/kwad/sdk/core/video/a/b;->notifyOnSeekComplete()V

    :cond_0
    return-void
.end method

.method public final onTimedText(Landroid/media/MediaPlayer;Landroid/media/TimedText;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/sdk/core/video/a/b$a;->mWeakMediaPlayer:Ljava/lang/ref/WeakReference;

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/video/a/b;

    if-eqz p1, :cond_0

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/video/a/b;->b(Landroid/media/TimedText;)V

    :cond_0
    return-void
.end method

.method public final onVideoSizeChanged(Landroid/media/MediaPlayer;II)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/sdk/core/video/a/b$a;->mWeakMediaPlayer:Ljava/lang/ref/WeakReference;

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/video/a/b;

    if-eqz p1, :cond_0

    invoke-virtual {p1, p2, p3}, Lcom/kwad/sdk/core/video/a/b;->u(II)V

    :cond_0
    return-void
.end method
