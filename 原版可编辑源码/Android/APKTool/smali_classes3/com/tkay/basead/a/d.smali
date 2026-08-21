.class public Lcom/tkay/basead/a/d;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String;

.field private static volatile c:Lcom/tkay/basead/a/d;


# instance fields
.field b:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/basead/c/d;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 19
    const-class v0, Lcom/tkay/basead/a/d;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/basead/a/d;->a:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 25
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/basead/a/d;->b:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method public static a()Lcom/tkay/basead/a/d;
    .locals 2

    .line 29
    sget-object v0, Lcom/tkay/basead/a/d;->c:Lcom/tkay/basead/a/d;

    if-nez v0, :cond_1

    .line 30
    const-class v0, Lcom/tkay/basead/a/d;

    monitor-enter v0

    .line 31
    :try_start_0
    sget-object v1, Lcom/tkay/basead/a/d;->c:Lcom/tkay/basead/a/d;

    if-nez v1, :cond_0

    .line 32
    new-instance v1, Lcom/tkay/basead/a/d;

    invoke-direct {v1}, Lcom/tkay/basead/a/d;-><init>()V

    sput-object v1, Lcom/tkay/basead/a/d;->c:Lcom/tkay/basead/a/d;

    .line 33
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 35
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/basead/a/d;->c:Lcom/tkay/basead/a/d;

    return-object v0
.end method


# virtual methods
.method public final a(ILjava/lang/String;)Lcom/tkay/basead/c/d;
    .locals 2

    .line 43
    iget-object v0, p0, Lcom/tkay/basead/a/d;->b:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/basead/c/d;

    return-object p1
.end method

.method public final a(ILjava/lang/String;Lcom/tkay/basead/c/d;)V
    .locals 2

    .line 39
    iget-object v0, p0, Lcom/tkay/basead/a/d;->b:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, p3}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method
