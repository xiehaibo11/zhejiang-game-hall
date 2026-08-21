.class final Lcom/tkay/basead/d/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/d/a/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/d/b;->b(Lcom/tkay/basead/e/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/e/c;

.field final synthetic b:Lcom/tkay/basead/d/b;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/b;Lcom/tkay/basead/e/c;)V
    .locals 0

    .line 173
    iput-object p1, p0, Lcom/tkay/basead/d/b$1;->b:Lcom/tkay/basead/d/b;

    iput-object p2, p0, Lcom/tkay/basead/d/b$1;->a:Lcom/tkay/basead/e/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/core/common/f/f;)V
    .locals 1

    .line 176
    iget-object v0, p0, Lcom/tkay/basead/d/b$1;->b:Lcom/tkay/basead/d/b;

    invoke-virtual {v0, p1}, Lcom/tkay/basead/d/b;->a(Lcom/tkay/core/common/f/f;)V

    .line 178
    iget-object p1, p0, Lcom/tkay/basead/d/b$1;->a:Lcom/tkay/basead/e/c;

    if-eqz p1, :cond_0

    .line 179
    invoke-interface {p1}, Lcom/tkay/basead/e/c;->onAdDataLoaded()V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/core/common/f/f;Lcom/tkay/basead/c/e;)V
    .locals 3

    .line 225
    iget-object v0, p0, Lcom/tkay/basead/d/b$1;->b:Lcom/tkay/basead/d/b;

    iget-object v1, p0, Lcom/tkay/basead/d/b$1;->a:Lcom/tkay/basead/e/c;

    const/4 v2, 0x1

    invoke-static {v0, p1, p2, v1, v2}, Lcom/tkay/basead/d/b;->a(Lcom/tkay/basead/d/b;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/c/e;Lcom/tkay/basead/e/c;Z)V

    return-void
.end method

.method public final a(Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/a/g;)V
    .locals 4

    .line 185
    iget-object v0, p0, Lcom/tkay/basead/d/b$1;->b:Lcom/tkay/basead/d/b;

    iput-object p1, v0, Lcom/tkay/basead/d/b;->e:Lcom/tkay/core/common/f/z;

    .line 186
    iget-object v0, p0, Lcom/tkay/basead/d/b$1;->b:Lcom/tkay/basead/d/b;

    iput-object p2, v0, Lcom/tkay/basead/d/b;->f:Lcom/tkay/core/common/a/g;

    .line 187
    iget-object p2, p0, Lcom/tkay/basead/d/b$1;->b:Lcom/tkay/basead/d/b;

    new-instance v0, Lcom/tkay/basead/a/c;

    iget-object v1, p2, Lcom/tkay/basead/d/b;->b:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/basead/d/b$1;->b:Lcom/tkay/basead/d/b;

    iget-object v2, v2, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object v3, p0, Lcom/tkay/basead/d/b$1;->b:Lcom/tkay/basead/d/b;

    iget-object v3, v3, Lcom/tkay/basead/d/b;->e:Lcom/tkay/core/common/f/z;

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/basead/a/c;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)V

    iput-object v0, p2, Lcom/tkay/basead/d/b;->g:Lcom/tkay/basead/a/c;

    .line 188
    iget-object p2, p0, Lcom/tkay/basead/d/b$1;->b:Lcom/tkay/basead/d/b;

    iget-object p2, p2, Lcom/tkay/basead/d/b;->g:Lcom/tkay/basead/a/c;

    new-instance v0, Lcom/tkay/basead/d/b$1$1;

    invoke-direct {v0, p0}, Lcom/tkay/basead/d/b$1$1;-><init>(Lcom/tkay/basead/d/b$1;)V

    invoke-virtual {p2, v0}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/a/c$b;)V

    .line 213
    new-instance p2, Lcom/tkay/basead/c/i;

    iget-object v0, p0, Lcom/tkay/basead/d/b$1;->b:Lcom/tkay/basead/d/b;

    iget-object v0, v0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    const-string v1, ""

    invoke-direct {p2, v0, v1}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    const/16 v0, 0x21

    .line 214
    invoke-static {v0, p1, p2}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 216
    iget-object p1, p0, Lcom/tkay/basead/d/b$1;->b:Lcom/tkay/basead/d/b;

    invoke-static {p1}, Lcom/tkay/basead/d/b;->a(Lcom/tkay/basead/d/b;)Z

    .line 217
    iget-object p1, p0, Lcom/tkay/basead/d/b$1;->a:Lcom/tkay/basead/e/c;

    if-eqz p1, :cond_0

    .line 218
    invoke-interface {p1}, Lcom/tkay/basead/e/c;->onAdCacheLoaded()V

    :cond_0
    return-void
.end method
