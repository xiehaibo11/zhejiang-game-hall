.class Lcom/sigmob/sdk/videoplayer/k$13;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoplayer/k;->onBufferingUpdate(Landroid/media/MediaPlayer;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Lcom/sigmob/sdk/videoplayer/k;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoplayer/k;I)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/k$13;->b:Lcom/sigmob/sdk/videoplayer/k;

    iput p2, p0, Lcom/sigmob/sdk/videoplayer/k$13;->a:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k$13;->b:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/k;->e:Lcom/sigmob/sdk/videoplayer/i;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k$13;->b:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/k;->e:Lcom/sigmob/sdk/videoplayer/i;

    iget v1, p0, Lcom/sigmob/sdk/videoplayer/k$13;->a:I

    invoke-interface {v0, v1}, Lcom/sigmob/sdk/videoplayer/i;->setBufferProgress(I)V

    return-void
.end method
