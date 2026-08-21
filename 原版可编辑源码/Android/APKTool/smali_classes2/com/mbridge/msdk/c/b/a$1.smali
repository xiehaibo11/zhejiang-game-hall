.class final Lcom/mbridge/msdk/c/b/a$1;
.super Landroid/os/Handler;
.source "ActiveAppUtil.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/c/b/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/c/b/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/c/b/a;)V
    .locals 0

    .line 169
    iput-object p1, p0, Lcom/mbridge/msdk/c/b/a$1;->a:Lcom/mbridge/msdk/c/b/a;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 5

    .line 172
    iget-object v0, p0, Lcom/mbridge/msdk/c/b/a$1;->a:Lcom/mbridge/msdk/c/b/a;

    monitor-enter v0

    .line 173
    :try_start_0
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v1

    .line 174
    iget v2, p1, Landroid/os/Message;->what:I

    const/4 v3, 0x1

    if-eq v2, v3, :cond_1

    const/4 v4, 0x2

    if-eq v2, v4, :cond_0

    goto :goto_0

    .line 176
    :cond_0
    iput v3, v1, Landroid/os/Message;->what:I

    .line 177
    iget v2, p1, Landroid/os/Message;->arg2:I

    iput v2, v1, Landroid/os/Message;->arg1:I

    .line 178
    iget p1, p1, Landroid/os/Message;->arg1:I

    int-to-long v2, p1

    invoke-virtual {p0, v1, v2, v3}, Lcom/mbridge/msdk/c/b/a$1;->sendMessageDelayed(Landroid/os/Message;J)Z

    goto :goto_0

    .line 182
    :cond_1
    iget-object v2, p0, Lcom/mbridge/msdk/c/b/a$1;->a:Lcom/mbridge/msdk/c/b/a;

    invoke-static {v2}, Lcom/mbridge/msdk/c/b/a;->a(Lcom/mbridge/msdk/c/b/a;)V

    .line 184
    iput v3, v1, Landroid/os/Message;->what:I

    .line 185
    iget v2, p1, Landroid/os/Message;->arg1:I

    iput v2, v1, Landroid/os/Message;->arg1:I

    .line 186
    iget p1, p1, Landroid/os/Message;->arg1:I

    int-to-long v2, p1

    invoke-virtual {p0, v1, v2, v3}, Lcom/mbridge/msdk/c/b/a$1;->sendMessageDelayed(Landroid/os/Message;J)Z

    .line 189
    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method
