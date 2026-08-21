.class Lcom/igexin/push/extension/distribution/basic/a/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/igexin/push/extension/distribution/basic/f/e;


# instance fields
.field final synthetic a:Lcom/igexin/push/core/bean/BaseAction;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:I

.field final synthetic f:Lcom/igexin/push/extension/distribution/basic/a/a;


# direct methods
.method constructor <init>(Lcom/igexin/push/extension/distribution/basic/a/a;Lcom/igexin/push/core/bean/BaseAction;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->f:Lcom/igexin/push/extension/distribution/basic/a/a;

    iput-object p2, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->a:Lcom/igexin/push/core/bean/BaseAction;

    iput-object p3, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->d:Ljava/lang/String;

    iput p6, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->e:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Lcom/igexin/push/core/bean/BaseAction;)V
    .locals 3

    iget v0, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->e:I

    const/4 v1, 0x1

    const/4 v2, 0x2

    if-ne v0, v2, :cond_0

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->a:Lcom/igexin/push/core/bean/BaseAction;

    check-cast v0, Lcom/igexin/push/extension/distribution/basic/b/a;

    invoke-virtual {v0, v1}, Lcom/igexin/push/extension/distribution/basic/b/a;->d(Z)V

    goto :goto_0

    :cond_0
    const/16 v2, 0x8

    if-ne v0, v2, :cond_1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->a:Lcom/igexin/push/core/bean/BaseAction;

    check-cast v0, Lcom/igexin/push/extension/distribution/basic/b/a;

    invoke-virtual {v0, v1}, Lcom/igexin/push/extension/distribution/basic/b/a;->c(Z)V

    :cond_1
    :goto_0
    check-cast p1, Lcom/igexin/push/extension/distribution/basic/b/a;

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->s()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->k()Z

    move-result p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->b:Ljava/lang/String;

    invoke-static {p1, v1}, Lcom/igexin/push/core/d;->a(Ljava/lang/String;Z)I

    move-result p1

    if-nez p1, :cond_2

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object p1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->b:Ljava/lang/String;

    iget-object v1, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->c:Ljava/lang/String;

    const-string v2, "1"

    invoke-virtual {p1, v0, v1, v2}, Lcom/igexin/push/core/a/e;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    :cond_2
    return-void
.end method

.method public a(Ljava/lang/Exception;)V
    .locals 9

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->a:Lcom/igexin/push/core/bean/BaseAction;

    check-cast p1, Lcom/igexin/push/extension/distribution/basic/b/a;

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->t()I

    move-result p1

    const/4 v0, 0x3

    const/4 v1, 0x1

    if-lt p1, v0, :cond_0

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->a:Lcom/igexin/push/core/bean/BaseAction;

    check-cast p1, Lcom/igexin/push/extension/distribution/basic/b/a;

    invoke-virtual {p1, v1}, Lcom/igexin/push/extension/distribution/basic/b/a;->d(Z)V

    :cond_0
    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->a:Lcom/igexin/push/core/bean/BaseAction;

    check-cast p1, Lcom/igexin/push/extension/distribution/basic/b/a;

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->l()I

    move-result p1

    if-lt p1, v0, :cond_1

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->a:Lcom/igexin/push/core/bean/BaseAction;

    check-cast p1, Lcom/igexin/push/extension/distribution/basic/b/a;

    invoke-virtual {p1, v1}, Lcom/igexin/push/extension/distribution/basic/b/a;->c(Z)V

    :cond_1
    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->a:Lcom/igexin/push/core/bean/BaseAction;

    check-cast p1, Lcom/igexin/push/extension/distribution/basic/b/a;

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->s()Z

    move-result p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->a:Lcom/igexin/push/core/bean/BaseAction;

    check-cast p1, Lcom/igexin/push/extension/distribution/basic/b/a;

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->k()Z

    move-result p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->b:Ljava/lang/String;

    invoke-static {p1, v1}, Lcom/igexin/push/core/d;->a(Ljava/lang/String;Z)I

    move-result p1

    if-nez p1, :cond_3

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object p1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->b:Ljava/lang/String;

    iget-object v1, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->c:Ljava/lang/String;

    const-string v2, "1"

    invoke-virtual {p1, v0, v1, v2}, Lcom/igexin/push/core/a/e;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    goto :goto_0

    :cond_2
    iget-object v3, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->f:Lcom/igexin/push/extension/distribution/basic/a/a;

    iget-object v4, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->d:Ljava/lang/String;

    iget-object v5, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->b:Ljava/lang/String;

    iget-object v6, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->c:Ljava/lang/String;

    iget-object v7, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->a:Lcom/igexin/push/core/bean/BaseAction;

    iget v8, p0, Lcom/igexin/push/extension/distribution/basic/a/b;->e:I

    invoke-virtual/range {v3 .. v8}, Lcom/igexin/push/extension/distribution/basic/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/igexin/push/core/bean/BaseAction;I)V

    :cond_3
    :goto_0
    return-void
.end method
