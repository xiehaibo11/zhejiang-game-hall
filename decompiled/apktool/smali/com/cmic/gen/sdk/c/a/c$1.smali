.class Lcom/cmic/gen/sdk/c/a/c$1;
.super Ljava/lang/Object;
.source "RetryAndRedirectInterceptor.java"

# interfaces
.implements Lcom/cmic/gen/sdk/c/d/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/cmic/gen/sdk/c/a/c;->b(Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/d/c;Lcom/cmic/gen/sdk/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/cmic/gen/sdk/c/c/c;

.field final synthetic b:Lcom/cmic/gen/sdk/a;

.field final synthetic c:Lcom/cmic/gen/sdk/c/d/c;

.field final synthetic d:Lcom/cmic/gen/sdk/c/a/c;


# direct methods
.method constructor <init>(Lcom/cmic/gen/sdk/c/a/c;Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/c/d/c;)V
    .locals 0

    .line 39
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/a/c$1;->d:Lcom/cmic/gen/sdk/c/a/c;

    iput-object p2, p0, Lcom/cmic/gen/sdk/c/a/c$1;->a:Lcom/cmic/gen/sdk/c/c/c;

    iput-object p3, p0, Lcom/cmic/gen/sdk/c/a/c$1;->b:Lcom/cmic/gen/sdk/a;

    iput-object p4, p0, Lcom/cmic/gen/sdk/c/a/c$1;->c:Lcom/cmic/gen/sdk/c/d/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Lcom/cmic/gen/sdk/c/d/a;)V
    .locals 3

    .line 57
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/a/c$1;->a:Lcom/cmic/gen/sdk/c/c/c;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/c/c/c;->j()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 58
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "retry: "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/cmic/gen/sdk/c/a/c$1;->a:Lcom/cmic/gen/sdk/c/c/c;

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/c/c/c;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "RetryAndRedirectInterceptor"

    invoke-static {v0, p1}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 59
    iget-object p1, p0, Lcom/cmic/gen/sdk/c/a/c$1;->d:Lcom/cmic/gen/sdk/c/a/c;

    iget-object v0, p0, Lcom/cmic/gen/sdk/c/a/c$1;->a:Lcom/cmic/gen/sdk/c/c/c;

    iget-object v1, p0, Lcom/cmic/gen/sdk/c/a/c$1;->c:Lcom/cmic/gen/sdk/c/d/c;

    iget-object v2, p0, Lcom/cmic/gen/sdk/c/a/c$1;->b:Lcom/cmic/gen/sdk/a;

    invoke-virtual {p1, v0, v1, v2}, Lcom/cmic/gen/sdk/c/a/c;->b(Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/d/c;Lcom/cmic/gen/sdk/a;)V

    goto :goto_0

    .line 61
    :cond_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/a/c$1;->c:Lcom/cmic/gen/sdk/c/d/c;

    invoke-interface {v0, p1}, Lcom/cmic/gen/sdk/c/d/c;->a(Lcom/cmic/gen/sdk/c/d/a;)V

    :goto_0
    return-void
.end method

.method public a(Lcom/cmic/gen/sdk/c/d/b;)V
    .locals 3

    .line 43
    invoke-virtual {p1}, Lcom/cmic/gen/sdk/c/d/b;->d()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 44
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/a/c$1;->d:Lcom/cmic/gen/sdk/c/a/c;

    invoke-static {v0}, Lcom/cmic/gen/sdk/c/a/c;->a(Lcom/cmic/gen/sdk/c/a/c;)Lcom/cmic/gen/sdk/c/b;

    move-result-object v0

    iget-object v1, p0, Lcom/cmic/gen/sdk/c/a/c$1;->a:Lcom/cmic/gen/sdk/c/c/c;

    iget-object v2, p0, Lcom/cmic/gen/sdk/c/a/c$1;->b:Lcom/cmic/gen/sdk/a;

    invoke-virtual {v0, v1, p1, v2}, Lcom/cmic/gen/sdk/c/b;->a(Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/d/b;Lcom/cmic/gen/sdk/a;)Lcom/cmic/gen/sdk/c/c/c;

    move-result-object p1

    .line 45
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/a/c$1;->d:Lcom/cmic/gen/sdk/c/a/c;

    iget-object v1, p0, Lcom/cmic/gen/sdk/c/a/c$1;->c:Lcom/cmic/gen/sdk/c/d/c;

    iget-object v2, p0, Lcom/cmic/gen/sdk/c/a/c$1;->b:Lcom/cmic/gen/sdk/a;

    invoke-virtual {v0, p1, v1, v2}, Lcom/cmic/gen/sdk/c/a/c;->b(Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/d/c;Lcom/cmic/gen/sdk/a;)V

    goto :goto_0

    .line 46
    :cond_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/a/c$1;->d:Lcom/cmic/gen/sdk/c/a/c;

    invoke-static {v0}, Lcom/cmic/gen/sdk/c/a/c;->a(Lcom/cmic/gen/sdk/c/a/c;)Lcom/cmic/gen/sdk/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/c/b;->a()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 48
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/a/c$1;->d:Lcom/cmic/gen/sdk/c/a/c;

    invoke-static {v0}, Lcom/cmic/gen/sdk/c/a/c;->a(Lcom/cmic/gen/sdk/c/a/c;)Lcom/cmic/gen/sdk/c/b;

    move-result-object v0

    iget-object v1, p0, Lcom/cmic/gen/sdk/c/a/c$1;->a:Lcom/cmic/gen/sdk/c/c/c;

    iget-object v2, p0, Lcom/cmic/gen/sdk/c/a/c$1;->b:Lcom/cmic/gen/sdk/a;

    invoke-virtual {v0, v1, p1, v2}, Lcom/cmic/gen/sdk/c/b;->b(Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/d/b;Lcom/cmic/gen/sdk/a;)Lcom/cmic/gen/sdk/c/c/c;

    move-result-object p1

    .line 49
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/a/c$1;->d:Lcom/cmic/gen/sdk/c/a/c;

    iget-object v1, p0, Lcom/cmic/gen/sdk/c/a/c$1;->c:Lcom/cmic/gen/sdk/c/d/c;

    iget-object v2, p0, Lcom/cmic/gen/sdk/c/a/c$1;->b:Lcom/cmic/gen/sdk/a;

    invoke-virtual {v0, p1, v1, v2}, Lcom/cmic/gen/sdk/c/a/c;->b(Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/d/c;Lcom/cmic/gen/sdk/a;)V

    goto :goto_0

    .line 51
    :cond_1
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/a/c$1;->c:Lcom/cmic/gen/sdk/c/d/c;

    invoke-interface {v0, p1}, Lcom/cmic/gen/sdk/c/d/c;->a(Lcom/cmic/gen/sdk/c/d/b;)V

    :goto_0
    return-void
.end method
