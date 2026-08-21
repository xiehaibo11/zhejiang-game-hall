.class final Lcom/tkay/expressad/exoplayer/b/l$2;
.super Ljava/lang/Thread;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/exoplayer/b/l;->p()V
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

    .line 1032
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l$2;->b:Lcom/tkay/expressad/exoplayer/b/l;

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/b/l$2;->a:Landroid/media/AudioTrack;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 1035
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/l$2;->a:Landroid/media/AudioTrack;

    invoke-virtual {v0}, Landroid/media/AudioTrack;->release()V

    return-void
.end method
