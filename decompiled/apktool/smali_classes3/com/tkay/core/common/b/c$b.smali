.class final Lcom/tkay/core/common/b/c$b;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/common/b/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "b"
.end annotation


# instance fields
.field a:Z

.field final synthetic b:Lcom/tkay/core/common/b/c;

.field private final c:Ljava/util/concurrent/LinkedBlockingQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/LinkedBlockingQueue<",
            "Landroid/os/IBinder;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>(Lcom/tkay/core/common/b/c;)V
    .locals 1

    .line 84
    iput-object p1, p0, Lcom/tkay/core/common/b/c$b;->b:Lcom/tkay/core/common/b/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 p1, 0x0

    .line 85
    iput-boolean p1, p0, Lcom/tkay/core/common/b/c$b;->a:Z

    .line 86
    new-instance p1, Ljava/util/concurrent/LinkedBlockingQueue;

    const/4 v0, 0x1

    invoke-direct {p1, v0}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>(I)V

    iput-object p1, p0, Lcom/tkay/core/common/b/c$b;->c:Ljava/util/concurrent/LinkedBlockingQueue;

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/core/common/b/c;B)V
    .locals 0

    .line 84
    invoke-direct {p0, p1}, Lcom/tkay/core/common/b/c$b;-><init>(Lcom/tkay/core/common/b/c;)V

    return-void
.end method


# virtual methods
.method public final a()Landroid/os/IBinder;
    .locals 1

    .line 101
    iget-boolean v0, p0, Lcom/tkay/core/common/b/c$b;->a:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 104
    iput-boolean v0, p0, Lcom/tkay/core/common/b/c$b;->a:Z

    .line 105
    iget-object v0, p0, Lcom/tkay/core/common/b/c$b;->c:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v0}, Ljava/util/concurrent/LinkedBlockingQueue;->take()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/IBinder;

    return-object v0

    .line 102
    :cond_0
    new-instance v0, Ljava/lang/IllegalStateException;

    invoke-direct {v0}, Ljava/lang/IllegalStateException;-><init>()V

    throw v0
.end method

.method public final onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 0

    .line 91
    :try_start_0
    iget-object p1, p0, Lcom/tkay/core/common/b/c$b;->c:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {p1, p2}, Ljava/util/concurrent/LinkedBlockingQueue;->put(Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public final onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 0

    return-void
.end method
