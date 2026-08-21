.class public Lcom/tkay/expressad/video/dynview/b/a;
.super Ljava/lang/Object;


# static fields
.field private static volatile b:Lcom/tkay/expressad/video/dynview/b/a;


# instance fields
.field public a:Lcom/tkay/expressad/video/dynview/e/a;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 26
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/tkay/expressad/video/dynview/b/a;
    .locals 2

    .line 29
    sget-object v0, Lcom/tkay/expressad/video/dynview/b/a;->b:Lcom/tkay/expressad/video/dynview/b/a;

    if-nez v0, :cond_1

    .line 30
    const-class v0, Lcom/tkay/expressad/video/dynview/b/a;

    monitor-enter v0

    .line 31
    :try_start_0
    sget-object v1, Lcom/tkay/expressad/video/dynview/b/a;->b:Lcom/tkay/expressad/video/dynview/b/a;

    if-nez v1, :cond_0

    .line 32
    new-instance v1, Lcom/tkay/expressad/video/dynview/b/a;

    invoke-direct {v1}, Lcom/tkay/expressad/video/dynview/b/a;-><init>()V

    sput-object v1, Lcom/tkay/expressad/video/dynview/b/a;->b:Lcom/tkay/expressad/video/dynview/b/a;

    .line 34
    :cond_0
    sget-object v1, Lcom/tkay/expressad/video/dynview/b/a;->b:Lcom/tkay/expressad/video/dynview/b/a;

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v1

    :catchall_0
    move-exception v1

    .line 35
    monitor-exit v0

    throw v1

    .line 37
    :cond_1
    sget-object v0, Lcom/tkay/expressad/video/dynview/b/a;->b:Lcom/tkay/expressad/video/dynview/b/a;

    return-object v0
.end method

.method private static a(Lcom/tkay/expressad/video/dynview/c;Landroid/view/View;Lcom/tkay/expressad/video/dynview/f/e;)V
    .locals 1

    .line 81
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/a;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/a;-><init>()V

    invoke-virtual {v0, p0, p1, p2}, Lcom/tkay/expressad/video/dynview/j/a;->a(Lcom/tkay/expressad/video/dynview/c;Landroid/view/View;Lcom/tkay/expressad/video/dynview/f/e;)V

    return-void
.end method

.method private a(Lcom/tkay/expressad/video/dynview/c;Landroid/view/View;Ljava/util/Map;Lcom/tkay/expressad/video/dynview/f/e;)V
    .locals 1

    .line 71
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/a;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/a;-><init>()V

    .line 72
    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/tkay/expressad/video/dynview/j/a;->a(Lcom/tkay/expressad/video/dynview/c;Landroid/view/View;Ljava/util/Map;Lcom/tkay/expressad/video/dynview/f/e;)V

    .line 73
    iget-object p1, v0, Lcom/tkay/expressad/video/dynview/j/a;->b:Lcom/tkay/expressad/video/dynview/e/a;

    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/b/a;->a:Lcom/tkay/expressad/video/dynview/e/a;

    return-void
.end method

.method public static b()V
    .locals 1

    .line 108
    sget-object v0, Lcom/tkay/expressad/video/dynview/b/a;->b:Lcom/tkay/expressad/video/dynview/b/a;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 109
    sput-object v0, Lcom/tkay/expressad/video/dynview/b/a;->b:Lcom/tkay/expressad/video/dynview/b/a;

    :cond_0
    return-void
.end method

.method private static b(Lcom/tkay/expressad/video/dynview/c;Landroid/view/View;Ljava/util/Map;Lcom/tkay/expressad/video/dynview/f/e;)V
    .locals 1

    .line 77
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/a;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/a;-><init>()V

    invoke-virtual {v0, p0, p1, p2, p3}, Lcom/tkay/expressad/video/dynview/j/a;->b(Lcom/tkay/expressad/video/dynview/c;Landroid/view/View;Ljava/util/Map;Lcom/tkay/expressad/video/dynview/f/e;)V

    return-void
.end method

.method private c()V
    .locals 1

    .line 90
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/b/a;->a:Lcom/tkay/expressad/video/dynview/e/a;

    if-eqz v0, :cond_0

    .line 91
    invoke-interface {v0}, Lcom/tkay/expressad/video/dynview/e/a;->a()V

    :cond_0
    return-void
.end method

.method private static c(Lcom/tkay/expressad/video/dynview/c;Landroid/view/View;Ljava/util/Map;Lcom/tkay/expressad/video/dynview/f/e;)V
    .locals 1

    .line 85
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/a;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/a;-><init>()V

    invoke-virtual {v0, p0, p1, p2, p3}, Lcom/tkay/expressad/video/dynview/j/a;->c(Lcom/tkay/expressad/video/dynview/c;Landroid/view/View;Ljava/util/Map;Lcom/tkay/expressad/video/dynview/f/e;)V

    return-void
.end method

.method private static d()V
    .locals 0

    return-void
.end method

.method private e()V
    .locals 1

    .line 102
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/b/a;->a:Lcom/tkay/expressad/video/dynview/e/a;

    if-eqz v0, :cond_0

    .line 103
    invoke-interface {v0}, Lcom/tkay/expressad/video/dynview/e/a;->c()V

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Landroid/view/View;Lcom/tkay/expressad/video/dynview/c;Ljava/util/Map;Lcom/tkay/expressad/video/dynview/f/e;)V
    .locals 2

    .line 42
    invoke-virtual {p2}, Lcom/tkay/expressad/video/dynview/c;->h()I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_3

    const/16 v1, 0x66

    if-eq v0, v1, :cond_2

    const/16 v1, 0xca

    if-eq v0, v1, :cond_2

    const/16 v1, 0x12e

    if-eq v0, v1, :cond_2

    const/16 v1, 0x322

    if-eq v0, v1, :cond_2

    const/16 v1, 0x388

    if-eq v0, v1, :cond_2

    const/4 v1, 0x4

    if-eq v0, v1, :cond_1

    const/4 v1, 0x5

    if-eq v0, v1, :cond_0

    .line 61
    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    invoke-interface {p4, p1, p2}, Lcom/tkay/expressad/video/dynview/f/e;->a(Landroid/view/View;Ljava/util/List;)V

    return-void

    .line 1085
    :cond_0
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/a;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/a;-><init>()V

    invoke-virtual {v0, p2, p1, p3, p4}, Lcom/tkay/expressad/video/dynview/j/a;->c(Lcom/tkay/expressad/video/dynview/c;Landroid/view/View;Ljava/util/Map;Lcom/tkay/expressad/video/dynview/f/e;)V

    return-void

    .line 1081
    :cond_1
    new-instance p3, Lcom/tkay/expressad/video/dynview/j/a;

    invoke-direct {p3}, Lcom/tkay/expressad/video/dynview/j/a;-><init>()V

    invoke-virtual {p3, p2, p1, p4}, Lcom/tkay/expressad/video/dynview/j/a;->a(Lcom/tkay/expressad/video/dynview/c;Landroid/view/View;Lcom/tkay/expressad/video/dynview/f/e;)V

    return-void

    .line 1077
    :cond_2
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/a;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/a;-><init>()V

    invoke-virtual {v0, p2, p1, p3, p4}, Lcom/tkay/expressad/video/dynview/j/a;->b(Lcom/tkay/expressad/video/dynview/c;Landroid/view/View;Ljava/util/Map;Lcom/tkay/expressad/video/dynview/f/e;)V

    return-void

    .line 1071
    :cond_3
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/a;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/a;-><init>()V

    .line 1072
    invoke-virtual {v0, p2, p1, p3, p4}, Lcom/tkay/expressad/video/dynview/j/a;->a(Lcom/tkay/expressad/video/dynview/c;Landroid/view/View;Ljava/util/Map;Lcom/tkay/expressad/video/dynview/f/e;)V

    .line 1073
    iget-object p1, v0, Lcom/tkay/expressad/video/dynview/j/a;->b:Lcom/tkay/expressad/video/dynview/e/a;

    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/b/a;->a:Lcom/tkay/expressad/video/dynview/e/a;

    return-void
.end method
