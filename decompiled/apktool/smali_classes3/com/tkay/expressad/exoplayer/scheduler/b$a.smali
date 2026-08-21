.class final Lcom/tkay/expressad/exoplayer/scheduler/b$a;
.super Landroid/net/ConnectivityManager$NetworkCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/scheduler/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/scheduler/b;


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/exoplayer/scheduler/b;)V
    .locals 0

    .line 198
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/scheduler/b$a;->a:Lcom/tkay/expressad/exoplayer/scheduler/b;

    invoke-direct {p0}, Landroid/net/ConnectivityManager$NetworkCallback;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/expressad/exoplayer/scheduler/b;B)V
    .locals 0

    .line 198
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/scheduler/b$a;-><init>(Lcom/tkay/expressad/exoplayer/scheduler/b;)V

    return-void
.end method


# virtual methods
.method public final onAvailable(Landroid/net/Network;)V
    .locals 1

    .line 201
    invoke-super {p0, p1}, Landroid/net/ConnectivityManager$NetworkCallback;->onAvailable(Landroid/net/Network;)V

    .line 202
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/scheduler/b$a;->a:Lcom/tkay/expressad/exoplayer/scheduler/b;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v0, " NetworkCallback.onAvailable"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 203
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/scheduler/b$a;->a:Lcom/tkay/expressad/exoplayer/scheduler/b;

    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/scheduler/b;->a(Lcom/tkay/expressad/exoplayer/scheduler/b;)V

    return-void
.end method

.method public final onLost(Landroid/net/Network;)V
    .locals 1

    .line 208
    invoke-super {p0, p1}, Landroid/net/ConnectivityManager$NetworkCallback;->onLost(Landroid/net/Network;)V

    .line 209
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/scheduler/b$a;->a:Lcom/tkay/expressad/exoplayer/scheduler/b;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v0, " NetworkCallback.onLost"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 210
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/scheduler/b$a;->a:Lcom/tkay/expressad/exoplayer/scheduler/b;

    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/scheduler/b;->a(Lcom/tkay/expressad/exoplayer/scheduler/b;)V

    return-void
.end method
