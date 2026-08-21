.class public final Lcom/tkay/basead/d/g;
.super Lcom/tkay/basead/d/b;


# instance fields
.field a:Lcom/tkay/basead/ui/BaseSplashATView;

.field k:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V
    .locals 0

    .line 36
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/basead/d/b;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    const/4 v0, 0x1

    .line 40
    iput-boolean v0, p0, Lcom/tkay/basead/d/g;->k:Z

    return-void
.end method

.method public final a(Landroid/view/ViewGroup;)V
    .locals 2

    .line 49
    invoke-super {p0}, Lcom/tkay/basead/d/b;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 50
    invoke-static {v0}, Lcom/tkay/core/common/l/u;->a(Z)V

    .line 51
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/basead/d/g$1;

    invoke-direct {v1, p0, p1}, Lcom/tkay/basead/d/g$1;-><init>(Lcom/tkay/basead/d/g;Landroid/view/ViewGroup;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 1

    .line 133
    iget-object v0, p0, Lcom/tkay/basead/d/g;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    if-eqz v0, :cond_0

    .line 134
    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseSplashATView;->destroy()V

    const/4 v0, 0x0

    .line 135
    iput-object v0, p0, Lcom/tkay/basead/d/g;->a:Lcom/tkay/basead/ui/BaseSplashATView;

    .line 138
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/g;->f:Lcom/tkay/core/common/a/g;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/basead/d/g;->f:Lcom/tkay/core/common/a/g;

    instance-of v0, v0, Lcom/tkay/expressad/splash/d/c;

    if-eqz v0, :cond_1

    .line 139
    iget-object v0, p0, Lcom/tkay/basead/d/g;->f:Lcom/tkay/core/common/a/g;

    check-cast v0, Lcom/tkay/expressad/splash/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/d/c;->g()V

    :cond_1
    return-void
.end method

.method public final f()Z
    .locals 1

    .line 127
    iget-object v0, p0, Lcom/tkay/basead/d/g;->f:Lcom/tkay/core/common/a/g;

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
