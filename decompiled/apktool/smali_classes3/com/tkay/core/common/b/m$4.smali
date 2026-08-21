.class final Lcom/tkay/core/common/b/m$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/b/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Ljava/util/Map;

.field final synthetic e:Lcom/tkay/core/common/b/m;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/b/m;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 0

    .line 1912
    iput-object p1, p0, Lcom/tkay/core/common/b/m$4;->e:Lcom/tkay/core/common/b/m;

    iput-object p2, p0, Lcom/tkay/core/common/b/m$4;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/core/common/b/m$4;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/tkay/core/common/b/m$4;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/tkay/core/common/b/m$4;->d:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 15

    .line 1915
    iget-object v0, p0, Lcom/tkay/core/common/b/m$4;->e:Lcom/tkay/core/common/b/m;

    invoke-static {v0}, Lcom/tkay/core/common/b/m;->d(Lcom/tkay/core/common/b/m;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "SDK.init"

    const-string v1, "SDK should be inited first!"

    .line 1916
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 1920
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/b/m$4;->a:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/core/common/b/m$4;->b:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f;

    move-result-object v0

    .line 1921
    iget-object v1, p0, Lcom/tkay/core/common/b/m$4;->e:Lcom/tkay/core/common/b/m;

    invoke-static {v1}, Lcom/tkay/core/common/b/m;->a(Lcom/tkay/core/common/b/m;)Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/b/m$4;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v1

    .line 1922
    invoke-static {}, Lcom/tkay/core/common/x;->a()Lcom/tkay/core/common/x;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/common/b/m$4;->a:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/x;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1926
    iget-object v3, p0, Lcom/tkay/core/common/b/m$4;->c:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const-string v4, ""

    if-nez v3, :cond_1

    iget-object v3, p0, Lcom/tkay/core/common/b/m$4;->c:Ljava/lang/String;

    invoke-static {v3}, Lcom/tkay/core/common/l/g;->c(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 1927
    iget-object v3, p0, Lcom/tkay/core/common/b/m$4;->c:Ljava/lang/String;

    move-object v12, v3

    goto :goto_0

    :cond_1
    move-object v12, v4

    :goto_0
    const/4 v3, 0x0

    const/4 v5, 0x0

    if-eqz v0, :cond_2

    .line 1933
    invoke-virtual {v0}, Lcom/tkay/core/common/f;->e()Z

    move-result v3

    .line 1934
    iget-object v6, p0, Lcom/tkay/core/common/b/m$4;->e:Lcom/tkay/core/common/b/m;

    invoke-static {v6}, Lcom/tkay/core/common/b/m;->a(Lcom/tkay/core/common/b/m;)Landroid/content/Context;

    move-result-object v6

    iget-object v7, p0, Lcom/tkay/core/common/b/m$4;->d:Ljava/util/Map;

    invoke-virtual {v0, v6, v5, v5, v7}, Lcom/tkay/core/common/f;->a(Landroid/content/Context;ZZLjava/util/Map;)Lcom/tkay/core/common/f/a;

    move-result-object v0

    move v14, v3

    move-object v3, v0

    move v0, v14

    goto :goto_1

    :cond_2
    move v0, v5

    :goto_1
    const/16 v13, 0x10

    if-eqz v3, :cond_3

    .line 1939
    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->h()Lcom/tkay/core/common/f/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->N()Lcom/tkay/core/common/f/d;

    move-result-object v0

    const/4 v1, 0x1

    .line 1940
    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/d;->d(I)V

    .line 2406
    iput-object v12, v0, Lcom/tkay/core/common/f/d;->C:Ljava/lang/String;

    .line 1942
    iget-object v1, p0, Lcom/tkay/core/common/b/m$4;->e:Lcom/tkay/core/common/b/m;

    invoke-static {v1}, Lcom/tkay/core/common/b/m;->a(Lcom/tkay/core/common/b/m;)Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v1

    invoke-virtual {v1, v13, v0}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    return-void

    .line 1946
    :cond_3
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_4

    move-object v3, v4

    goto :goto_2

    :cond_4
    move-object v3, v2

    .line 1947
    :goto_2
    iget-object v4, p0, Lcom/tkay/core/common/b/m$4;->a:Ljava/lang/String;

    const/4 v8, 0x0

    const/4 v9, 0x0

    const/4 v10, 0x0

    iget-object v11, p0, Lcom/tkay/core/common/b/m$4;->d:Ljava/util/Map;

    const-string v5, ""

    const-string v7, ""

    move-object v6, v1

    invoke-static/range {v3 .. v11}, Lcom/tkay/core/common/l/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;IIILjava/util/Map;)Lcom/tkay/core/common/f/d;

    move-result-object v2

    if-eqz v0, :cond_5

    const/4 v0, 0x3

    goto :goto_3

    :cond_5
    const/4 v0, 0x2

    .line 1948
    :goto_3
    invoke-virtual {v2, v0}, Lcom/tkay/core/common/f/d;->d(I)V

    if-nez v1, :cond_6

    .line 1950
    iget-object v0, p0, Lcom/tkay/core/common/b/m$4;->b:Ljava/lang/String;

    invoke-virtual {v2, v0}, Lcom/tkay/core/common/f/d;->z(Ljava/lang/String;)V

    .line 3406
    :cond_6
    iput-object v12, v2, Lcom/tkay/core/common/f/d;->C:Ljava/lang/String;

    .line 1955
    iget-object v0, p0, Lcom/tkay/core/common/b/m$4;->e:Lcom/tkay/core/common/b/m;

    invoke-static {v0}, Lcom/tkay/core/common/b/m;->a(Lcom/tkay/core/common/b/m;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v0

    invoke-virtual {v0, v13, v2}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    return-void
.end method
