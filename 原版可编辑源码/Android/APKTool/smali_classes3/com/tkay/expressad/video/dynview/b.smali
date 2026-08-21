.class public Lcom/tkay/expressad/video/dynview/b;
.super Ljava/lang/Object;


# static fields
.field private static volatile b:Lcom/tkay/expressad/video/dynview/b;


# instance fields
.field public a:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/ref/SoftReference<",
            "Landroid/view/View;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 26
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/b;->a:Ljava/util/Map;

    return-void
.end method

.method public static a()Lcom/tkay/expressad/video/dynview/b;
    .locals 2

    .line 32
    sget-object v0, Lcom/tkay/expressad/video/dynview/b;->b:Lcom/tkay/expressad/video/dynview/b;

    if-nez v0, :cond_1

    .line 33
    const-class v0, Lcom/tkay/expressad/video/dynview/b;

    monitor-enter v0

    .line 34
    :try_start_0
    sget-object v1, Lcom/tkay/expressad/video/dynview/b;->b:Lcom/tkay/expressad/video/dynview/b;

    if-nez v1, :cond_0

    .line 35
    new-instance v1, Lcom/tkay/expressad/video/dynview/b;

    invoke-direct {v1}, Lcom/tkay/expressad/video/dynview/b;-><init>()V

    sput-object v1, Lcom/tkay/expressad/video/dynview/b;->b:Lcom/tkay/expressad/video/dynview/b;

    .line 37
    :cond_0
    sget-object v1, Lcom/tkay/expressad/video/dynview/b;->b:Lcom/tkay/expressad/video/dynview/b;

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v1

    :catchall_0
    move-exception v1

    .line 38
    monitor-exit v0

    throw v1

    .line 40
    :cond_1
    sget-object v0, Lcom/tkay/expressad/video/dynview/b;->b:Lcom/tkay/expressad/video/dynview/b;

    return-object v0
.end method

.method public static a(Landroid/content/Context;Ljava/util/List;Lcom/tkay/expressad/video/dynview/f/h;Ljava/util/Map;)V
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

    .line 44
    new-instance v0, Lcom/tkay/expressad/video/dynview/h/a;

    invoke-direct {v0, p0, p1, p2, p3}, Lcom/tkay/expressad/video/dynview/h/a;-><init>(Landroid/content/Context;Ljava/util/List;Lcom/tkay/expressad/video/dynview/f/h;Ljava/util/Map;)V

    return-void
.end method

.method public static a(Lcom/tkay/expressad/video/dynview/c;Lcom/tkay/expressad/video/dynview/f/h;)V
    .locals 2

    .line 54
    new-instance v0, Lcom/tkay/expressad/video/dynview/h/a;

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-direct {v0, p0, p1, v1}, Lcom/tkay/expressad/video/dynview/h/a;-><init>(Lcom/tkay/expressad/video/dynview/c;Lcom/tkay/expressad/video/dynview/f/h;Ljava/util/Map;)V

    return-void
.end method

.method public static a(Lcom/tkay/expressad/video/dynview/c;Lcom/tkay/expressad/video/dynview/f/h;Ljava/util/Map;)V
    .locals 1
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

    .line 58
    new-instance v0, Lcom/tkay/expressad/video/dynview/h/a;

    invoke-direct {v0, p0, p1, p2}, Lcom/tkay/expressad/video/dynview/h/a;-><init>(Lcom/tkay/expressad/video/dynview/c;Lcom/tkay/expressad/video/dynview/f/h;Ljava/util/Map;)V

    return-void
.end method

.method private static b()V
    .locals 0

    return-void
.end method

.method private static c()V
    .locals 0

    .line 87
    invoke-static {}, Lcom/tkay/expressad/video/dynview/b/b;->a()Lcom/tkay/expressad/video/dynview/b/b;

    invoke-static {}, Lcom/tkay/expressad/video/dynview/b/b;->b()V

    .line 88
    invoke-static {}, Lcom/tkay/expressad/video/dynview/b/a;->a()Lcom/tkay/expressad/video/dynview/b/a;

    invoke-static {}, Lcom/tkay/expressad/video/dynview/b/a;->b()V

    return-void
.end method
