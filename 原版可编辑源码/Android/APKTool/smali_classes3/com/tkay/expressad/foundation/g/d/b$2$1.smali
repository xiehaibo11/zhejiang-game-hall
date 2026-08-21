.class final Lcom/tkay/expressad/foundation/g/d/b$2$1;
.super Lcom/tkay/core/common/l/b/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/foundation/g/d/b$2;->a(Ljava/lang/String;Ljava/lang/String;)V
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

    .line 209
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/d/b$2$1;->c:Lcom/tkay/expressad/foundation/g/d/b$2;

    iput-object p2, p0, Lcom/tkay/expressad/foundation/g/d/b$2$1;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/expressad/foundation/g/d/b$2$1;->b:Ljava/lang/String;

    invoke-direct {p0}, Lcom/tkay/core/common/l/b/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 6

    .line 212
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/d/b$2$1;->c:Lcom/tkay/expressad/foundation/g/d/b$2;

    iget-object v0, v0, Lcom/tkay/expressad/foundation/g/d/b$2;->b:Lcom/tkay/expressad/foundation/g/d/b;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Lcom/tkay/expressad/foundation/g/d/b;)Ljava/util/LinkedHashMap;

    move-result-object v0

    monitor-enter v0

    .line 213
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/d/b$2$1;->a:Ljava/lang/String;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/d/a;->a(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v1

    .line 214
    iget-object v2, p0, Lcom/tkay/expressad/foundation/g/d/b$2$1;->c:Lcom/tkay/expressad/foundation/g/d/b$2;

    iget-object v2, v2, Lcom/tkay/expressad/foundation/g/d/b$2;->b:Lcom/tkay/expressad/foundation/g/d/b;

    iget-object v3, p0, Lcom/tkay/expressad/foundation/g/d/b$2$1;->b:Ljava/lang/String;

    invoke-virtual {v2, v3, v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Landroid/graphics/Bitmap;)V

    .line 215
    iget-object v2, p0, Lcom/tkay/expressad/foundation/g/d/b$2$1;->c:Lcom/tkay/expressad/foundation/g/d/b$2;

    iget-object v2, v2, Lcom/tkay/expressad/foundation/g/d/b$2;->b:Lcom/tkay/expressad/foundation/g/d/b;

    invoke-static {v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Lcom/tkay/expressad/foundation/g/d/b;)Ljava/util/LinkedHashMap;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/foundation/g/d/b$2$1;->b:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/LinkedList;

    if-eqz v2, :cond_0

    .line 217
    invoke-virtual {v2}, Ljava/util/LinkedList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/foundation/g/d/c;

    .line 218
    iget-object v4, p0, Lcom/tkay/expressad/foundation/g/d/b$2$1;->c:Lcom/tkay/expressad/foundation/g/d/b$2;

    iget-object v4, v4, Lcom/tkay/expressad/foundation/g/d/b$2;->b:Lcom/tkay/expressad/foundation/g/d/b;

    iget-object v5, p0, Lcom/tkay/expressad/foundation/g/d/b$2$1;->c:Lcom/tkay/expressad/foundation/g/d/b$2;

    iget-object v5, v5, Lcom/tkay/expressad/foundation/g/d/b$2;->a:Ljava/lang/String;

    invoke-static {v4, v5, v1, v3}, Lcom/tkay/expressad/foundation/g/d/b;->a(Lcom/tkay/expressad/foundation/g/d/b;Ljava/lang/String;Landroid/graphics/Bitmap;Lcom/tkay/expressad/foundation/g/d/c;)V

    goto :goto_0

    .line 221
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
