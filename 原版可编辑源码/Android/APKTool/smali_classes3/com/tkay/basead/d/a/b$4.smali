.class final Lcom/tkay/basead/d/a/b$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/d/a/b;->e(Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/basead/d/a/b$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/f;

.field final synthetic b:Lcom/tkay/core/common/f/i;

.field final synthetic c:Lcom/tkay/basead/d/a/b$a;

.field final synthetic d:Lcom/tkay/expressad/foundation/d/d;

.field final synthetic e:Lcom/tkay/basead/d/a/b;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/a/b;Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/b$a;Lcom/tkay/expressad/foundation/d/d;)V
    .locals 0

    .line 498
    iput-object p1, p0, Lcom/tkay/basead/d/a/b$4;->e:Lcom/tkay/basead/d/a/b;

    iput-object p2, p0, Lcom/tkay/basead/d/a/b$4;->a:Lcom/tkay/core/common/f/f;

    iput-object p3, p0, Lcom/tkay/basead/d/a/b$4;->b:Lcom/tkay/core/common/f/i;

    iput-object p4, p0, Lcom/tkay/basead/d/a/b$4;->c:Lcom/tkay/basead/d/a/b$a;

    iput-object p5, p0, Lcom/tkay/basead/d/a/b$4;->d:Lcom/tkay/expressad/foundation/d/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 501
    iget-object v0, p0, Lcom/tkay/basead/d/a/b$4;->a:Lcom/tkay/core/common/f/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->S()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/d/a/b$4;->b:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->c:Ljava/lang/String;

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/a/b$4;->a:Lcom/tkay/core/common/f/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->S()Ljava/lang/String;

    move-result-object v0

    .line 502
    :goto_0
    new-instance v1, Lcom/tkay/expressad/advanced/d/c;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    const-string v3, ""

    invoke-direct {v1, v3, v0, v2}, Lcom/tkay/expressad/advanced/d/c;-><init>(Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;)V

    .line 503
    new-instance v0, Lcom/tkay/basead/d/a/b$4$1;

    invoke-direct {v0, p0}, Lcom/tkay/basead/d/a/b$4$1;-><init>(Lcom/tkay/basead/d/a/b$4;)V

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/advanced/d/c;->a(Lcom/tkay/expressad/out/i;)V

    .line 554
    iget-object v0, p0, Lcom/tkay/basead/d/a/b$4;->e:Lcom/tkay/basead/d/a/b;

    iget-object v0, v0, Lcom/tkay/basead/d/a/b;->a:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/basead/d/a/b$4;->b:Lcom/tkay/core/common/f/i;

    iget-object v3, v3, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/tkay/basead/d/a/b$4;->b:Lcom/tkay/core/common/f/i;

    iget-object v3, v3, Lcom/tkay/core/common/f/i;->a:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 555
    iget-object v0, p0, Lcom/tkay/basead/d/a/b$4;->d:Lcom/tkay/expressad/foundation/d/d;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/advanced/d/c;->a(Lcom/tkay/expressad/foundation/d/d;)V

    return-void
.end method
