.class public final Lcom/tkay/expressad/video/dynview/h/a;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/util/List;Lcom/tkay/expressad/video/dynview/f/h;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;",
            "Lcom/tkay/expressad/video/dynview/f/h;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 30
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 31
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/c;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/c;-><init>()V

    invoke-static {p1, p2}, Lcom/tkay/expressad/video/dynview/j/c;->a(Landroid/content/Context;Ljava/util/List;)Lcom/tkay/expressad/video/dynview/c;

    move-result-object p1

    .line 32
    invoke-direct {p0, p1, p3, p4}, Lcom/tkay/expressad/video/dynview/h/a;->a(Lcom/tkay/expressad/video/dynview/c;Lcom/tkay/expressad/video/dynview/f/h;Ljava/util/Map;)V

    return-void
.end method

.method public constructor <init>(Lcom/tkay/expressad/video/dynview/c;Lcom/tkay/expressad/video/dynview/f/h;Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/video/dynview/c;",
            "Lcom/tkay/expressad/video/dynview/f/h;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 35
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 36
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/expressad/video/dynview/h/a;->a(Lcom/tkay/expressad/video/dynview/c;Lcom/tkay/expressad/video/dynview/f/h;Ljava/util/Map;)V

    return-void
.end method

.method private a(Lcom/tkay/expressad/video/dynview/c;Lcom/tkay/expressad/video/dynview/f/h;Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/video/dynview/c;",
            "Lcom/tkay/expressad/video/dynview/f/h;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    if-nez p2, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    .line 73
    sget-object p1, Lcom/tkay/expressad/video/dynview/c/b;->a:Lcom/tkay/expressad/video/dynview/c/b;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/video/dynview/f/h;->a(Lcom/tkay/expressad/video/dynview/c/b;)V

    return-void

    .line 76
    :cond_1
    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/c;->a()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_2

    .line 77
    sget-object p1, Lcom/tkay/expressad/video/dynview/c/b;->b:Lcom/tkay/expressad/video/dynview/c/b;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/video/dynview/f/h;->a(Lcom/tkay/expressad/video/dynview/c/b;)V

    return-void

    .line 80
    :cond_2
    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/c;->b()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 81
    sget-object p1, Lcom/tkay/expressad/video/dynview/c/b;->c:Lcom/tkay/expressad/video/dynview/c/b;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/video/dynview/f/h;->a(Lcom/tkay/expressad/video/dynview/c/b;)V

    return-void

    .line 84
    :cond_3
    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/c;->a()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/c;->b()Ljava/lang/String;

    move-result-object v1

    const-string v2, "layout"

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 85
    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/c;->a()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v1, v0, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    .line 87
    invoke-static {}, Lcom/tkay/expressad/video/dynview/b/b;->a()Lcom/tkay/expressad/video/dynview/b/b;

    invoke-static {v0, p1}, Lcom/tkay/expressad/video/dynview/b/b;->a(Landroid/view/View;Lcom/tkay/expressad/video/dynview/c;)V

    .line 90
    invoke-static {}, Lcom/tkay/expressad/video/dynview/b/a;->a()Lcom/tkay/expressad/video/dynview/b/a;

    move-result-object v1

    new-instance v2, Lcom/tkay/expressad/video/dynview/h/a$1;

    invoke-direct {v2, p0, p2}, Lcom/tkay/expressad/video/dynview/h/a$1;-><init>(Lcom/tkay/expressad/video/dynview/h/a;Lcom/tkay/expressad/video/dynview/f/h;)V

    invoke-virtual {v1, v0, p1, p3, v2}, Lcom/tkay/expressad/video/dynview/b/a;->a(Landroid/view/View;Lcom/tkay/expressad/video/dynview/c;Ljava/util/Map;Lcom/tkay/expressad/video/dynview/f/e;)V

    return-void
.end method
