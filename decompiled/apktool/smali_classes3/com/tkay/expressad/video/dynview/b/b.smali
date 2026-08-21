.class public Lcom/tkay/expressad/video/dynview/b/b;
.super Ljava/lang/Object;


# static fields
.field private static volatile a:Lcom/tkay/expressad/video/dynview/b/b;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/tkay/expressad/video/dynview/b/b;
    .locals 2

    .line 31
    sget-object v0, Lcom/tkay/expressad/video/dynview/b/b;->a:Lcom/tkay/expressad/video/dynview/b/b;

    if-nez v0, :cond_1

    .line 32
    const-class v0, Lcom/tkay/expressad/video/dynview/b/b;

    monitor-enter v0

    .line 33
    :try_start_0
    sget-object v1, Lcom/tkay/expressad/video/dynview/b/b;->a:Lcom/tkay/expressad/video/dynview/b/b;

    if-nez v1, :cond_0

    .line 34
    new-instance v1, Lcom/tkay/expressad/video/dynview/b/b;

    invoke-direct {v1}, Lcom/tkay/expressad/video/dynview/b/b;-><init>()V

    sput-object v1, Lcom/tkay/expressad/video/dynview/b/b;->a:Lcom/tkay/expressad/video/dynview/b/b;

    .line 36
    :cond_0
    sget-object v1, Lcom/tkay/expressad/video/dynview/b/b;->a:Lcom/tkay/expressad/video/dynview/b/b;

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v1

    :catchall_0
    move-exception v1

    .line 37
    monitor-exit v0

    throw v1

    .line 39
    :cond_1
    sget-object v0, Lcom/tkay/expressad/video/dynview/b/b;->a:Lcom/tkay/expressad/video/dynview/b/b;

    return-object v0
.end method

.method private static a(Landroid/view/View;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/View;",
            ")V"
        }
    .end annotation

    .line 81
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/b;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/b;-><init>()V

    invoke-virtual {v0, p0}, Lcom/tkay/expressad/video/dynview/j/b;->a(Landroid/view/View;)V

    return-void
.end method

.method public static a(Landroid/view/View;Lcom/tkay/expressad/video/dynview/c;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/View;",
            "Lcom/tkay/expressad/video/dynview/c;",
            ")V"
        }
    .end annotation

    if-nez p1, :cond_0

    return-void

    .line 50
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/c;->h()I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_5

    const/16 v1, 0x66

    if-eq v0, v1, :cond_4

    const/16 v1, 0xca

    if-eq v0, v1, :cond_4

    const/16 v1, 0x12e

    if-eq v0, v1, :cond_4

    const/16 v1, 0x322

    if-eq v0, v1, :cond_4

    const/16 v1, 0x388

    if-eq v0, v1, :cond_4

    const/4 v1, 0x3

    if-eq v0, v1, :cond_3

    const/4 v1, 0x4

    if-eq v0, v1, :cond_2

    const/4 p0, 0x5

    if-eq v0, p0, :cond_1

    goto :goto_0

    .line 2090
    :cond_1
    new-instance p0, Lcom/tkay/expressad/video/dynview/j/b;

    invoke-direct {p0}, Lcom/tkay/expressad/video/dynview/j/b;-><init>()V

    :goto_0
    return-void

    .line 1121
    :cond_2
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/b;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/b;-><init>()V

    invoke-virtual {v0, p0, p1}, Lcom/tkay/expressad/video/dynview/j/b;->c(Landroid/view/View;Lcom/tkay/expressad/video/dynview/c;)V

    return-void

    .line 1110
    :cond_3
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/b;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/b;-><init>()V

    invoke-virtual {v0, p0, p1}, Lcom/tkay/expressad/video/dynview/j/b;->b(Landroid/view/View;Lcom/tkay/expressad/video/dynview/c;)V

    return-void

    .line 1100
    :cond_4
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/b;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/b;-><init>()V

    invoke-virtual {v0, p0, p1}, Lcom/tkay/expressad/video/dynview/j/b;->a(Landroid/view/View;Lcom/tkay/expressad/video/dynview/c;)V

    return-void

    .line 1081
    :cond_5
    new-instance p1, Lcom/tkay/expressad/video/dynview/j/b;

    invoke-direct {p1}, Lcom/tkay/expressad/video/dynview/j/b;-><init>()V

    invoke-virtual {p1, p0}, Lcom/tkay/expressad/video/dynview/j/b;->a(Landroid/view/View;)V

    return-void
.end method

.method public static b()V
    .locals 1

    .line 125
    sget-object v0, Lcom/tkay/expressad/video/dynview/b/b;->a:Lcom/tkay/expressad/video/dynview/b/b;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 126
    sput-object v0, Lcom/tkay/expressad/video/dynview/b/b;->a:Lcom/tkay/expressad/video/dynview/b/b;

    :cond_0
    return-void
.end method

.method private static b(Landroid/view/View;Lcom/tkay/expressad/video/dynview/c;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/View;",
            "Lcom/tkay/expressad/video/dynview/c;",
            ")V"
        }
    .end annotation

    .line 100
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/b;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/b;-><init>()V

    invoke-virtual {v0, p0, p1}, Lcom/tkay/expressad/video/dynview/j/b;->a(Landroid/view/View;Lcom/tkay/expressad/video/dynview/c;)V

    return-void
.end method

.method private static c()V
    .locals 1

    .line 90
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/b;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/b;-><init>()V

    return-void
.end method

.method private static c(Landroid/view/View;Lcom/tkay/expressad/video/dynview/c;)V
    .locals 1

    .line 110
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/b;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/b;-><init>()V

    invoke-virtual {v0, p0, p1}, Lcom/tkay/expressad/video/dynview/j/b;->b(Landroid/view/View;Lcom/tkay/expressad/video/dynview/c;)V

    return-void
.end method

.method private static d(Landroid/view/View;Lcom/tkay/expressad/video/dynview/c;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/View;",
            "Lcom/tkay/expressad/video/dynview/c;",
            ")V"
        }
    .end annotation

    .line 121
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/b;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/b;-><init>()V

    invoke-virtual {v0, p0, p1}, Lcom/tkay/expressad/video/dynview/j/b;->c(Landroid/view/View;Lcom/tkay/expressad/video/dynview/c;)V

    return-void
.end method
