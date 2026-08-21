.class final Lcom/tkay/expressad/exoplayer/j/a/m$1;
.super Ljava/lang/Thread;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/exoplayer/j/a/m;-><init>(Ljava/io/File;Lcom/tkay/expressad/exoplayer/j/a/d;Lcom/tkay/expressad/exoplayer/j/a/h;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/os/ConditionVariable;

.field final synthetic b:Lcom/tkay/expressad/exoplayer/j/a/m;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/exoplayer/j/a/m;Ljava/lang/String;Landroid/os/ConditionVariable;)V
    .locals 0

    .line 137
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/a/m$1;->b:Lcom/tkay/expressad/exoplayer/j/a/m;

    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/j/a/m$1;->a:Landroid/os/ConditionVariable;

    invoke-direct {p0, p2}, Ljava/lang/Thread;-><init>(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 140
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/m$1;->b:Lcom/tkay/expressad/exoplayer/j/a/m;

    monitor-enter v0

    .line 141
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/a/m$1;->a:Landroid/os/ConditionVariable;

    invoke-virtual {v1}, Landroid/os/ConditionVariable;->open()V

    .line 142
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/a/m$1;->b:Lcom/tkay/expressad/exoplayer/j/a/m;

    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/j/a/m;->a(Lcom/tkay/expressad/exoplayer/j/a/m;)V

    .line 143
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/a/m$1;->b:Lcom/tkay/expressad/exoplayer/j/a/m;

    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/j/a/m;->b(Lcom/tkay/expressad/exoplayer/j/a/m;)Lcom/tkay/expressad/exoplayer/j/a/d;

    .line 144
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method
