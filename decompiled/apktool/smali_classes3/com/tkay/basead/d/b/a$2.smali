.class final Lcom/tkay/basead/d/b/a$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/a/b/b$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/d/b/a;->a(Lcom/tkay/core/common/f/y;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/b/a$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/i;

.field final synthetic b:Lcom/tkay/basead/d/b/a$a;

.field final synthetic c:Lcom/tkay/core/common/f/y;

.field final synthetic d:Lcom/tkay/basead/d/b/a;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/b/a;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/b/a$a;Lcom/tkay/core/common/f/y;)V
    .locals 0

    .line 177
    iput-object p1, p0, Lcom/tkay/basead/d/b/a$2;->d:Lcom/tkay/basead/d/b/a;

    iput-object p2, p0, Lcom/tkay/basead/d/b/a$2;->a:Lcom/tkay/core/common/f/i;

    iput-object p3, p0, Lcom/tkay/basead/d/b/a$2;->b:Lcom/tkay/basead/d/b/a$a;

    iput-object p4, p0, Lcom/tkay/basead/d/b/a$2;->c:Lcom/tkay/core/common/f/y;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 180
    iget-object v0, p0, Lcom/tkay/basead/d/b/a$2;->d:Lcom/tkay/basead/d/b/a;

    iget-object v0, v0, Lcom/tkay/basead/d/b/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {}, Lcom/tkay/core/basead/b;->a()Lcom/tkay/core/basead/b;

    iget-object v1, p0, Lcom/tkay/basead/d/b/a$2;->a:Lcom/tkay/core/common/f/i;

    invoke-static {v1}, Lcom/tkay/core/basead/b;->a(Lcom/tkay/core/common/f/i;)Ljava/lang/String;

    move-result-object v1

    sget-object v2, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-virtual {v0, v1, v2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 182
    iget-object v0, p0, Lcom/tkay/basead/d/b/a$2;->b:Lcom/tkay/basead/d/b/a$a;

    if-eqz v0, :cond_0

    .line 183
    iget-object v1, p0, Lcom/tkay/basead/d/b/a$2;->c:Lcom/tkay/core/common/f/y;

    invoke-interface {v0, v1}, Lcom/tkay/basead/d/b/a$a;->a(Lcom/tkay/core/common/f/y;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/basead/c/e;)V
    .locals 3

    .line 189
    iget-object v0, p0, Lcom/tkay/basead/d/b/a$2;->d:Lcom/tkay/basead/d/b/a;

    iget-object v0, v0, Lcom/tkay/basead/d/b/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {}, Lcom/tkay/core/basead/b;->a()Lcom/tkay/core/basead/b;

    iget-object v1, p0, Lcom/tkay/basead/d/b/a$2;->a:Lcom/tkay/core/common/f/i;

    invoke-static {v1}, Lcom/tkay/core/basead/b;->a(Lcom/tkay/core/common/f/i;)Ljava/lang/String;

    move-result-object v1

    sget-object v2, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-virtual {v0, v1, v2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 190
    iget-object v0, p0, Lcom/tkay/basead/d/b/a$2;->b:Lcom/tkay/basead/d/b/a$a;

    if-eqz v0, :cond_0

    .line 191
    iget-object v1, p0, Lcom/tkay/basead/d/b/a$2;->c:Lcom/tkay/core/common/f/y;

    invoke-interface {v0, v1, p1}, Lcom/tkay/basead/d/b/a$a;->a(Lcom/tkay/core/common/f/y;Lcom/tkay/basead/c/e;)V

    :cond_0
    return-void
.end method
