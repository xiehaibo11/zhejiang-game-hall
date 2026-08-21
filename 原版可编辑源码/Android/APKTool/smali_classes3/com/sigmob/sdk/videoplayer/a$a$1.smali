.class Lcom/sigmob/sdk/videoplayer/a$a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoplayer/a$a;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/videoplayer/a$a;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoplayer/a$a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/a$a$1;->a:Lcom/sigmob/sdk/videoplayer/a$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a$a$1;->a:Lcom/sigmob/sdk/videoplayer/a$a;

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/a$a;->a:Lcom/sigmob/sdk/videoplayer/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/a;->getCurrentPositionWhenPlaying()J

    move-result-wide v0

    iget-object v2, p0, Lcom/sigmob/sdk/videoplayer/a$a$1;->a:Lcom/sigmob/sdk/videoplayer/a$a;

    iget-object v2, v2, Lcom/sigmob/sdk/videoplayer/a$a;->a:Lcom/sigmob/sdk/videoplayer/a;

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoplayer/a;->getDuration()J

    move-result-wide v2

    iget-object v4, p0, Lcom/sigmob/sdk/videoplayer/a$a$1;->a:Lcom/sigmob/sdk/videoplayer/a$a;

    iget-object v4, v4, Lcom/sigmob/sdk/videoplayer/a$a;->a:Lcom/sigmob/sdk/videoplayer/a;

    invoke-static {v4}, Lcom/sigmob/sdk/videoplayer/a;->b(Lcom/sigmob/sdk/videoplayer/a;)Lcom/sigmob/sdk/videoplayer/l;

    move-result-object v4

    if-eqz v4, :cond_0

    iget-object v4, p0, Lcom/sigmob/sdk/videoplayer/a$a$1;->a:Lcom/sigmob/sdk/videoplayer/a$a;

    iget-object v4, v4, Lcom/sigmob/sdk/videoplayer/a$a;->a:Lcom/sigmob/sdk/videoplayer/a;

    invoke-static {v4}, Lcom/sigmob/sdk/videoplayer/a;->b(Lcom/sigmob/sdk/videoplayer/a;)Lcom/sigmob/sdk/videoplayer/l;

    move-result-object v4

    invoke-interface {v4, v0, v1, v2, v3}, Lcom/sigmob/sdk/videoplayer/l;->a(JJ)V

    :cond_0
    return-void
.end method
