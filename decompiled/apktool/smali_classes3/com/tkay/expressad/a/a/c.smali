.class public final Lcom/tkay/expressad/a/a/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/a/e;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/tkay/expressad/foundation/g/a/e<",
        "Ljava/lang/String;",
        "Lcom/tkay/expressad/a/a/b;",
        ">;"
    }
.end annotation


# instance fields
.field private final a:Ljava/util/LinkedHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/a/a/b;",
            ">;"
        }
    .end annotation
.end field

.field private final b:I

.field private c:I


# direct methods
.method public constructor <init>(I)V
    .locals 3

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    if-lez p1, :cond_0

    .line 23
    iput p1, p0, Lcom/tkay/expressad/a/a/c;->b:I

    .line 24
    new-instance p1, Ljava/util/LinkedHashMap;

    const/4 v0, 0x0

    const/high16 v1, 0x3f400000    # 0.75f

    const/4 v2, 0x1

    invoke-direct {p1, v0, v1, v2}, Ljava/util/LinkedHashMap;-><init>(IFZ)V

    iput-object p1, p0, Lcom/tkay/expressad/a/a/c;->a:Ljava/util/LinkedHashMap;

    return-void

    .line 21
    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "maxSize <= 0"

    invoke-direct {p1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private a(I)V
    .locals 2

    .line 62
    :goto_0
    monitor-enter p0

    .line 63
    :try_start_0
    iget v0, p0, Lcom/tkay/expressad/a/a/c;->c:I

    if-ltz v0, :cond_4

    iget-object v0, p0, Lcom/tkay/expressad/a/a/c;->a:Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/tkay/expressad/a/a/c;->c:I

    if-nez v0, :cond_4

    .line 67
    :cond_0
    iget v0, p0, Lcom/tkay/expressad/a/a/c;->c:I

    if-le v0, p1, :cond_3

    iget-object v0, p0, Lcom/tkay/expressad/a/a/c;->a:Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_1

    .line 71
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/a/a/c;->a:Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    if-nez v0, :cond_2

    .line 73
    monitor-exit p0

    return-void

    .line 75
    :cond_2
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 76
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 79
    :try_start_1
    iget-object v0, p0, Lcom/tkay/expressad/a/a/c;->a:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, v1}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 80
    iget v0, p0, Lcom/tkay/expressad/a/a/c;->c:I

    add-int/lit8 v0, v0, -0x1

    iput v0, p0, Lcom/tkay/expressad/a/a/c;->c:I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 84
    :catchall_0
    :try_start_2
    monitor-exit p0

    goto :goto_0

    .line 68
    :cond_3
    :goto_1
    monitor-exit p0

    return-void

    .line 64
    :cond_4
    new-instance p1, Ljava/lang/IllegalStateException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ".sizeOf() is reporting inconsistent results!"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    move-exception p1

    .line 84
    monitor-exit p0

    throw p1
.end method

.method private static c()I
    .locals 1

    const/4 v0, 0x1

    return v0
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Lcom/tkay/expressad/a/a/b;
    .locals 1

    if-eqz p1, :cond_1

    .line 32
    monitor-enter p0

    .line 33
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/a/a/c;->a:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/a/a/b;

    if-eqz p1, :cond_0

    .line 35
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    .line 37
    :cond_0
    monitor-exit p0

    const/4 p1, 0x0

    return-object p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1

    .line 30
    :cond_1
    new-instance p1, Ljava/lang/NullPointerException;

    const-string v0, "key == null"

    invoke-direct {p1, v0}, Ljava/lang/NullPointerException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public final a()Ljava/util/Collection;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Collection<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 104
    monitor-enter p0

    .line 105
    :try_start_0
    new-instance v0, Ljava/util/HashSet;

    iget-object v1, p0, Lcom/tkay/expressad/a/a/c;->a:Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/util/HashSet;-><init>(Ljava/util/Collection;)V

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception v0

    .line 106
    monitor-exit p0

    throw v0
.end method

.method public final synthetic a(Ljava/lang/Object;)V
    .locals 0

    .line 12
    check-cast p1, Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/a/a/c;->b(Ljava/lang/String;)V

    return-void
.end method

.method public final bridge synthetic a(Ljava/lang/Object;Ljava/lang/Object;)Z
    .locals 0

    .line 12
    check-cast p1, Ljava/lang/String;

    check-cast p2, Lcom/tkay/expressad/a/a/b;

    invoke-virtual {p0, p1, p2}, Lcom/tkay/expressad/a/a/c;->a(Ljava/lang/String;Lcom/tkay/expressad/a/a/b;)Z

    move-result p1

    return p1
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/expressad/a/a/b;)Z
    .locals 2

    if-eqz p1, :cond_1

    if-eqz p2, :cond_1

    .line 47
    monitor-enter p0

    .line 48
    :try_start_0
    iget v0, p0, Lcom/tkay/expressad/a/a/c;->c:I

    const/4 v1, 0x1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/tkay/expressad/a/a/c;->c:I

    .line 49
    iget-object v0, p0, Lcom/tkay/expressad/a/a/c;->a:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1, p2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/a/a/b;

    if-eqz p1, :cond_0

    .line 51
    iget p1, p0, Lcom/tkay/expressad/a/a/c;->c:I

    sub-int/2addr p1, v1

    iput p1, p0, Lcom/tkay/expressad/a/a/c;->c:I

    .line 53
    :cond_0
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 54
    iget p1, p0, Lcom/tkay/expressad/a/a/c;->b:I

    invoke-direct {p0, p1}, Lcom/tkay/expressad/a/a/c;->a(I)V

    return v1

    :catchall_0
    move-exception p1

    .line 53
    monitor-exit p0

    throw p1

    .line 44
    :cond_1
    new-instance p1, Ljava/lang/NullPointerException;

    const-string p2, "key == null || value == null"

    invoke-direct {p1, p2}, Ljava/lang/NullPointerException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public final synthetic b(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 12
    check-cast p1, Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/a/a/c;->a(Ljava/lang/String;)Lcom/tkay/expressad/a/a/b;

    move-result-object p1

    return-object p1
.end method

.method public final b()V
    .locals 1

    const/4 v0, -0x1

    .line 111
    invoke-direct {p0, v0}, Lcom/tkay/expressad/a/a/c;->a(I)V

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 1

    if-eqz p1, :cond_1

    .line 94
    monitor-enter p0

    .line 95
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/a/a/c;->a:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/a/a/b;

    if-eqz p1, :cond_0

    .line 97
    iget p1, p0, Lcom/tkay/expressad/a/a/c;->c:I

    add-int/lit8 p1, p1, -0x1

    iput p1, p0, Lcom/tkay/expressad/a/a/c;->c:I

    .line 99
    :cond_0
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1

    .line 91
    :cond_1
    new-instance p1, Ljava/lang/NullPointerException;

    const-string v0, "key == null"

    invoke-direct {p1, v0}, Ljava/lang/NullPointerException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public final declared-synchronized toString()Ljava/lang/String;
    .locals 4

    monitor-enter p0

    :try_start_0
    const-string v0, "LruCache[maxSize=%d]"

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    .line 120
    iget v3, p0, Lcom/tkay/expressad/a/a/c;->b:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    invoke-static {v0, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method
