.class final Lcom/tkay/core/b/h$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/b/h;->a(Ljava/lang/Integer;Ljava/util/List;Ljava/util/List;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/List;

.field final synthetic b:Ljava/util/List;

.field final synthetic c:Ljava/lang/Integer;

.field final synthetic d:Lcom/tkay/core/b/h;


# direct methods
.method constructor <init>(Lcom/tkay/core/b/h;Ljava/util/List;Ljava/util/List;Ljava/lang/Integer;)V
    .locals 0

    .line 341
    iput-object p1, p0, Lcom/tkay/core/b/h$4;->d:Lcom/tkay/core/b/h;

    iput-object p2, p0, Lcom/tkay/core/b/h$4;->a:Ljava/util/List;

    iput-object p3, p0, Lcom/tkay/core/b/h$4;->b:Ljava/util/List;

    iput-object p4, p0, Lcom/tkay/core/b/h$4;->c:Ljava/lang/Integer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    .line 344
    iget-object v0, p0, Lcom/tkay/core/b/h$4;->d:Lcom/tkay/core/b/h;

    monitor-enter v0

    .line 345
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/b/h$4;->d:Lcom/tkay/core/b/h;

    invoke-static {v1}, Lcom/tkay/core/b/h;->c(Lcom/tkay/core/b/h;)Lcom/tkay/core/common/k$a;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 346
    iget-object v1, p0, Lcom/tkay/core/b/h$4;->d:Lcom/tkay/core/b/h;

    invoke-static {v1}, Lcom/tkay/core/b/h;->c(Lcom/tkay/core/b/h;)Lcom/tkay/core/common/k$a;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/b/h$4;->d:Lcom/tkay/core/b/h;

    invoke-static {v2}, Lcom/tkay/core/b/h;->d(Lcom/tkay/core/b/h;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/b/h$4;->a:Ljava/util/List;

    iget-object v4, p0, Lcom/tkay/core/b/h$4;->b:Ljava/util/List;

    invoke-interface {v1, v2, v3, v4}, Lcom/tkay/core/common/k$a;->a(Ljava/lang/String;Ljava/util/List;Ljava/util/List;)V

    .line 349
    :cond_0
    iget-object v1, p0, Lcom/tkay/core/b/h$4;->d:Lcom/tkay/core/b/h;

    iget-object v2, p0, Lcom/tkay/core/b/h$4;->c:Ljava/lang/Integer;

    invoke-static {v1, v2}, Lcom/tkay/core/b/h;->a(Lcom/tkay/core/b/h;Ljava/lang/Integer;)V

    .line 350
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method
