.class final Lcom/tkay/expressad/exoplayer/h/i$d;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/h/i;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "d"
.end annotation


# instance fields
.field public final a:Landroid/os/Handler;

.field public final b:Ljava/lang/Runnable;


# direct methods
.method public constructor <init>(Ljava/lang/Runnable;)V
    .locals 1

    .line 700
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 701
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i$d;->b:Ljava/lang/Runnable;

    .line 702
    new-instance p1, Landroid/os/Handler;

    .line 703
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    goto :goto_0

    :cond_0
    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    :goto_0
    invoke-direct {p1, v0}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/i$d;->a:Landroid/os/Handler;

    return-void
.end method

.method private a()V
    .locals 2

    .line 707
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i$d;->a:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/i$d;->b:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method
