.class final Lcom/tkay/basead/d/a/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/out/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/d/a/b;->c(Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/basead/d/a/b$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/i;

.field final synthetic b:Lcom/tkay/basead/d/a/b$a;

.field final synthetic c:Lcom/tkay/basead/d/a/b;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/a/b;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/b$a;)V
    .locals 0

    .line 239
    iput-object p1, p0, Lcom/tkay/basead/d/a/b$2;->c:Lcom/tkay/basead/d/a/b;

    iput-object p2, p0, Lcom/tkay/basead/d/a/b$2;->a:Lcom/tkay/core/common/f/i;

    iput-object p3, p0, Lcom/tkay/basead/d/a/b$2;->b:Lcom/tkay/basead/d/a/b$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 247
    iget-object v0, p0, Lcom/tkay/basead/d/a/b$2;->c:Lcom/tkay/basead/d/a/b;

    iget-object v0, v0, Lcom/tkay/basead/d/a/b;->a:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/basead/d/a/b$2;->a:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/basead/d/a/b$2;->a:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/out/TemplateBannerView;

    if-eqz v0, :cond_0

    .line 249
    iget-object v1, p0, Lcom/tkay/basead/d/a/b$2;->b:Lcom/tkay/basead/d/a/b$a;

    if-eqz v1, :cond_1

    .line 250
    invoke-interface {v1, v0}, Lcom/tkay/basead/d/a/b$a;->a(Lcom/tkay/core/common/a/g;)V

    return-void

    .line 253
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/a/b$2;->b:Lcom/tkay/basead/d/a/b$a;

    if-eqz v0, :cond_1

    const-string v0, "30003"

    const-string v1, "Resource download fail."

    .line 254
    invoke-static {v0, v1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    .line 255
    iget-object v1, p0, Lcom/tkay/basead/d/a/b$2;->b:Lcom/tkay/basead/d/a/b$a;

    invoke-interface {v1, v0}, Lcom/tkay/basead/d/a/b$a;->a(Lcom/tkay/basead/c/e;)V

    :cond_1
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 3

    .line 242
    iget-object v0, p0, Lcom/tkay/basead/d/a/b$2;->c:Lcom/tkay/basead/d/a/b;

    iget-object v1, p0, Lcom/tkay/basead/d/a/b$2;->a:Lcom/tkay/core/common/f/i;

    iget-object v2, p0, Lcom/tkay/basead/d/a/b$2;->b:Lcom/tkay/basead/d/a/b$a;

    invoke-static {v0, p1, v1, v2}, Lcom/tkay/basead/d/a/b;->a(Lcom/tkay/basead/d/a/b;Ljava/lang/String;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/b$a;)V

    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method

.method public final c()V
    .locals 0

    return-void
.end method

.method public final d()V
    .locals 0

    return-void
.end method

.method public final e()V
    .locals 0

    return-void
.end method

.method public final f()V
    .locals 0

    return-void
.end method
