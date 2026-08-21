.class final Lcom/tkay/expressad/exoplayer/d/b$b;
.super Landroid/os/Handler;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/d/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "b"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/d/b;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/d/b;Landroid/os/Looper;)V
    .locals 0

    .line 468
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/d/b$b;->a:Lcom/tkay/expressad/exoplayer/d/b;

    .line 469
    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 3

    .line 474
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/util/Pair;

    .line 475
    iget-object v1, v0, Landroid/util/Pair;->first:Ljava/lang/Object;

    .line 476
    iget-object v0, v0, Landroid/util/Pair;->second:Ljava/lang/Object;

    .line 477
    iget p1, p1, Landroid/os/Message;->what:I

    if-eqz p1, :cond_1

    const/4 v2, 0x1

    if-eq p1, v2, :cond_0

    goto :goto_0

    .line 482
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/d/b$b;->a:Lcom/tkay/expressad/exoplayer/d/b;

    invoke-static {p1, v1, v0}, Lcom/tkay/expressad/exoplayer/d/b;->b(Lcom/tkay/expressad/exoplayer/d/b;Ljava/lang/Object;Ljava/lang/Object;)V

    :goto_0
    return-void

    .line 479
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/d/b$b;->a:Lcom/tkay/expressad/exoplayer/d/b;

    invoke-static {p1, v1, v0}, Lcom/tkay/expressad/exoplayer/d/b;->a(Lcom/tkay/expressad/exoplayer/d/b;Ljava/lang/Object;Ljava/lang/Object;)V

    return-void
.end method
