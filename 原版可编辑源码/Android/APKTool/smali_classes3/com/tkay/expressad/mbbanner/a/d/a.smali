.class public Lcom/tkay/expressad/mbbanner/a/d/a;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String;

.field private static volatile h:Lcom/tkay/expressad/mbbanner/a/d/a;


# instance fields
.field private b:Landroid/content/Context;

.field private c:Lcom/tkay/expressad/mbbanner/a/e/a;

.field private d:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/mbbanner/a/b/e;",
            ">;"
        }
    .end annotation
.end field

.field private e:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field

.field private f:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Landroid/os/Handler;",
            ">;"
        }
    .end annotation
.end field

.field private g:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 25
    const-class v0, Lcom/tkay/expressad/mbbanner/a/d/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/mbbanner/a/d/a;->a:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 67
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 27
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->b:Landroid/content/Context;

    .line 28
    new-instance v0, Lcom/tkay/expressad/mbbanner/a/e/a;

    invoke-direct {v0}, Lcom/tkay/expressad/mbbanner/a/e/a;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->c:Lcom/tkay/expressad/mbbanner/a/e/a;

    .line 34
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->d:Ljava/util/Map;

    .line 40
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->e:Ljava/util/Map;

    .line 46
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->f:Ljava/util/Map;

    .line 51
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->g:Ljava/util/Map;

    return-void
.end method

.method public static a()Lcom/tkay/expressad/mbbanner/a/d/a;
    .locals 2

    .line 57
    sget-object v0, Lcom/tkay/expressad/mbbanner/a/d/a;->h:Lcom/tkay/expressad/mbbanner/a/d/a;

    if-nez v0, :cond_1

    .line 58
    const-class v0, Lcom/tkay/expressad/mbbanner/a/d/a;

    monitor-enter v0

    .line 59
    :try_start_0
    sget-object v1, Lcom/tkay/expressad/mbbanner/a/d/a;->h:Lcom/tkay/expressad/mbbanner/a/d/a;

    if-nez v1, :cond_0

    .line 60
    new-instance v1, Lcom/tkay/expressad/mbbanner/a/d/a;

    invoke-direct {v1}, Lcom/tkay/expressad/mbbanner/a/d/a;-><init>()V

    sput-object v1, Lcom/tkay/expressad/mbbanner/a/d/a;->h:Lcom/tkay/expressad/mbbanner/a/d/a;

    .line 62
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 64
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/expressad/mbbanner/a/d/a;->h:Lcom/tkay/expressad/mbbanner/a/d/a;

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/expressad/mbbanner/a/d/a;)Ljava/util/Map;
    .locals 0

    .line 24
    iget-object p0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->e:Ljava/util/Map;

    return-object p0
.end method

.method private a(Ljava/lang/String;Lcom/tkay/expressad/mbbanner/a/b/d;Lcom/tkay/expressad/mbbanner/a/c/b;)V
    .locals 2

    .line 81
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->b:Landroid/content/Context;

    if-nez v0, :cond_0

    .line 82
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->c:Lcom/tkay/expressad/mbbanner/a/e/a;

    const-string v0, "Banner Context == null!"

    invoke-virtual {p2, p3, v0, p1}, Lcom/tkay/expressad/mbbanner/a/e/a;->a(Lcom/tkay/expressad/mbbanner/a/c/b;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    if-eqz p2, :cond_3

    if-nez p3, :cond_1

    goto :goto_0

    .line 93
    :cond_1
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->e:Ljava/util/Map;

    if-eqz p2, :cond_2

    invoke-interface {p2, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_2

    .line 94
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->e:Ljava/util/Map;

    invoke-interface {p2, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/Boolean;

    invoke-virtual {p2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p2

    if-eqz p2, :cond_2

    .line 96
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->c:Lcom/tkay/expressad/mbbanner/a/e/a;

    const-string v0, "Current unit is loading!"

    invoke-virtual {p2, p3, v0, p1}, Lcom/tkay/expressad/mbbanner/a/e/a;->a(Lcom/tkay/expressad/mbbanner/a/c/b;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 104
    :cond_2
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->e:Ljava/util/Map;

    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-interface {p2, p1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 107
    invoke-direct {p0, p1}, Lcom/tkay/expressad/mbbanner/a/d/a;->b(Ljava/lang/String;)Lcom/tkay/expressad/mbbanner/a/b/e;

    move-result-object p1

    .line 108
    new-instance p2, Lcom/tkay/expressad/mbbanner/a/d/b;

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->b:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->c:Lcom/tkay/expressad/mbbanner/a/e/a;

    invoke-direct {p2, v0, p1, p3, v1}, Lcom/tkay/expressad/mbbanner/a/d/b;-><init>(Landroid/content/Context;Lcom/tkay/expressad/mbbanner/a/b/e;Lcom/tkay/expressad/mbbanner/a/c/b;Lcom/tkay/expressad/mbbanner/a/e/a;)V

    return-void

    .line 88
    :cond_3
    :goto_0
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->c:Lcom/tkay/expressad/mbbanner/a/e/a;

    const-string v0, "Banner request parameters or callback empty!"

    invoke-virtual {p2, p3, v0, p1}, Lcom/tkay/expressad/mbbanner/a/e/a;->a(Lcom/tkay/expressad/mbbanner/a/c/b;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private b(Ljava/lang/String;)Lcom/tkay/expressad/mbbanner/a/b/e;
    .locals 3

    .line 165
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->d:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 166
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->d:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/mbbanner/a/b/e;

    goto :goto_0

    .line 168
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v0

    .line 169
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {v0, p1}, Lcom/tkay/expressad/d/b;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v0

    if-nez v0, :cond_1

    .line 171
    invoke-static {p1}, Lcom/tkay/expressad/d/c;->c(Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v0

    .line 173
    :cond_1
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->t()I

    move-result v0

    mul-int/lit8 v0, v0, 0x1

    .line 175
    new-instance v1, Lcom/tkay/expressad/mbbanner/a/b/e;

    const-string v2, ""

    invoke-direct {v1, p1, v2, v0}, Lcom/tkay/expressad/mbbanner/a/b/e;-><init>(Ljava/lang/String;Ljava/lang/String;I)V

    .line 176
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->d:Ljava/util/Map;

    invoke-interface {v0, p1, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-object p1, v1

    :goto_0
    return-object p1
.end method


# virtual methods
.method public final a(ILjava/lang/String;)V
    .locals 7

    .line 259
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->g:Ljava/util/Map;

    invoke-interface {v0, p2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 260
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->g:Ljava/util/Map;

    invoke-interface {v0, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eq p1, v3, :cond_9

    const/4 v4, 0x2

    if-eq p1, v4, :cond_6

    const/4 v5, 0x3

    const/4 v6, 0x4

    if-eq p1, v5, :cond_4

    if-eq p1, v6, :cond_1

    goto :goto_1

    :cond_1
    if-nez v0, :cond_2

    .line 292
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->g:Ljava/util/Map;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-interface {p1, p2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void

    .line 294
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->f:Ljava/util/Map;

    invoke-interface {v0, p2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 295
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->f:Ljava/util/Map;

    invoke-interface {v0, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/Handler;

    .line 296
    invoke-virtual {v0, v2}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    .line 298
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->g:Ljava/util/Map;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {v0, p2, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_1

    :cond_4
    if-eq v0, v4, :cond_5

    if-ne v0, v6, :cond_8

    .line 277
    :cond_5
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->g:Ljava/util/Map;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-interface {p1, p2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void

    :cond_6
    if-ne v0, v3, :cond_8

    .line 267
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->f:Ljava/util/Map;

    invoke-interface {v0, p2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 268
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->f:Ljava/util/Map;

    invoke-interface {v0, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/Handler;

    .line 269
    invoke-virtual {v0, v2}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    .line 271
    :cond_7
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->g:Ljava/util/Map;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {v0, p2, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_8
    :goto_1
    return-void

    .line 282
    :cond_9
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->f:Ljava/util/Map;

    invoke-interface {v0, p2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_a

    .line 283
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->f:Ljava/util/Map;

    invoke-interface {v0, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/Handler;

    .line 284
    invoke-virtual {v0, v2}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    .line 287
    :cond_a
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->g:Ljava/util/Map;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {v0, p2, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 238
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->f:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 239
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->f:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/Handler;

    const/4 v1, 0x0

    .line 240
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    .line 241
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->f:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/expressad/mbbanner/a/c/b;)V
    .locals 5

    .line 127
    invoke-static {}, Lcom/tkay/expressad/mbbanner/a/d/a;->a()Lcom/tkay/expressad/mbbanner/a/d/a;

    move-result-object v0

    monitor-enter v0

    .line 128
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->e:Ljava/util/Map;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->e:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 129
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->e:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 131
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->c:Lcom/tkay/expressad/mbbanner/a/e/a;

    const-string v1, "Current unit is loading!"

    invoke-virtual {p2, p3, v1, p1}, Lcom/tkay/expressad/mbbanner/a/e/a;->a(Lcom/tkay/expressad/mbbanner/a/c/b;Ljava/lang/String;Ljava/lang/String;)V

    .line 133
    monitor-exit v0

    return-void

    .line 138
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->e:Ljava/util/Map;

    sget-object v2, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-interface {v1, p1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 141
    invoke-direct {p0, p1}, Lcom/tkay/expressad/mbbanner/a/d/a;->b(Ljava/lang/String;)Lcom/tkay/expressad/mbbanner/a/b/e;

    move-result-object v1

    .line 142
    new-instance v2, Lcom/tkay/expressad/mbbanner/a/d/b;

    iget-object v3, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->b:Landroid/content/Context;

    iget-object v4, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->c:Lcom/tkay/expressad/mbbanner/a/e/a;

    invoke-direct {v2, v3, v1, p3, v4}, Lcom/tkay/expressad/mbbanner/a/d/b;-><init>(Landroid/content/Context;Lcom/tkay/expressad/mbbanner/a/b/e;Lcom/tkay/expressad/mbbanner/a/c/b;Lcom/tkay/expressad/mbbanner/a/e/a;)V

    .line 144
    new-instance p3, Lcom/tkay/expressad/mbbanner/a/d/a$1;

    invoke-direct {p3, p0}, Lcom/tkay/expressad/mbbanner/a/d/a$1;-><init>(Lcom/tkay/expressad/mbbanner/a/d/a;)V

    invoke-virtual {v2, p1, p2, p3}, Lcom/tkay/expressad/mbbanner/a/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/expressad/mbbanner/a/c/d;)V

    .line 153
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0

    throw p1
.end method

.method public final b()V
    .locals 3

    .line 309
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->d:Ljava/util/Map;

    if-eqz v0, :cond_0

    .line 310
    invoke-interface {v0}, Ljava/util/Map;->clear()V

    .line 313
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->e:Ljava/util/Map;

    if-eqz v0, :cond_1

    .line 314
    invoke-interface {v0}, Ljava/util/Map;->clear()V

    .line 317
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->f:Ljava/util/Map;

    if-eqz v0, :cond_4

    .line 318
    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_2
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 319
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 320
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/os/Handler;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    goto :goto_0

    .line 323
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->f:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    .line 326
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/a;->g:Ljava/util/Map;

    if-eqz v0, :cond_5

    .line 327
    invoke-interface {v0}, Ljava/util/Map;->clear()V

    :cond_5
    return-void
.end method
