.class final Lcom/tkay/expressad/exoplayer/d/d$c;
.super Landroid/os/Handler;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/d/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "c"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/d/d;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/d/d;Landroid/os/Looper;)V
    .locals 0

    .line 654
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/d/d$c;->a:Lcom/tkay/expressad/exoplayer/d/d;

    .line 655
    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 4

    .line 660
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, [B

    .line 661
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/d/d$c;->a:Lcom/tkay/expressad/exoplayer/d/d;

    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/d/d;->a(Lcom/tkay/expressad/exoplayer/d/d;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/d/b;

    .line 662
    invoke-virtual {v2, v0}, Lcom/tkay/expressad/exoplayer/d/b;->b([B)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 663
    iget p1, p1, Landroid/os/Message;->what:I

    invoke-virtual {v2, p1}, Lcom/tkay/expressad/exoplayer/d/b;->a(I)V

    :cond_1
    return-void
.end method
