.class final Lcom/tkay/core/common/x$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/common/x;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/common/x$a$a;
    }
.end annotation


# instance fields
.field a:Ljava/lang/String;

.field b:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/x$a$a;",
            ">;"
        }
    .end annotation
.end field

.field final synthetic c:Lcom/tkay/core/common/x;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/x;)V
    .locals 0

    .line 197
    iput-object p1, p0, Lcom/tkay/core/common/x$a;->c:Lcom/tkay/core/common/x;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 199
    new-instance p1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {p1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object p1, p0, Lcom/tkay/core/common/x$a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method private a(Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation

    .line 226
    iget-object v0, p0, Lcom/tkay/core/common/x$a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/x$a$a;

    if-eqz p1, :cond_0

    .line 1300
    iget-object p1, p1, Lcom/tkay/core/common/x$a$a;->b:Ljava/util/concurrent/CopyOnWriteArrayList;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/core/common/x$a;Ljava/lang/String;)V
    .locals 0

    .line 197
    invoke-direct {p0, p1}, Lcom/tkay/core/common/x$a;->d(Ljava/lang/String;)V

    return-void
.end method

.method private static synthetic a(Lcom/tkay/core/common/x$a;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/util/List;)V
    .locals 1

    .line 5209
    new-instance v0, Lcom/tkay/core/common/x$a$a;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/x$a$a;-><init>(Lcom/tkay/core/common/x$a;)V

    .line 5210
    iput-object p2, v0, Lcom/tkay/core/common/x$a$a;->a:Lcom/tkay/core/c/d;

    .line 5212
    new-instance p2, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {p2}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    .line 5213
    invoke-virtual {p2, p3}, Ljava/util/concurrent/CopyOnWriteArrayList;->addAll(Ljava/util/Collection;)Z

    .line 5214
    iput-object p2, v0, Lcom/tkay/core/common/x$a$a;->b:Ljava/util/concurrent/CopyOnWriteArrayList;

    .line 5216
    iget-object p0, p0, Lcom/tkay/core/common/x$a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p0, p1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method private static synthetic a(Lcom/tkay/core/common/x$a;Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V
    .locals 0

    .line 6248
    iget-object p0, p0, Lcom/tkay/core/common/x$a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/tkay/core/common/x$a$a;

    if-eqz p0, :cond_0

    .line 6250
    invoke-static {p0, p2}, Lcom/tkay/core/common/x$a$a;->a(Lcom/tkay/core/common/x$a$a;Lcom/tkay/core/common/f/aj;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/x$a;Ljava/lang/String;Ljava/util/List;)V
    .locals 0

    .line 6255
    iget-object p0, p0, Lcom/tkay/core/common/x$a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/tkay/core/common/x$a$a;

    if-eqz p0, :cond_0

    .line 6257
    invoke-static {p0, p2}, Lcom/tkay/core/common/x$a$a;->a(Lcom/tkay/core/common/x$a$a;Ljava/util/List;)V

    :cond_0
    return-void
.end method

.method private a(Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Lcom/tkay/core/c/d;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    .line 209
    new-instance v0, Lcom/tkay/core/common/x$a$a;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/x$a$a;-><init>(Lcom/tkay/core/common/x$a;)V

    .line 210
    iput-object p2, v0, Lcom/tkay/core/common/x$a$a;->a:Lcom/tkay/core/c/d;

    .line 212
    new-instance p2, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {p2}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    .line 213
    invoke-virtual {p2, p3}, Ljava/util/concurrent/CopyOnWriteArrayList;->addAll(Ljava/util/Collection;)Z

    .line 214
    iput-object p2, v0, Lcom/tkay/core/common/x$a$a;->b:Ljava/util/concurrent/CopyOnWriteArrayList;

    .line 216
    iget-object p2, p0, Lcom/tkay/core/common/x$a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, p1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method private a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V
    .locals 1

    .line 248
    iget-object v0, p0, Lcom/tkay/core/common/x$a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/x$a$a;

    if-eqz p1, :cond_0

    .line 250
    invoke-static {p1, p2}, Lcom/tkay/core/common/x$a$a;->a(Lcom/tkay/core/common/x$a$a;Lcom/tkay/core/common/f/aj;)V

    :cond_0
    return-void
.end method

.method private a(Ljava/lang/String;Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    .line 255
    iget-object v0, p0, Lcom/tkay/core/common/x$a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/x$a$a;

    if-eqz p1, :cond_0

    .line 257
    invoke-static {p1, p2}, Lcom/tkay/core/common/x$a$a;->a(Lcom/tkay/core/common/x$a$a;Ljava/util/List;)V

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/tkay/core/common/x$a;Ljava/lang/String;)V
    .locals 0

    .line 5267
    iget-object p0, p0, Lcom/tkay/core/common/x$a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/tkay/core/common/x$a$a;

    if-eqz p0, :cond_0

    .line 5269
    invoke-static {p0}, Lcom/tkay/core/common/x$a$a;->a(Lcom/tkay/core/common/x$a$a;)V

    :cond_0
    return-void
.end method

.method private b(Ljava/lang/String;)Z
    .locals 1

    .line 237
    iget-object v0, p0, Lcom/tkay/core/common/x$a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/x$a$a;

    if-eqz p1, :cond_0

    .line 2346
    iget-boolean p1, p1, Lcom/tkay/core/common/x$a$a;->c:Z

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method static synthetic c(Lcom/tkay/core/common/x$a;Ljava/lang/String;)Ljava/util/List;
    .locals 0

    .line 7226
    iget-object p0, p0, Lcom/tkay/core/common/x$a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/tkay/core/common/x$a$a;

    if-eqz p0, :cond_0

    .line 7300
    iget-object p0, p0, Lcom/tkay/core/common/x$a$a;->b:Ljava/util/concurrent/CopyOnWriteArrayList;

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private c(Ljava/lang/String;)V
    .locals 1

    .line 267
    iget-object v0, p0, Lcom/tkay/core/common/x$a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/x$a$a;

    if-eqz p1, :cond_0

    .line 269
    invoke-static {p1}, Lcom/tkay/core/common/x$a$a;->a(Lcom/tkay/core/common/x$a$a;)V

    :cond_0
    return-void
.end method

.method private declared-synchronized d(Ljava/lang/String;)V
    .locals 3

    monitor-enter p0

    .line 277
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/x$a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 278
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 279
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 280
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 282
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 283
    iget-object v2, p0, Lcom/tkay/core/common/x$a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v2, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/x$a$a;

    .line 3346
    iget-boolean v2, v2, Lcom/tkay/core/common/x$a$a;->c:Z

    if-eqz v2, :cond_0

    .line 284
    invoke-static {p1, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 285
    invoke-interface {v0}, Ljava/util/Iterator;->remove()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 289
    :cond_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private static synthetic d(Lcom/tkay/core/common/x$a;Ljava/lang/String;)Z
    .locals 0

    .line 4237
    iget-object p0, p0, Lcom/tkay/core/common/x$a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/tkay/core/common/x$a$a;

    if-eqz p0, :cond_0

    .line 4346
    iget-boolean p0, p0, Lcom/tkay/core/common/x$a$a;->c:Z

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method
