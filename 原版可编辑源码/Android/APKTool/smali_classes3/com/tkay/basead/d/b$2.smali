.class final Lcom/tkay/basead/d/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/d/b/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/d/b;->c(Lcom/tkay/basead/e/c;)V
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

    .line 239
    iput-object p1, p0, Lcom/tkay/basead/d/b$2;->b:Lcom/tkay/basead/d/b;

    iput-object p2, p0, Lcom/tkay/basead/d/b$2;->a:Lcom/tkay/basead/e/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 242
    iget-object v0, p0, Lcom/tkay/basead/d/b$2;->a:Lcom/tkay/basead/e/c;

    if-eqz v0, :cond_0

    .line 243
    invoke-interface {v0}, Lcom/tkay/basead/e/c;->onAdDataLoaded()V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/core/common/f/y;)V
    .locals 2

    .line 249
    iget-object v0, p0, Lcom/tkay/basead/d/b$2;->b:Lcom/tkay/basead/d/b;

    iput-object p1, v0, Lcom/tkay/basead/d/b;->e:Lcom/tkay/core/common/f/z;

    .line 250
    new-instance p1, Lcom/tkay/basead/c/i;

    iget-object v0, p0, Lcom/tkay/basead/d/b$2;->b:Lcom/tkay/basead/d/b;

    iget-object v0, v0, Lcom/tkay/basead/d/b;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    const-string v1, ""

    invoke-direct {p1, v0, v1}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 251
    iget-object v0, p0, Lcom/tkay/basead/d/b$2;->b:Lcom/tkay/basead/d/b;

    iget-object v0, v0, Lcom/tkay/basead/d/b;->e:Lcom/tkay/core/common/f/z;

    const/16 v1, 0x21

    invoke-static {v1, v0, p1}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 253
    iget-object p1, p0, Lcom/tkay/basead/d/b$2;->b:Lcom/tkay/basead/d/b;

    invoke-static {p1}, Lcom/tkay/basead/d/b;->a(Lcom/tkay/basead/d/b;)Z

    .line 254
    iget-object p1, p0, Lcom/tkay/basead/d/b$2;->a:Lcom/tkay/basead/e/c;

    if-eqz p1, :cond_0

    .line 255
    invoke-interface {p1}, Lcom/tkay/basead/e/c;->onAdCacheLoaded()V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/core/common/f/y;Lcom/tkay/basead/c/e;)V
    .locals 3

    .line 261
    iget-object v0, p0, Lcom/tkay/basead/d/b$2;->b:Lcom/tkay/basead/d/b;

    iget-object v1, p0, Lcom/tkay/basead/d/b$2;->a:Lcom/tkay/basead/e/c;

    const/4 v2, 0x0

    invoke-static {v0, p1, p2, v1, v2}, Lcom/tkay/basead/d/b;->a(Lcom/tkay/basead/d/b;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/c/e;Lcom/tkay/basead/e/c;Z)V

    return-void
.end method
