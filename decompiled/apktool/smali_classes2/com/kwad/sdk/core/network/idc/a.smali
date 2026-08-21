.class public final Lcom/kwad/sdk/core/network/idc/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/network/idc/a$a;
    }
.end annotation


# instance fields
.field private final apS:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private final apT:Lcom/kwad/sdk/core/network/idc/a/a;

.field private final apU:Ljava/util/Random;

.field private final apV:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/concurrent/atomic/AtomicBoolean;",
            ">;"
        }
    .end annotation
.end field

.field private mContext:Landroid/content/Context;


# direct methods
.method private constructor <init>()V
    .locals 4

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    const/16 v1, 0x8

    invoke-direct {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object v0, p0, Lcom/kwad/sdk/core/network/idc/a;->apS:Ljava/util/Map;

    new-instance v0, Lcom/kwad/sdk/core/network/idc/a/a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/network/idc/a/a;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/network/idc/a;->apT:Lcom/kwad/sdk/core/network/idc/a/a;

    new-instance v0, Ljava/util/Random;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-direct {v0, v1, v2}, Ljava/util/Random;-><init>(J)V

    iput-object v0, p0, Lcom/kwad/sdk/core/network/idc/a;->apU:Ljava/util/Random;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/network/idc/a;->apV:Ljava/util/Map;

    new-instance v1, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v2, 0x0

    invoke-direct {v1, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    const-string v3, "api"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v0, p0, Lcom/kwad/sdk/core/network/idc/a;->apV:Ljava/util/Map;

    new-instance v1, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v1, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    const-string v3, "ulog"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v0, p0, Lcom/kwad/sdk/core/network/idc/a;->apV:Ljava/util/Map;

    new-instance v1, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v1, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    const-string v3, "zt"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v0, p0, Lcom/kwad/sdk/core/network/idc/a;->apV:Ljava/util/Map;

    new-instance v1, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v1, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    const-string v2, "cdn"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/idc/a;-><init>()V

    return-void
.end method

.method public static Bo()Lcom/kwad/sdk/core/network/idc/a;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/core/network/idc/a$a;->Bq()Lcom/kwad/sdk/core/network/idc/a;

    move-result-object v0

    return-object v0
.end method

.method private Bp()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/network/idc/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/core/network/idc/b;->aY(Landroid/content/Context;)Lcom/kwad/sdk/core/network/idc/a/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/network/idc/a/a;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/network/idc/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/core/network/idc/b;->aX(Landroid/content/Context;)Lcom/kwad/sdk/core/network/idc/a/a;

    move-result-object v0

    :cond_0
    iget-object v1, p0, Lcom/kwad/sdk/core/network/idc/a;->apT:Lcom/kwad/sdk/core/network/idc/a/a;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/network/idc/a/a;->b(Lcom/kwad/sdk/core/network/idc/a/a;)V

    return-void
.end method

.method private O(Ljava/lang/String;Ljava/lang/String;)V
    .locals 11

    const-string v0, "<<< switchHost end, type = "

    iget-object v1, p0, Lcom/kwad/sdk/core/network/idc/a;->apT:Lcom/kwad/sdk/core/network/idc/a/a;

    invoke-virtual {v1, p2}, Lcom/kwad/sdk/core/network/idc/a/a;->dd(Ljava/lang/String;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_0

    return-void

    :cond_0
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-virtual {p1}, Landroid/net/Uri;->getHost()Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_8

    invoke-virtual {p1}, Ljava/lang/String;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_1

    goto/16 :goto_3

    :cond_1
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, ">>> switchHost start, type = "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ", old host = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v4, "IdcManager"

    invoke-static {v4, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v2, p0, Lcom/kwad/sdk/core/network/idc/a;->apV:Ljava/util/Map;

    invoke-interface {v2, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v5, 0x1

    const/4 v6, 0x0

    invoke-virtual {v2, v6, v5}, Ljava/util/concurrent/atomic/AtomicBoolean;->compareAndSet(ZZ)Z

    move-result v7

    if-eqz v7, :cond_8

    :try_start_0
    invoke-direct {p0, p2}, Lcom/kwad/sdk/core/network/idc/a;->db(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_2

    invoke-virtual {p1, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v7, :cond_2

    move v7, v5

    goto :goto_0

    :cond_2
    move v7, v6

    :goto_0
    if-eqz v7, :cond_3

    invoke-virtual {v2, v6}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    :goto_1
    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v4, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_3
    :try_start_1
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v7

    invoke-interface {v1, p1}, Ljava/util/List;->indexOf(Ljava/lang/Object;)I

    move-result v8
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-ltz v8, :cond_4

    move v9, v5

    goto :goto_2

    :cond_4
    move v9, v6

    :goto_2
    if-eqz v9, :cond_5

    add-int/lit8 v7, v7, -0x1

    :cond_5
    if-gtz v7, :cond_6

    invoke-virtual {v2, v6}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    goto :goto_1

    :cond_6
    :try_start_2
    iget-object v10, p0, Lcom/kwad/sdk/core/network/idc/a;->apU:Ljava/util/Random;

    invoke-virtual {v10, v7}, Ljava/util/Random;->nextInt(I)I

    move-result v7

    add-int/2addr v7, v5

    if-eqz v9, :cond_7

    add-int/2addr v7, v8

    :cond_7
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v5

    rem-int/2addr v7, v5

    invoke-interface {v1, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    new-instance v8, Ljava/lang/StringBuilder;

    const-string v9, "switchHost success, type = "

    invoke-direct {v8, v9}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v8, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, ",new host = "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, ",hostList = "

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ", key = "

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v4, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {p0, p2, v5}, Lcom/kwad/sdk/core/network/idc/a;->Q(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    invoke-virtual {v2, v6}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    goto :goto_1

    :catchall_0
    move-exception v1

    invoke-virtual {v2, v6}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v4, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    throw v1

    :cond_8
    :goto_3
    return-void
.end method

.method private Q(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/idc/a;->apS:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    new-instance p1, Lcom/kwad/sdk/core/network/idc/a$3;

    invoke-direct {p1, p0}, Lcom/kwad/sdk/core/network/idc/a$3;-><init>(Lcom/kwad/sdk/core/network/idc/a;)V

    invoke-static {p1}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/sdk/core/network/idc/a;)Ljava/util/Map;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/network/idc/a;->apS:Ljava/util/Map;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/sdk/core/network/idc/a;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/network/idc/a;->da(Ljava/lang/String;)V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/network/idc/DomainException;)Z
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/idc/DomainException;->getHttpCode()I

    move-result v0

    const/16 v1, 0x1f4

    if-lt v0, v1, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/idc/DomainException;->isConnectException()Z

    move-result p0

    return p0
.end method

.method static synthetic b(Lcom/kwad/sdk/core/network/idc/a;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/idc/a;->Bp()V

    return-void
.end method

.method static synthetic c(Lcom/kwad/sdk/core/network/idc/a;)Lcom/kwad/sdk/core/network/idc/a/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/network/idc/a;->apT:Lcom/kwad/sdk/core/network/idc/a/a;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/sdk/core/network/idc/a;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/network/idc/a;->mContext:Landroid/content/Context;

    return-object p0
.end method

.method private da(Ljava/lang/String;)V
    .locals 3

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/network/idc/a;->db(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/network/idc/a;->apT:Lcom/kwad/sdk/core/network/idc/a/a;

    invoke-virtual {v1, p1}, Lcom/kwad/sdk/core/network/idc/a/a;->dd(Ljava/lang/String;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_0

    return-void

    :cond_0
    const/4 v2, 0x0

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-static {v1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    :cond_1
    invoke-static {v1}, Lcom/kwad/sdk/utils/ag;->fB(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-direct {p0, p1, v1}, Lcom/kwad/sdk/core/network/idc/a;->Q(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method private db(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/idc/a;->apS:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    return-object p1
.end method


# virtual methods
.method public final P(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/idc/a;->apS:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p2

    :cond_0
    return-object p1
.end method

.method public final R(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p1, ""

    return-object p1

    :cond_0
    invoke-direct {p0, p2}, Lcom/kwad/sdk/core/network/idc/a;->db(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    if-eqz p2, :cond_6

    invoke-virtual {p2}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_1

    :cond_1
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    invoke-virtual {v0}, Landroid/net/Uri;->getPath()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    return-object p1

    :cond_2
    invoke-virtual {v0}, Landroid/net/Uri;->getHost()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    return-object p1

    :cond_3
    new-instance p1, Landroid/net/Uri$Builder;

    invoke-direct {p1}, Landroid/net/Uri$Builder;-><init>()V

    invoke-virtual {p1, p2}, Landroid/net/Uri$Builder;->authority(Ljava/lang/String;)Landroid/net/Uri$Builder;

    invoke-virtual {v0}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_4

    const-string p2, "https"

    goto :goto_0

    :cond_4
    invoke-virtual {v0}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object p2

    :goto_0
    invoke-virtual {p1, p2}, Landroid/net/Uri$Builder;->scheme(Ljava/lang/String;)Landroid/net/Uri$Builder;

    invoke-virtual {v0}, Landroid/net/Uri;->getPath()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/net/Uri$Builder;->path(Ljava/lang/String;)Landroid/net/Uri$Builder;

    invoke-virtual {v0}, Landroid/net/Uri;->getQuery()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_5

    invoke-virtual {v0}, Landroid/net/Uri;->getQuery()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/net/Uri$Builder;->query(Ljava/lang/String;)Landroid/net/Uri$Builder;

    :cond_5
    invoke-virtual {p1}, Landroid/net/Uri$Builder;->build()Landroid/net/Uri;

    move-result-object p1

    invoke-virtual {p1}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/net/URLDecoder;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    :cond_6
    :goto_1
    return-object p1
.end method

.method public final a(Lcom/kwad/sdk/core/network/idc/a/a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/idc/a;->apT:Lcom/kwad/sdk/core/network/idc/a/a;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/network/idc/a/a;->b(Lcom/kwad/sdk/core/network/idc/a/a;)V

    new-instance p1, Lcom/kwad/sdk/core/network/idc/a$2;

    invoke-direct {p1, p0}, Lcom/kwad/sdk/core/network/idc/a$2;-><init>(Lcom/kwad/sdk/core/network/idc/a;)V

    invoke-static {p1}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a(Ljava/lang/String;ILjava/lang/Throwable;)V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/network/idc/DomainException;

    invoke-direct {v0, p2, p3}, Lcom/kwad/sdk/core/network/idc/DomainException;-><init>(ILjava/lang/Throwable;)V

    const-string p2, "ulog"

    invoke-virtual {p0, p1, p2, v0}, Lcom/kwad/sdk/core/network/idc/a;->a(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/network/idc/DomainException;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/network/idc/DomainException;)V
    .locals 0

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-static {p3}, Lcom/kwad/sdk/core/network/idc/a;->a(Lcom/kwad/sdk/core/network/idc/DomainException;)Z

    move-result p3

    if-eqz p3, :cond_1

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/core/network/idc/a;->O(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final d(Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/network/idc/DomainException;

    invoke-direct {v0, p2}, Lcom/kwad/sdk/core/network/idc/DomainException;-><init>(Ljava/lang/Throwable;)V

    const-string p2, "cdn"

    invoke-virtual {p0, p1, p2, v0}, Lcom/kwad/sdk/core/network/idc/a;->a(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/network/idc/DomainException;)V

    return-void
.end method

.method public final dc(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    const-string v0, "cdn"

    invoke-virtual {p0, p1, v0}, Lcom/kwad/sdk/core/network/idc/a;->R(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public final init(Landroid/content/Context;)V
    .locals 1

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/network/idc/a;->mContext:Landroid/content/Context;

    new-instance v0, Lcom/kwad/sdk/core/network/idc/a$1;

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/core/network/idc/a$1;-><init>(Lcom/kwad/sdk/core/network/idc/a;Landroid/content/Context;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V

    return-void
.end method
