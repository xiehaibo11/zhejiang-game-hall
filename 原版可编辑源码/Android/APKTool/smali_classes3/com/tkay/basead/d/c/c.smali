.class public Lcom/tkay/basead/d/c/c;
.super Ljava/lang/Object;


# static fields
.field private static volatile b:Lcom/tkay/basead/d/c/c;


# instance fields
.field a:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 33
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/basead/d/c/c;->a:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method public static a()Lcom/tkay/basead/d/c/c;
    .locals 2

    .line 37
    sget-object v0, Lcom/tkay/basead/d/c/c;->b:Lcom/tkay/basead/d/c/c;

    if-nez v0, :cond_1

    .line 38
    const-class v0, Lcom/tkay/basead/d/c/c;

    monitor-enter v0

    .line 39
    :try_start_0
    sget-object v1, Lcom/tkay/basead/d/c/c;->b:Lcom/tkay/basead/d/c/c;

    if-nez v1, :cond_0

    .line 40
    new-instance v1, Lcom/tkay/basead/d/c/c;

    invoke-direct {v1}, Lcom/tkay/basead/d/c/c;-><init>()V

    sput-object v1, Lcom/tkay/basead/d/c/c;->b:Lcom/tkay/basead/d/c/c;

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
    sget-object v0, Lcom/tkay/basead/d/c/c;->b:Lcom/tkay/basead/d/c/c;

    return-object v0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 111
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public final declared-synchronized a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/j;)V
    .locals 5

    monitor-enter p0

    .line 48
    :try_start_0
    invoke-virtual {p3}, Lcom/tkay/core/common/f/h;->d()I

    move-result v0

    const/4 v1, 0x3

    if-ne v0, v1, :cond_4

    instance-of v0, p4, Lcom/tkay/core/common/f/aa;

    if-eqz v0, :cond_4

    .line 49
    move-object v0, p4

    check-cast v0, Lcom/tkay/core/common/f/aa;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/aa;->X()I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-gtz v0, :cond_0

    .line 50
    monitor-exit p0

    return-void

    .line 53
    :cond_0
    :try_start_1
    check-cast p4, Lcom/tkay/core/common/f/aa;

    .line 54
    iget-object v0, p0, Lcom/tkay/basead/d/c/c;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p2}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;

    const/4 v1, 0x0

    if-nez v0, :cond_2

    .line 56
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const-string v2, "tkayown_offerid_impression"

    const-string v3, ""

    .line 57
    invoke-static {p1, v2, p2, v3}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 59
    :try_start_2
    new-instance v3, Lorg/json/JSONArray;

    invoke-direct {v3, v2}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 60
    invoke-virtual {v3}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-lez v2, :cond_1

    move v2, v1

    .line 61
    :goto_0
    invoke-virtual {v3}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-ge v2, v4, :cond_1

    .line 62
    invoke-virtual {v3, v2}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 68
    :catch_0
    :cond_1
    :try_start_3
    iget-object v2, p0, Lcom/tkay/basead/d/c/c;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v2, p2, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 71
    :cond_2
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v2

    invoke-virtual {p4}, Lcom/tkay/core/common/f/aa;->X()I

    move-result p4

    if-lt v2, p4, :cond_3

    .line 72
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result p4

    add-int/lit8 p4, p4, -0x1

    invoke-virtual {v0, p4}, Ljava/util/ArrayList;->remove(I)Ljava/lang/Object;

    .line 75
    :cond_3
    invoke-virtual {p3}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, v1, p3}, Ljava/util/ArrayList;->add(ILjava/lang/Object;)V

    .line 76
    new-instance p3, Lorg/json/JSONArray;

    invoke-direct {p3, v0}, Lorg/json/JSONArray;-><init>(Ljava/util/Collection;)V

    const-string p4, "tkayown_offerid_impression"

    .line 78
    invoke-virtual {p3}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p1, p4, p2, p3}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 81
    :cond_4
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Landroid/content/Context;Ljava/lang/String;)[Ljava/lang/String;
    .locals 3

    .line 84
    iget-object v0, p0, Lcom/tkay/basead/d/c/c;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p2}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;

    if-nez v0, :cond_1

    const-string v1, "tkayown_offerid_impression"

    const-string v2, ""

    .line 86
    invoke-static {p1, v1, p2, v2}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 88
    :try_start_0
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1, p1}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 89
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result p1

    if-lez p1, :cond_1

    .line 90
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    const/4 v0, 0x0

    .line 91
    :goto_0
    :try_start_1
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v0, v2, :cond_0

    .line 92
    invoke-virtual {v1, v0}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :catch_0
    :cond_0
    move-object v0, p1

    :catch_1
    :cond_1
    if-eqz v0, :cond_2

    .line 101
    iget-object p1, p0, Lcom/tkay/basead/d/c/c;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1, p2, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 102
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result p1

    new-array p1, p1, [Ljava/lang/String;

    .line 103
    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    return-object p1

    :cond_2
    const/4 p1, 0x0

    return-object p1
.end method
