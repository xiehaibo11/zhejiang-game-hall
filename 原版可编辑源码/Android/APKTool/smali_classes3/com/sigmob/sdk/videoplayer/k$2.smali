.class Lcom/sigmob/sdk/videoplayer/k$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoplayer/k;->onSeekComplete(Landroid/media/MediaPlayer;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/videoplayer/k;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoplayer/k;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/k$2;->a:Lcom/sigmob/sdk/videoplayer/k;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k$2;->a:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/k;->e:Lcom/sigmob/sdk/videoplayer/i;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k$2;->a:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/k;->e:Lcom/sigmob/sdk/videoplayer/i;

    invoke-interface {v0}, Lcom/sigmob/sdk/videoplayer/i;->p()V

    return-void
.end method
