.class public Lcom/tkay/core/common/y;
.super Ljava/lang/Object;


# static fields
.field private static final c:Ljava/lang/String;

.field private static volatile d:Lcom/tkay/core/common/y;


# instance fields
.field a:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/am;",
            ">;"
        }
    .end annotation
.end field

.field b:Landroid/content/Context;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 23
    const-class v0, Lcom/tkay/core/common/y;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/common/y;->c:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 42
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 43
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/y;->b:Landroid/content/Context;

    .line 44
    invoke-direct {p0}, Lcom/tkay/core/common/y;->a()V

    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/tkay/core/common/y;
    .locals 2

    .line 33
    sget-object v0, Lcom/tkay/core/common/y;->d:Lcom/tkay/core/common/y;

    if-nez v0, :cond_1

    .line 34
    const-class v0, Lcom/tkay/core/common/y;

    monitor-enter v0

    .line 35
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/y;->d:Lcom/tkay/core/common/y;

    if-nez v1, :cond_0

    .line 36
    new-instance v1, Lcom/tkay/core/common/y;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/y;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/tkay/core/common/y;->d:Lcom/tkay/core/common/y;

    .line 37
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 39
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/core/common/y;->d:Lcom/tkay/core/common/y;

    return-object p0
.end method

.method private a()V
    .locals 4

    .line 48
    iget-object v0, p0, Lcom/tkay/core/common/y;->a:Ljava/util/Map;

    if-nez v0, :cond_1

    .line 49
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    const/4 v1, 0x5

    invoke-direct {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/core/common/y;->a:Ljava/util/Map;

    .line 56
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/y;->b:Landroid/content/Context;

    const-string v1, "tkay_wt_cache_info"

    invoke-static {v0, v1}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;)Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 58
    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 59
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 60
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    .line 62
    instance-of v3, v1, Ljava/lang/String;

    if-eqz v3, :cond_0

    .line 68
    check-cast v1, Ljava/lang/String;

    invoke-static {v1}, Lcom/tkay/core/common/f/am;->a(Ljava/lang/String;)Lcom/tkay/core/common/f/am;

    move-result-object v1

    .line 69
    iget-object v3, p0, Lcom/tkay/core/common/y;->a:Ljava/util/Map;

    invoke-interface {v3, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    :cond_1
    return-void
.end method

.method private b(Ljava/lang/String;)Lcom/tkay/core/common/f/am;
    .locals 1

    .line 138
    iget-object v0, p0, Lcom/tkay/core/common/y;->a:Ljava/util/Map;

    if-eqz v0, :cond_0

    .line 139
    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/f/am;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private static b()V
    .locals 0

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 3

    .line 146
    iget-object v0, p0, Lcom/tkay/core/common/y;->a:Ljava/util/Map;

    if-nez v0, :cond_0

    return-void

    .line 151
    :cond_0
    :try_start_0
    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/am;

    if-eqz v0, :cond_1

    .line 153
    invoke-virtual {v0}, Lcom/tkay/core/common/f/am;->a()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    .line 159
    iget-object v1, p0, Lcom/tkay/core/common/y;->b:Landroid/content/Context;

    const-string v2, "tkay_wt_cache_info"

    invoke-static {v1, v2, p1, v0}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    return-void

    :catchall_0
    move-exception p1

    .line 162
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/am$a;Lcom/tkay/core/common/f/am$a;)V
    .locals 2

    .line 86
    iget-object v0, p0, Lcom/tkay/core/common/y;->a:Ljava/util/Map;

    if-nez v0, :cond_0

    return-void

    .line 90
    :cond_0
    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/am;

    if-nez v0, :cond_2

    .line 92
    monitor-enter p0

    .line 93
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/y;->a:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/am;

    if-nez v0, :cond_1

    .line 96
    new-instance v0, Lcom/tkay/core/common/f/am;

    invoke-direct {v0}, Lcom/tkay/core/common/f/am;-><init>()V

    .line 97
    invoke-virtual {v0, p2}, Lcom/tkay/core/common/f/am;->b(Ljava/lang/String;)V

    .line 103
    iget-object v1, p0, Lcom/tkay/core/common/y;->a:Ljava/util/Map;

    invoke-interface {v1, p1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 105
    :cond_1
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1

    .line 108
    :cond_2
    :goto_0
    invoke-virtual {v0}, Lcom/tkay/core/common/f/am;->b()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    return-void

    :cond_3
    if-eqz p3, :cond_4

    .line 121
    invoke-virtual {v0, p3}, Lcom/tkay/core/common/f/am;->a(Lcom/tkay/core/common/f/am$a;)V

    .line 124
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    invoke-virtual {v0, p1, p2}, Lcom/tkay/core/common/f/am;->a(J)V

    :cond_4
    if-eqz p4, :cond_5

    .line 133
    invoke-virtual {v0, p4}, Lcom/tkay/core/common/f/am;->b(Lcom/tkay/core/common/f/am$a;)V

    :cond_5
    return-void
.end method
