.class Lcom/sigmob/sdk/videoplayer/g$a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoplayer/g$a;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/videoplayer/g$a;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoplayer/g$a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/g$a$1;->a:Lcom/sigmob/sdk/videoplayer/g$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 9

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g$a$1;->a:Lcom/sigmob/sdk/videoplayer/g$a;

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/g$a;->a:Lcom/sigmob/sdk/videoplayer/g;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->getCurrentPositionWhenPlaying()J

    move-result-wide v3

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g$a$1;->a:Lcom/sigmob/sdk/videoplayer/g$a;

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/g$a;->a:Lcom/sigmob/sdk/videoplayer/g;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->getDuration()J

    move-result-wide v5

    const-wide/16 v0, 0x64

    mul-long/2addr v0, v3

    const-wide/16 v7, 0x0

    cmp-long v2, v5, v7

    if-nez v2, :cond_0

    const-wide/16 v7, 0x1

    goto :goto_0

    :cond_0
    move-wide v7, v5

    :goto_0
    div-long/2addr v0, v7

    long-to-int v2, v0

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g$a$1;->a:Lcom/sigmob/sdk/videoplayer/g$a;

    iget-object v1, v0, Lcom/sigmob/sdk/videoplayer/g$a;->a:Lcom/sigmob/sdk/videoplayer/g;

    invoke-virtual/range {v1 .. v6}, Lcom/sigmob/sdk/videoplayer/g;->a(IJJ)V

    return-void
.end method
