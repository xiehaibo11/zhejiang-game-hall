.class final Lcom/tkay/expressad/exoplayer/l/e$b;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/media/MediaCodec$OnFrameRenderedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/l/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "b"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/l/e;


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/exoplayer/l/e;Landroid/media/MediaCodec;)V
    .locals 0

    .line 1382
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e$b;->a:Lcom/tkay/expressad/exoplayer/l/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 1383
    new-instance p1, Landroid/os/Handler;

    invoke-direct {p1}, Landroid/os/Handler;-><init>()V

    invoke-virtual {p2, p0, p1}, Landroid/media/MediaCodec;->setOnFrameRenderedListener(Landroid/media/MediaCodec$OnFrameRenderedListener;Landroid/os/Handler;)V

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/expressad/exoplayer/l/e;Landroid/media/MediaCodec;B)V
    .locals 0

    .line 1380
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/l/e$b;-><init>(Lcom/tkay/expressad/exoplayer/l/e;Landroid/media/MediaCodec;)V

    return-void
.end method


# virtual methods
.method public final onFrameRendered(Landroid/media/MediaCodec;JJ)V
    .locals 0

    .line 1388
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e$b;->a:Lcom/tkay/expressad/exoplayer/l/e;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/l/e;->r:Lcom/tkay/expressad/exoplayer/l/e$b;

    if-eq p0, p1, :cond_0

    return-void

    .line 1392
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/l/e$b;->a:Lcom/tkay/expressad/exoplayer/l/e;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/l/e;->C()V

    return-void
.end method
