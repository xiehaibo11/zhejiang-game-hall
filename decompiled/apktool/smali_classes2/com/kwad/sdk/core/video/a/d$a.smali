.class final Lcom/kwad/sdk/core/video/a/d$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwai/video/ksvodplayerkit/IKSVodPlayer$OnBufferingUpdateListener;
.implements Lcom/kwai/video/ksvodplayerkit/IKSVodPlayer$OnErrorListener;
.implements Lcom/kwai/video/ksvodplayerkit/IKSVodPlayer$OnEventListener;
.implements Lcom/kwai/video/ksvodplayerkit/IKSVodPlayer$OnPreparedListener;
.implements Lcom/kwai/video/ksvodplayerkit/IKSVodPlayer$OnVideoSizeChangedListener;
.implements Lcom/kwai/video/ksvodplayerkit/IKSVodPlayer$OnVodPlayerReleaseListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/video/a/d;
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
            "Lcom/kwad/sdk/core/video/a/d;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/video/a/d;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/kwad/sdk/core/video/a/d$a;->mWeakMediaPlayer:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method private Dr()Lcom/kwad/sdk/core/video/a/d;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/video/a/d$a;->mWeakMediaPlayer:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/video/a/d;

    return-object v0
.end method


# virtual methods
.method public final onBufferingUpdate(I)V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/video/a/d$a;->Dr()Lcom/kwad/sdk/core/video/a/d;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/video/a/d;->notifyOnBufferingUpdate(I)V

    :cond_0
    return-void
.end method

.method public final onError(II)V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/sdk/core/video/a/d$a;->Dr()Lcom/kwad/sdk/core/video/a/d;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/video/a/d;->a(Lcom/kwad/sdk/core/video/a/d;Z)Z

    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/core/video/a/d;->notifyOnError(II)Z

    :cond_0
    return-void
.end method

.method public final onEvent(II)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onEvent, what: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "KwaiMediaPlayer"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/kwad/sdk/core/video/a/d$a;->Dr()Lcom/kwad/sdk/core/video/a/d;

    move-result-object v0

    if-eqz v0, :cond_3

    const/16 v1, 0x2774

    if-ne p1, v1, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/video/a/d;->notifyOnSeekComplete()V

    return-void

    :cond_0
    const/16 v1, 0x2775

    if-ne p1, v1, :cond_1

    invoke-virtual {v0}, Lcom/kwad/sdk/core/video/a/d;->notifyOnCompletion()V

    return-void

    :cond_1
    const/16 v1, 0x27e1

    if-ne p1, v1, :cond_2

    invoke-static {v0}, Lcom/kwad/sdk/core/video/a/d;->a(Lcom/kwad/sdk/core/video/a/d;)V

    :cond_2
    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/core/video/a/d;->notifyOnInfo(II)Z

    :cond_3
    return-void
.end method

.method public final onPlayerRelease()V
    .locals 2

    const-string v0, "KwaiMediaPlayer"

    const-string v1, "onPlayerRelease"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onPrepared()V
    .locals 2

    const-string v0, "KwaiMediaPlayer"

    const-string v1, "onPrepared"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/kwad/sdk/core/video/a/d$a;->Dr()Lcom/kwad/sdk/core/video/a/d;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/video/a/d;->notifyOnPrepared()V

    :cond_0
    return-void
.end method

.method public final onVideoSizeChanged(IIII)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onVideoSizeChanged width: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", height: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", sarNum:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", sarDen:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "KwaiMediaPlayer"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/kwad/sdk/core/video/a/d$a;->Dr()Lcom/kwad/sdk/core/video/a/d;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/core/video/a/d;->u(II)V

    invoke-static {v0, p3}, Lcom/kwad/sdk/core/video/a/d;->a(Lcom/kwad/sdk/core/video/a/d;I)I

    invoke-static {v0, p4}, Lcom/kwad/sdk/core/video/a/d;->b(Lcom/kwad/sdk/core/video/a/d;I)I

    :cond_0
    return-void
.end method
