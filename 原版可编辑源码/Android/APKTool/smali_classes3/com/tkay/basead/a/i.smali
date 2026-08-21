.class public final Lcom/tkay/basead/a/i;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/g/b;


# instance fields
.field a:Lcom/tkay/basead/d;

.field b:Landroid/content/Context;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 24
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/a/i;->b:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/core/common/f/h;Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 10

    if-eqz p4, :cond_0

    .line 32
    iget-object p2, p0, Lcom/tkay/basead/a/i;->b:Landroid/content/Context;

    invoke-static {p2, p1}, Lcom/tkay/basead/a/b;->a(Landroid/content/Context;Lcom/tkay/core/common/f/h;)Z

    return-void

    .line 36
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->k()Lcom/tkay/core/common/f/j;

    move-result-object p4

    if-nez p4, :cond_1

    return-void

    .line 41
    :cond_1
    invoke-virtual {p4}, Lcom/tkay/core/common/f/j;->H()I

    move-result v0

    .line 42
    invoke-virtual {p4}, Lcom/tkay/core/common/f/j;->I()I

    move-result p4

    const/4 v1, 0x1

    if-eq v0, v1, :cond_3

    const/4 p4, 0x3

    if-eq v0, p4, :cond_2

    goto :goto_0

    .line 81
    :cond_2
    invoke-static {}, Lcom/tkay/core/common/b;->a()Lcom/tkay/core/common/b;

    move-result-object p4

    new-instance v0, Lcom/tkay/basead/c/g;

    invoke-direct {v0, p1, p3, p2}, Lcom/tkay/basead/c/g;-><init>(Lcom/tkay/core/common/f/h;Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "1"

    invoke-virtual {p4, p1, v0}, Lcom/tkay/core/common/b;->a(Ljava/lang/String;Ljava/lang/Object;)V

    :goto_0
    return-void

    .line 46
    :cond_3
    new-instance v0, Lcom/tkay/basead/a/i$1;

    invoke-direct {v0, p0}, Lcom/tkay/basead/a/i$1;-><init>(Lcom/tkay/basead/a/i;)V

    .line 63
    new-instance v7, Lcom/tkay/basead/d;

    int-to-long v8, p4

    new-instance p4, Lcom/tkay/basead/a/i$2;

    move-object v1, p4

    move-object v2, p0

    move-object v3, v0

    move-object v4, p1

    move-object v5, p2

    move-object v6, p3

    invoke-direct/range {v1 .. v6}, Lcom/tkay/basead/a/i$2;-><init>(Lcom/tkay/basead/a/i;Lcom/tkay/basead/a;Lcom/tkay/core/common/f/h;Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {v7, v8, v9, p4}, Lcom/tkay/basead/d;-><init>(JLjava/lang/Runnable;)V

    iput-object v7, p0, Lcom/tkay/basead/a/i;->a:Lcom/tkay/basead/d;

    .line 75
    :try_start_0
    iget-object p1, p0, Lcom/tkay/basead/a/i;->b:Landroid/content/Context;

    check-cast p1, Landroid/app/Application;

    invoke-virtual {p1, v0}, Landroid/app/Application;->registerActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    .line 77
    :catch_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->q()Ljava/lang/String;

    move-result-object p1

    const-string p2, "Error"

    const-string p3, "Error, cannot registerActivityLifecycleCallbacks here!"

    invoke-static {p2, p3, p1}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
