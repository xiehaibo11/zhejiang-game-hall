.class public Lcom/sigmob/sdk/videoplayer/a$a;
.super Ljava/util/TimerTask;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/videoplayer/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/videoplayer/a;


# direct methods
.method public constructor <init>(Lcom/sigmob/sdk/videoplayer/a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/a$a;->a:Lcom/sigmob/sdk/videoplayer/a;

    invoke-direct {p0}, Ljava/util/TimerTask;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a$a;->a:Lcom/sigmob/sdk/videoplayer/a;

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    sget-object v1, Lcom/sigmob/sdk/videoplayer/e;->h:Lcom/sigmob/sdk/videoplayer/e;

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a$a;->a:Lcom/sigmob/sdk/videoplayer/a;

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/a;->e:Lcom/sigmob/sdk/videoplayer/e;

    sget-object v1, Lcom/sigmob/sdk/videoplayer/e;->i:Lcom/sigmob/sdk/videoplayer/e;

    if-ne v0, v1, :cond_1

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/a$a;->a:Lcom/sigmob/sdk/videoplayer/a;

    new-instance v1, Lcom/sigmob/sdk/videoplayer/a$a$1;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/videoplayer/a$a$1;-><init>(Lcom/sigmob/sdk/videoplayer/a$a;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoplayer/a;->post(Ljava/lang/Runnable;)Z

    :cond_1
    return-void
.end method
