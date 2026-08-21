.class final Lcom/tkay/expressad/foundation/g/d/b$2$2;
.super Lcom/tkay/core/common/l/b/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/foundation/g/d/b$2;->b(Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/tkay/expressad/foundation/g/d/b$2;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/foundation/g/d/b$2;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 236
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/d/b$2$2;->c:Lcom/tkay/expressad/foundation/g/d/b$2;

    iput-object p2, p0, Lcom/tkay/expressad/foundation/g/d/b$2$2;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/expressad/foundation/g/d/b$2$2;->b:Ljava/lang/String;

    invoke-direct {p0}, Lcom/tkay/core/common/l/b/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 8

    .line 239
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/d/b$2$2;->c:Lcom/tkay/expressad/foundation/g/d/b$2;

    iget-object v0, v0, Lcom/tkay/expressad/foundation/g/d/b$2;->b:Lcom/tkay/expressad/foundation/g/d/b;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Lcom/tkay/expressad/foundation/g/d/b;)Ljava/util/LinkedHashMap;

    move-result-object v0

    monitor-enter v0

    .line 240
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/d/b$2$2;->c:Lcom/tkay/expressad/foundation/g/d/b$2;

    iget-object v1, v1, Lcom/tkay/expressad/foundation/g/d/b$2;->b:Lcom/tkay/expressad/foundation/g/d/b;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Lcom/tkay/expressad/foundation/g/d/b;)Ljava/util/LinkedHashMap;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/foundation/g/d/b$2$2;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedList;

    if-eqz v1, :cond_0

    .line 242
    invoke-virtual {v1}, Ljava/util/LinkedList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/g/d/c;

    .line 243
    iget-object v3, p0, Lcom/tkay/expressad/foundation/g/d/b$2$2;->c:Lcom/tkay/expressad/foundation/g/d/b$2;

    iget-object v3, v3, Lcom/tkay/expressad/foundation/g/d/b$2;->b:Lcom/tkay/expressad/foundation/g/d/b;

    iget-object v4, p0, Lcom/tkay/expressad/foundation/g/d/b$2$2;->c:Lcom/tkay/expressad/foundation/g/d/b$2;

    iget-object v4, v4, Lcom/tkay/expressad/foundation/g/d/b$2;->a:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/expressad/foundation/g/d/b$2$2;->b:Ljava/lang/String;

    .line 1284
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v6

    new-instance v7, Lcom/tkay/expressad/foundation/g/d/b$4;

    invoke-direct {v7, v3, v2, v5, v4}, Lcom/tkay/expressad/foundation/g/d/b$4;-><init>(Lcom/tkay/expressad/foundation/g/d/b;Lcom/tkay/expressad/foundation/g/d/c;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v6, v7}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 246
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method
