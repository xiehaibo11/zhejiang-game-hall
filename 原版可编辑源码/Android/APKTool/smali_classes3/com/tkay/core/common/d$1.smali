.class final Lcom/tkay/core/common/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/d;->a(JLjava/lang/Runnable;JLjava/lang/Runnable;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/Runnable;

.field final synthetic b:Lcom/tkay/core/common/d;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/d;Ljava/lang/Runnable;)V
    .locals 0

    .line 80
    iput-object p1, p0, Lcom/tkay/core/common/d$1;->b:Lcom/tkay/core/common/d;

    iput-object p2, p0, Lcom/tkay/core/common/d$1;->a:Ljava/lang/Runnable;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 83
    iget-object v0, p0, Lcom/tkay/core/common/d$1;->b:Lcom/tkay/core/common/d;

    monitor-enter v0

    .line 84
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/d$1;->b:Lcom/tkay/core/common/d;

    const/4 v2, 0x1

    iput-boolean v2, v1, Lcom/tkay/core/common/d;->i:Z

    .line 86
    iget-object v1, p0, Lcom/tkay/core/common/d$1;->a:Ljava/lang/Runnable;

    invoke-interface {v1}, Ljava/lang/Runnable;->run()V

    .line 87
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method
