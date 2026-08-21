.class public Lcom/sigmob/sdk/videoplayer/g$a;
.super Ljava/util/TimerTask;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/videoplayer/g;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/videoplayer/g;


# direct methods
.method public constructor <init>(Lcom/sigmob/sdk/videoplayer/g;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/g$a;->a:Lcom/sigmob/sdk/videoplayer/g;

    invoke-direct {p0}, Ljava/util/TimerTask;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g$a;->a:Lcom/sigmob/sdk/videoplayer/g;

    iget v0, v0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    const/4 v1, 0x4

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g$a;->a:Lcom/sigmob/sdk/videoplayer/g;

    iget v0, v0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    const/4 v1, 0x5

    if-ne v0, v1, :cond_1

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g$a;->a:Lcom/sigmob/sdk/videoplayer/g;

    new-instance v1, Lcom/sigmob/sdk/videoplayer/g$a$1;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/videoplayer/g$a$1;-><init>(Lcom/sigmob/sdk/videoplayer/g$a;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoplayer/g;->post(Ljava/lang/Runnable;)Z

    :cond_1
    return-void
.end method
