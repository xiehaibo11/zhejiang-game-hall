.class final Lcom/tkay/core/common/k/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/k/d;->a(Ljava/util/List;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/List;

.field final synthetic b:Lcom/tkay/core/common/k/d;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/k/d;Ljava/util/List;)V
    .locals 0

    .line 51
    iput-object p1, p0, Lcom/tkay/core/common/k/d$1;->b:Lcom/tkay/core/common/k/d;

    iput-object p2, p0, Lcom/tkay/core/common/k/d$1;->a:Ljava/util/List;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    .line 54
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 55
    iget-object v1, p0, Lcom/tkay/core/common/k/d$1;->a:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/f/g;

    .line 56
    invoke-virtual {v2}, Lcom/tkay/core/common/f/g;->a()Lorg/json/JSONObject;

    move-result-object v2

    .line 57
    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    .line 61
    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 64
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v1

    const/4 v2, 0x0

    const/4 v3, 0x0

    if-eqz v1, :cond_2

    .line 66
    invoke-virtual {v1}, Lcom/tkay/core/c/a;->u()I

    move-result v4

    const/4 v5, 0x1

    if-eq v4, v5, :cond_1

    .line 74
    new-instance v4, Lcom/tkay/core/common/h/b;

    iget-object v5, p0, Lcom/tkay/core/common/k/d$1;->b:Lcom/tkay/core/common/k/d;

    invoke-static {v5}, Lcom/tkay/core/common/k/d;->a(Lcom/tkay/core/common/k/d;)Landroid/content/Context;

    move-result-object v5

    invoke-virtual {v1}, Lcom/tkay/core/c/a;->u()I

    move-result v1

    invoke-direct {v4, v5, v1, v0}, Lcom/tkay/core/common/h/b;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 75
    invoke-virtual {v4}, Lcom/tkay/core/common/h/b;->p()V

    .line 76
    invoke-virtual {v4, v3, v2}, Lcom/tkay/core/common/h/b;->a(ILcom/tkay/core/common/h/k;)V

    return-void

    .line 68
    :cond_1
    new-instance v3, Lcom/tkay/core/common/h/a/a;

    invoke-direct {v3, v0}, Lcom/tkay/core/common/h/a/a;-><init>(Ljava/util/List;)V

    .line 69
    invoke-virtual {v1}, Lcom/tkay/core/c/a;->t()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v5, v0}, Lcom/tkay/core/common/h/a/a;->a(ILjava/lang/String;)V

    .line 70
    invoke-virtual {v3}, Lcom/tkay/core/common/h/a/a;->a()V

    .line 71
    invoke-virtual {v3, v2}, Lcom/tkay/core/common/h/a/a;->a(Lcom/tkay/core/common/h/a/c$a;)V

    return-void

    .line 80
    :cond_2
    new-instance v1, Lcom/tkay/core/common/h/b;

    iget-object v4, p0, Lcom/tkay/core/common/k/d$1;->b:Lcom/tkay/core/common/k/d;

    invoke-static {v4}, Lcom/tkay/core/common/k/d;->b(Lcom/tkay/core/common/k/d;)Landroid/content/Context;

    move-result-object v4

    invoke-direct {v1, v4, v3, v0}, Lcom/tkay/core/common/h/b;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 81
    invoke-virtual {v1}, Lcom/tkay/core/common/h/b;->p()V

    .line 82
    invoke-virtual {v1, v3, v2}, Lcom/tkay/core/common/h/b;->a(ILcom/tkay/core/common/h/k;)V

    return-void
.end method
