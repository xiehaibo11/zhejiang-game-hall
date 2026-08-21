.class public final Lcom/tkay/basead/f/g;
.super Lcom/tkay/basead/f/c;


# instance fields
.field a:Lcom/tkay/basead/e/a;

.field k:Lcom/tkay/basead/ui/BaseSplashATView;

.field l:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    .line 32
    invoke-direct {p0, p1, p2, p3, v0}, Lcom/tkay/basead/f/c;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Ljava/lang/String;Z)V

    return-void
.end method


# virtual methods
.method public final a(Landroid/app/Activity;Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/Activity;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    return-void
.end method

.method public final a(Landroid/view/ViewGroup;)V
    .locals 2

    .line 46
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/basead/f/g$1;

    invoke-direct {v1, p0, p1}, Lcom/tkay/basead/f/g$1;-><init>(Lcom/tkay/basead/f/g;Landroid/view/ViewGroup;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a(Lcom/tkay/basead/e/a;)V
    .locals 0

    .line 65
    iput-object p1, p0, Lcom/tkay/basead/f/g;->a:Lcom/tkay/basead/e/a;

    return-void
.end method

.method public final a()Z
    .locals 4

    .line 76
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/basead/f/g;->d()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 77
    iget-object v0, p0, Lcom/tkay/basead/f/g;->c:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/basead/f/a/a;->a(Landroid/content/Context;)Lcom/tkay/basead/f/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/f/g;->g:Lcom/tkay/core/common/f/r;

    iget-object v2, p0, Lcom/tkay/basead/f/g;->d:Lcom/tkay/core/common/f/i;

    iget-boolean v3, p0, Lcom/tkay/basead/f/g;->f:Z

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/basead/f/a/a;->a(Lcom/tkay/core/common/f/r;Lcom/tkay/core/common/f/i;Z)Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    :catch_0
    move-exception v0

    .line 80
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final b()V
    .locals 1

    const/4 v0, 0x1

    .line 36
    iput-boolean v0, p0, Lcom/tkay/basead/f/g;->l:Z

    return-void
.end method

.method public final f()V
    .locals 2

    const/4 v0, 0x0

    .line 87
    iput-object v0, p0, Lcom/tkay/basead/f/g;->a:Lcom/tkay/basead/e/a;

    .line 88
    iget-object v1, p0, Lcom/tkay/basead/f/g;->k:Lcom/tkay/basead/ui/BaseSplashATView;

    if-eqz v1, :cond_0

    .line 89
    invoke-virtual {v1}, Lcom/tkay/basead/ui/BaseSplashATView;->destroy()V

    .line 90
    iput-object v0, p0, Lcom/tkay/basead/f/g;->k:Lcom/tkay/basead/ui/BaseSplashATView;

    :cond_0
    return-void
.end method
