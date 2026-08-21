.class Lcom/reyun/tracking/b/j;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/reyun/tracking/b/l;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Lcom/reyun/tracking/b/h;


# direct methods
.method constructor <init>(Lcom/reyun/tracking/b/h;Landroid/content/Context;Lcom/reyun/tracking/b/l;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/reyun/tracking/b/j;->d:Lcom/reyun/tracking/b/h;

    iput-object p2, p0, Lcom/reyun/tracking/b/j;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/reyun/tracking/b/j;->b:Lcom/reyun/tracking/b/l;

    iput-object p4, p0, Lcom/reyun/tracking/b/j;->c:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 7

    const-string v0, "unknown"

    const-string v1, "TrackingIO"

    const/4 v2, 0x0

    :try_start_0
    new-instance v3, Lcom/reyun/tracking/b/k;

    invoke-direct {v3, p0}, Lcom/reyun/tracking/b/k;-><init>(Lcom/reyun/tracking/b/j;)V

    const-string v4, "ASUS"

    iget-object v5, p0, Lcom/reyun/tracking/b/j;->c:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    new-instance v4, Lcom/reyun/tracking/b/a/a;

    iget-object v5, p0, Lcom/reyun/tracking/b/j;->a:Landroid/content/Context;

    invoke-direct {v4, v5}, Lcom/reyun/tracking/b/a/a;-><init>(Landroid/content/Context;)V

    invoke-virtual {v4, v3}, Lcom/reyun/tracking/b/a/a;->a(Lcom/reyun/tracking/b/d;)V

    goto/16 :goto_3

    :cond_0
    const-string v4, "OPPO"

    iget-object v5, p0, Lcom/reyun/tracking/b/j;->c:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    new-instance v4, Lcom/reyun/tracking/b/a/i;

    iget-object v5, p0, Lcom/reyun/tracking/b/j;->a:Landroid/content/Context;

    invoke-direct {v4, v5}, Lcom/reyun/tracking/b/a/i;-><init>(Landroid/content/Context;)V

    invoke-virtual {v4, v3}, Lcom/reyun/tracking/b/a/i;->a(Lcom/reyun/tracking/b/d;)Ljava/lang/String;

    goto/16 :goto_3

    :cond_1
    const-string v4, "ONEPLUS"

    iget-object v5, p0, Lcom/reyun/tracking/b/j;->c:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    new-instance v4, Lcom/reyun/tracking/b/a/g;

    iget-object v5, p0, Lcom/reyun/tracking/b/j;->a:Landroid/content/Context;

    invoke-direct {v4, v5}, Lcom/reyun/tracking/b/a/g;-><init>(Landroid/content/Context;)V

    invoke-virtual {v4, v3}, Lcom/reyun/tracking/b/a/g;->a(Lcom/reyun/tracking/b/d;)Ljava/lang/String;

    goto/16 :goto_3

    :cond_2
    const-string v4, "ZTE"

    iget-object v5, p0, Lcom/reyun/tracking/b/j;->c:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_a

    const-string v4, "FERRMEOS"

    iget-object v5, p0, Lcom/reyun/tracking/b/j;->c:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_a

    const-string v4, "SSUI"

    iget-object v5, p0, Lcom/reyun/tracking/b/j;->c:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_3

    goto/16 :goto_2

    :cond_3
    const-string v4, "HUAWEI"

    iget-object v5, p0, Lcom/reyun/tracking/b/j;->c:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_9

    const-string v4, "HONOR"

    iget-object v5, p0, Lcom/reyun/tracking/b/j;->c:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_4

    goto :goto_1

    :cond_4
    const-string v4, "SAMSUNG"

    iget-object v5, p0, Lcom/reyun/tracking/b/j;->c:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_5

    new-instance v4, Lcom/reyun/tracking/b/a/k;

    iget-object v5, p0, Lcom/reyun/tracking/b/j;->a:Landroid/content/Context;

    invoke-direct {v4, v5}, Lcom/reyun/tracking/b/a/k;-><init>(Landroid/content/Context;)V

    invoke-virtual {v4, v3}, Lcom/reyun/tracking/b/a/k;->a(Lcom/reyun/tracking/b/d;)V

    goto/16 :goto_3

    :cond_5
    const-string v4, "LENOVO"

    iget-object v5, p0, Lcom/reyun/tracking/b/j;->c:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_8

    const-string v4, "MOTOLORA"

    iget-object v5, p0, Lcom/reyun/tracking/b/j;->c:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_6

    goto :goto_0

    :cond_6
    const-string v4, "MEIZU"

    iget-object v5, p0, Lcom/reyun/tracking/b/j;->c:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_7

    new-instance v4, Lcom/reyun/tracking/b/a/e;

    iget-object v5, p0, Lcom/reyun/tracking/b/j;->a:Landroid/content/Context;

    invoke-direct {v4, v5}, Lcom/reyun/tracking/b/a/e;-><init>(Landroid/content/Context;)V

    invoke-virtual {v4, v3}, Lcom/reyun/tracking/b/a/e;->a(Lcom/reyun/tracking/b/d;)V

    goto :goto_3

    :cond_7
    const-string v3, "oaid error:async unknown manufacturer"

    invoke-static {v1, v3}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v3, p0, Lcom/reyun/tracking/b/j;->d:Lcom/reyun/tracking/b/h;

    iget-object v4, p0, Lcom/reyun/tracking/b/j;->b:Lcom/reyun/tracking/b/l;

    invoke-static {v3, v4, v0, v2}, Lcom/reyun/tracking/b/h;->a(Lcom/reyun/tracking/b/h;Lcom/reyun/tracking/b/l;Ljava/lang/String;Z)V

    iget-object v3, p0, Lcom/reyun/tracking/b/j;->d:Lcom/reyun/tracking/b/h;

    iget-object v4, p0, Lcom/reyun/tracking/b/j;->a:Landroid/content/Context;

    const-string v5, "100009"

    const-string v6, "async unknown manufacturer"

    invoke-static {v3, v4, v5, v6}, Lcom/reyun/tracking/b/h;->a(Lcom/reyun/tracking/b/h;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    :cond_8
    :goto_0
    new-instance v4, Lcom/reyun/tracking/b/a/c;

    iget-object v5, p0, Lcom/reyun/tracking/b/j;->a:Landroid/content/Context;

    invoke-direct {v4, v5}, Lcom/reyun/tracking/b/a/c;-><init>(Landroid/content/Context;)V

    invoke-virtual {v4, v3}, Lcom/reyun/tracking/b/a/c;->a(Lcom/reyun/tracking/b/d;)V

    goto :goto_3

    :cond_9
    :goto_1
    new-instance v4, Lcom/reyun/tracking/b/a;

    iget-object v5, p0, Lcom/reyun/tracking/b/j;->a:Landroid/content/Context;

    invoke-direct {v4, v5}, Lcom/reyun/tracking/b/a;-><init>(Landroid/content/Context;)V

    invoke-virtual {v4, v3}, Lcom/reyun/tracking/b/a;->a(Lcom/reyun/tracking/b/d;)V

    goto :goto_3

    :cond_a
    :goto_2
    new-instance v4, Lcom/reyun/tracking/b/a/n;

    iget-object v5, p0, Lcom/reyun/tracking/b/j;->a:Landroid/content/Context;

    invoke-direct {v4, v5}, Lcom/reyun/tracking/b/a/n;-><init>(Landroid/content/Context;)V

    invoke-virtual {v4, v3}, Lcom/reyun/tracking/b/a/n;->a(Lcom/reyun/tracking/b/d;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_3

    :catchall_0
    move-exception v3

    invoke-virtual {v3}, Ljava/lang/Throwable;->printStackTrace()V

    const-string v3, "oaid :async unknown"

    invoke-static {v1, v3}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/reyun/tracking/b/j;->d:Lcom/reyun/tracking/b/h;

    iget-object v3, p0, Lcom/reyun/tracking/b/j;->b:Lcom/reyun/tracking/b/l;

    invoke-static {v1, v3, v0, v2}, Lcom/reyun/tracking/b/h;->a(Lcom/reyun/tracking/b/h;Lcom/reyun/tracking/b/l;Ljava/lang/String;Z)V

    iget-object v0, p0, Lcom/reyun/tracking/b/j;->d:Lcom/reyun/tracking/b/h;

    iget-object v1, p0, Lcom/reyun/tracking/b/j;->a:Landroid/content/Context;

    const-string v2, "100005"

    const-string v3, "async unknown"

    invoke-static {v0, v1, v2, v3}, Lcom/reyun/tracking/b/h;->a(Lcom/reyun/tracking/b/h;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    :goto_3
    return-void
.end method
