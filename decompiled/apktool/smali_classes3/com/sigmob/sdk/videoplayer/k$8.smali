.class Lcom/sigmob/sdk/videoplayer/k$8;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoplayer/k;->a(J)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:J

.field final synthetic b:Lcom/sigmob/sdk/videoplayer/k;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoplayer/k;J)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/k$8;->b:Lcom/sigmob/sdk/videoplayer/k;

    iput-wide p2, p0, Lcom/sigmob/sdk/videoplayer/k$8;->a:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k$8;->b:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k$8;->b:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    iget-wide v1, p0, Lcom/sigmob/sdk/videoplayer/k$8;->a:J

    long-to-int v1, v1

    invoke-virtual {v0, v1}, Landroid/media/MediaPlayer;->seekTo(I)V
    :try_end_0
    .catch Ljava/lang/IllegalStateException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/IllegalStateException;->printStackTrace()V

    :goto_0
    return-void
.end method
