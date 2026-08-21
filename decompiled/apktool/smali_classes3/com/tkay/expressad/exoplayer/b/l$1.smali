.class final Lcom/tkay/expressad/exoplayer/b/l$1;
.super Ljava/lang/Thread;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/exoplayer/b/l;->i()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/media/AudioTrack;

.field final synthetic b:Lcom/tkay/expressad/exoplayer/b/l;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/exoplayer/b/l;Landroid/media/AudioTrack;)V
    .locals 0

    .line 993
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l$1;->b:Lcom/tkay/expressad/exoplayer/b/l;

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/b/l$1;->a:Landroid/media/AudioTrack;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 997
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l$1;->a:Landroid/media/AudioTrack;

    invoke-virtual {v0}, Landroid/media/AudioTrack;->flush()V

    .line 998
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l$1;->a:Landroid/media/AudioTrack;

    invoke-virtual {v0}, Landroid/media/AudioTrack;->release()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1000
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l$1;->b:Lcom/tkay/expressad/exoplayer/b/l;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/b/l;->a(Lcom/tkay/expressad/exoplayer/b/l;)Landroid/os/ConditionVariable;

    move-result-object v0

    invoke-virtual {v0}, Landroid/os/ConditionVariable;->open()V

    return-void

    :catchall_0
    move-exception v0

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/l$1;->b:Lcom/tkay/expressad/exoplayer/b/l;

    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/b/l;->a(Lcom/tkay/expressad/exoplayer/b/l;)Landroid/os/ConditionVariable;

    move-result-object v1

    invoke-virtual {v1}, Landroid/os/ConditionVariable;->open()V

    .line 1001
    throw v0
.end method
