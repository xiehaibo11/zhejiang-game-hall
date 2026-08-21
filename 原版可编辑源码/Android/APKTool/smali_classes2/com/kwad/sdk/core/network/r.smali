.class public Lcom/kwad/sdk/core/network/r;
.super Ljava/lang/Object;


# static fields
.field private static volatile apL:Lcom/kwad/sdk/core/network/r;


# instance fields
.field private final aou:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/network/r;->aou:Ljava/util/Map;

    return-void
.end method

.method public static Bk()Lcom/kwad/sdk/core/network/r;
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/network/r;->apL:Lcom/kwad/sdk/core/network/r;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/sdk/core/network/r;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/sdk/core/network/r;->apL:Lcom/kwad/sdk/core/network/r;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/sdk/core/network/r;

    invoke-direct {v1}, Lcom/kwad/sdk/core/network/r;-><init>()V

    sput-object v1, Lcom/kwad/sdk/core/network/r;->apL:Lcom/kwad/sdk/core/network/r;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_1
    :goto_0
    sget-object v0, Lcom/kwad/sdk/core/network/r;->apL:Lcom/kwad/sdk/core/network/r;

    return-object v0
.end method


# virtual methods
.method public final N(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/network/r;->aou:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    :goto_0
    return-void
.end method

.method public final cZ(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/r;->aou:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    return-object p1
.end method
