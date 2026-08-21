.class final Lcom/tkay/expressad/exoplayer/k/aa;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/k/c;


# direct methods
.method constructor <init>()V
    .locals 0

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()J
    .locals 2

    .line 31
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    return-wide v0
.end method

.method public final a(Landroid/os/Looper;Landroid/os/Handler$Callback;)Lcom/tkay/expressad/exoplayer/k/k;
    .locals 2

    .line 46
    new-instance v0, Lcom/tkay/expressad/exoplayer/k/ab;

    new-instance v1, Landroid/os/Handler;

    invoke-direct {v1, p1, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;Landroid/os/Handler$Callback;)V

    invoke-direct {v0, v1}, Lcom/tkay/expressad/exoplayer/k/ab;-><init>(Landroid/os/Handler;)V

    return-object v0
.end method

.method public final a(J)V
    .locals 0

    .line 41
    invoke-static {p1, p2}, Landroid/os/SystemClock;->sleep(J)V

    return-void
.end method

.method public final b()J
    .locals 2

    .line 36
    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v0

    return-wide v0
.end method
