.class final Lcom/vivo/push/d/ad;
.super Lcom/vivo/push/d/z;


# direct methods
.method constructor <init>(Lcom/vivo/push/o;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/vivo/push/d/z;-><init>(Lcom/vivo/push/o;)V

    return-void
.end method

.method static synthetic a(Lcom/vivo/push/d/ad;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/vivo/push/d/ad;->a:Landroid/content/Context;

    return-object p0
.end method


# virtual methods
.method protected final a(Lcom/vivo/push/o;)V
    .locals 4

    check-cast p1, Lcom/vivo/push/b/i;

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    invoke-virtual {p1}, Lcom/vivo/push/b/i;->g()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/vivo/push/b/i;->h()I

    move-result v2

    const/4 v3, 0x0

    new-array v3, v3, [Ljava/lang/Object;

    invoke-virtual {v0, v1, v2, v3}, Lcom/vivo/push/e;->a(Ljava/lang/String;I[Ljava/lang/Object;)V

    new-instance v0, Lcom/vivo/push/d/ae;

    invoke-direct {v0, p0, p1}, Lcom/vivo/push/d/ae;-><init>(Lcom/vivo/push/d/ad;Lcom/vivo/push/b/i;)V

    invoke-static {v0}, Lcom/vivo/push/m;->b(Ljava/lang/Runnable;)V

    return-void
.end method
