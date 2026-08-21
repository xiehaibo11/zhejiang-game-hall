.class Lcom/sigmob/sdk/videoplayer/k$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoplayer/k;->onError(Landroid/media/MediaPlayer;II)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:I

.field final synthetic c:Lcom/sigmob/sdk/videoplayer/k;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoplayer/k;II)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/k$3;->c:Lcom/sigmob/sdk/videoplayer/k;

    iput p2, p0, Lcom/sigmob/sdk/videoplayer/k$3;->a:I

    iput p3, p0, Lcom/sigmob/sdk/videoplayer/k$3;->b:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k$3;->c:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/k;->e:Lcom/sigmob/sdk/videoplayer/i;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k$3;->c:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/k;->e:Lcom/sigmob/sdk/videoplayer/i;

    iget v1, p0, Lcom/sigmob/sdk/videoplayer/k$3;->a:I

    iget v2, p0, Lcom/sigmob/sdk/videoplayer/k$3;->b:I

    invoke-interface {v0, v1, v2}, Lcom/sigmob/sdk/videoplayer/i;->a(II)V

    return-void
.end method
