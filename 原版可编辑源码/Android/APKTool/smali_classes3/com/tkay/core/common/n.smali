.class public Lcom/tkay/core/common/n;
.super Ljava/lang/Object;


# static fields
.field private static volatile c:Lcom/tkay/core/common/n;


# instance fields
.field a:Lcom/tkay/core/common/c/h;

.field private final b:Ljava/lang/String;

.field private d:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 4

    .line 46
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 29
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/n;->b:Ljava/lang/String;

    .line 34
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    const/4 v1, 0x3

    invoke-direct {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/core/common/n;->d:Ljava/util/concurrent/ConcurrentHashMap;

    .line 48
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/h;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/h;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/n;->a:Lcom/tkay/core/common/c/h;

    .line 49
    invoke-virtual {v0}, Lcom/tkay/core/common/c/h;->d()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 51
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/o;

    .line 52
    iget-object v2, p0, Lcom/tkay/core/common/n;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/o;->a()Ljava/lang/String;

    move-result-object v1

    const-string v3, "1"

    invoke-virtual {v2, v1, v3}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_0
    return-void
.end method

.method public static a()Lcom/tkay/core/common/n;
    .locals 2

    .line 37
    sget-object v0, Lcom/tkay/core/common/n;->c:Lcom/tkay/core/common/n;

    if-nez v0, :cond_1

    .line 38
    const-class v0, Lcom/tkay/core/common/n;

    monitor-enter v0

    .line 39
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/n;->c:Lcom/tkay/core/common/n;

    if-nez v1, :cond_0

    .line 40
    new-instance v1, Lcom/tkay/core/common/n;

    invoke-direct {v1}, Lcom/tkay/core/common/n;-><init>()V

    sput-object v1, Lcom/tkay/core/common/n;->c:Lcom/tkay/core/common/n;

    .line 41
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 43
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/core/common/n;->c:Lcom/tkay/core/common/n;

    return-object v0
.end method

.method public static b()I
    .locals 4

    .line 129
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    const-string v1, "tkay_sdk"

    const-string v2, "SPU_INSPECT_INFO_OFFSET"

    const/4 v3, 0x0

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;I)I

    move-result v0

    return v0
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 7

    .line 69
    invoke-static {p1}, Lcom/tkay/core/common/l/c;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 75
    invoke-static {p1}, Lcom/tkay/core/common/l/h;->c(Ljava/lang/String;)Ljava/util/Map;

    move-result-object p1

    .line 77
    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result v0

    const-string v1, "SPU_INSPECT_INFO_OFFSET"

    const-string v2, "tkay_sdk"

    if-nez v0, :cond_0

    .line 81
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    const/4 v0, 0x0

    invoke-static {p1, v2, v1, v0}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;I)V

    return-void

    .line 86
    :cond_0
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 87
    :catchall_0
    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    .line 88
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map$Entry;

    .line 90
    :try_start_0
    invoke-interface {v3}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    .line 91
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 96
    iget-object v4, p0, Lcom/tkay/core/common/n;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-interface {v3}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    const-string v6, "1"

    invoke-virtual {v4, v5, v6}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 98
    iget-object v4, p0, Lcom/tkay/core/common/n;->a:Lcom/tkay/core/common/c/h;

    invoke-interface {v3}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v4, v3}, Lcom/tkay/core/common/c/h;->a(Ljava/lang/String;)J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 111
    :cond_2
    invoke-static {}, Lcom/tkay/core/common/n;->b()I

    move-result v0

    .line 112
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v3

    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result p1

    add-int/2addr v0, p1

    invoke-static {v3, v2, v1, v0}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;I)V

    .line 116
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object p1

    new-instance v0, Lcom/tkay/core/common/n$1;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/n$1;-><init>(Lcom/tkay/core/common/n;)V

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final c()Lorg/json/JSONArray;
    .locals 4

    .line 133
    iget-object v0, p0, Lcom/tkay/core/common/n;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 134
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    .line 135
    :catchall_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 136
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 138
    :try_start_0
    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-static {v2}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONArray;->put(J)Lorg/json/JSONArray;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_0
    return-object v1
.end method
