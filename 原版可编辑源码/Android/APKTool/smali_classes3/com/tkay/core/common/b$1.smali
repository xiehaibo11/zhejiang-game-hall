.class final Lcom/tkay/core/common/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/b;->a(Ljava/lang/String;Lcom/tkay/core/common/b$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tkay/core/common/b$a;

.field final synthetic c:Lcom/tkay/core/common/b;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/b;Ljava/lang/String;Lcom/tkay/core/common/b$a;)V
    .locals 0

    .line 43
    iput-object p1, p0, Lcom/tkay/core/common/b$1;->c:Lcom/tkay/core/common/b;

    iput-object p2, p0, Lcom/tkay/core/common/b$1;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/core/common/b$1;->b:Lcom/tkay/core/common/b$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 46
    iget-object v0, p0, Lcom/tkay/core/common/b$1;->c:Lcom/tkay/core/common/b;

    monitor-enter v0

    .line 47
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/b$1;->c:Lcom/tkay/core/common/b;

    iget-object v1, v1, Lcom/tkay/core/common/b;->b:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v2, p0, Lcom/tkay/core/common/b$1;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/List;

    if-nez v1, :cond_0

    .line 49
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 50
    iget-object v2, p0, Lcom/tkay/core/common/b$1;->c:Lcom/tkay/core/common/b;

    iget-object v2, v2, Lcom/tkay/core/common/b;->b:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v3, p0, Lcom/tkay/core/common/b$1;->a:Ljava/lang/String;

    invoke-virtual {v2, v3, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 52
    :cond_0
    iget-object v2, p0, Lcom/tkay/core/common/b$1;->b:Lcom/tkay/core/common/b$a;

    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 53
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method
