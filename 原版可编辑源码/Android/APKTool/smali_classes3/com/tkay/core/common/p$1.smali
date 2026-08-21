.class final Lcom/tkay/core/common/p$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/p;->a(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/p;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/p;)V
    .locals 0

    .line 107
    iput-object p1, p0, Lcom/tkay/core/common/p$1;->a:Lcom/tkay/core/common/p;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 110
    iget-object v0, p0, Lcom/tkay/core/common/p$1;->a:Lcom/tkay/core/common/p;

    invoke-static {v0}, Lcom/tkay/core/common/p;->a(Lcom/tkay/core/common/p;)Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->compareAndSet(ZZ)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 112
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/p$1;->a:Lcom/tkay/core/common/p;

    invoke-static {}, Lcom/tkay/core/common/p;->d()Ljava/lang/Boolean;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/tkay/core/common/p;->a(Lcom/tkay/core/common/p;Ljava/lang/Boolean;)Ljava/lang/Boolean;

    .line 113
    iget-object v0, p0, Lcom/tkay/core/common/p$1;->a:Lcom/tkay/core/common/p;

    invoke-static {v0}, Lcom/tkay/core/common/p;->b(Lcom/tkay/core/common/p;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method
