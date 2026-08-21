.class final Lcom/tkay/core/common/b/p$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/b/p;->b(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Lcom/tkay/core/common/b/p;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/b/p;I)V
    .locals 0

    .line 255
    iput-object p1, p0, Lcom/tkay/core/common/b/p$3;->b:Lcom/tkay/core/common/b/p;

    iput p2, p0, Lcom/tkay/core/common/b/p$3;->a:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 7

    .line 258
    iget-object v0, p0, Lcom/tkay/core/common/b/p$3;->b:Lcom/tkay/core/common/b/p;

    iget v1, p0, Lcom/tkay/core/common/b/p$3;->a:I

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/p;->c(I)Z

    move-result v0

    if-nez v0, :cond_2

    .line 259
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v0

    .line 261
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

    .line 1068
    iget v2, v0, Lcom/tkay/core/common/b/p;->c:I

    const/4 v3, 0x2

    const/4 v4, 0x1

    if-ne v2, v3, :cond_0

    .line 264
    invoke-virtual {v1}, Lcom/tkay/core/c/a;->U()I

    move-result v2

    if-ne v2, v4, :cond_0

    invoke-virtual {v1}, Lcom/tkay/core/c/a;->I()I

    move-result v2

    if-nez v2, :cond_0

    .line 2068
    iget v2, v0, Lcom/tkay/core/common/b/p;->c:I

    .line 265
    invoke-virtual {v1}, Lcom/tkay/core/c/a;->U()I

    move-result v5

    iget v6, p0, Lcom/tkay/core/common/b/p$3;->a:I

    invoke-static {v4, v2, v5, v6}, Lcom/tkay/core/common/k/c;->a(IIII)V

    .line 3068
    :cond_0
    iget v2, v0, Lcom/tkay/core/common/b/p;->c:I

    if-ne v2, v4, :cond_1

    .line 269
    invoke-virtual {v1}, Lcom/tkay/core/c/a;->S()I

    move-result v2

    if-nez v2, :cond_1

    invoke-virtual {v1}, Lcom/tkay/core/c/a;->U()I

    move-result v2

    if-nez v2, :cond_1

    .line 4068
    iget v0, v0, Lcom/tkay/core/common/b/p;->c:I

    .line 270
    invoke-virtual {v1}, Lcom/tkay/core/c/a;->U()I

    move-result v1

    iget v2, p0, Lcom/tkay/core/common/b/p$3;->a:I

    invoke-static {v3, v0, v1, v2}, Lcom/tkay/core/common/k/c;->a(IIII)V

    .line 272
    :cond_1
    iget-object v0, p0, Lcom/tkay/core/common/b/p$3;->b:Lcom/tkay/core/common/b/p;

    invoke-static {v0}, Lcom/tkay/core/common/b/p;->a(Lcom/tkay/core/common/b/p;)Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    iget v1, p0, Lcom/tkay/core/common/b/p$3;->a:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    sget-object v2, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v0, v1, v2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    return-void
.end method
