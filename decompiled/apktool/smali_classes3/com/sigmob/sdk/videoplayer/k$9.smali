.class Lcom/sigmob/sdk/videoplayer/k$9;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoplayer/k;->f()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/media/MediaPlayer;

.field final synthetic b:Landroid/os/HandlerThread;

.field final synthetic c:Lcom/sigmob/sdk/videoplayer/k;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoplayer/k;Landroid/media/MediaPlayer;Landroid/os/HandlerThread;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/k$9;->c:Lcom/sigmob/sdk/videoplayer/k;

    iput-object p2, p0, Lcom/sigmob/sdk/videoplayer/k$9;->a:Landroid/media/MediaPlayer;

    iput-object p3, p0, Lcom/sigmob/sdk/videoplayer/k$9;->b:Landroid/os/HandlerThread;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k$9;->a:Landroid/media/MediaPlayer;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/media/MediaPlayer;->setSurface(Landroid/view/Surface;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k$9;->a:Landroid/media/MediaPlayer;

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->release()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k$9;->b:Landroid/os/HandlerThread;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->quit()Z

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k$9;->c:Lcom/sigmob/sdk/videoplayer/k;

    iput-object v1, v0, Lcom/sigmob/sdk/videoplayer/k;->c:Landroid/os/Handler;

    return-void
.end method
