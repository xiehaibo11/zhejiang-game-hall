.class final Lcom/vivo/push/d/d;
.super Lcom/vivo/push/d/z;


# direct methods
.method constructor <init>(Lcom/vivo/push/o;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/vivo/push/d/z;-><init>(Lcom/vivo/push/o;)V

    return-void
.end method

.method static synthetic a(Lcom/vivo/push/d/d;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/vivo/push/d/d;->a:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic b(Lcom/vivo/push/d/d;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/vivo/push/d/d;->a:Landroid/content/Context;

    return-object p0
.end method


# virtual methods
.method protected final a(Lcom/vivo/push/o;)V
    .locals 6

    check-cast p1, Lcom/vivo/push/b/i;

    invoke-virtual {p1}, Lcom/vivo/push/b/i;->e()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v1

    invoke-virtual {p1}, Lcom/vivo/push/b/i;->g()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/vivo/push/b/i;->h()I

    move-result v3

    const/4 v4, 0x1

    new-array v4, v4, [Ljava/lang/Object;

    const/4 v5, 0x0

    aput-object v0, v4, v5

    invoke-virtual {v1, v2, v3, v4}, Lcom/vivo/push/e;->a(Ljava/lang/String;I[Ljava/lang/Object;)V

    invoke-virtual {p1}, Lcom/vivo/push/b/i;->g()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/vivo/push/e;->a(Ljava/lang/String;)V

    :cond_0
    new-instance v1, Lcom/vivo/push/d/e;

    invoke-direct {v1, p0, v0, p1}, Lcom/vivo/push/d/e;-><init>(Lcom/vivo/push/d/d;Ljava/lang/String;Lcom/vivo/push/b/i;)V

    invoke-static {v1}, Lcom/vivo/push/m;->b(Ljava/lang/Runnable;)V

    return-void
.end method
