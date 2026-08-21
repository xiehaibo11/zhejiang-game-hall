.class public abstract Lcom/igexin/push/c/m;
.super Ljava/lang/Object;


# static fields
.field private static final e:Ljava/lang/String;


# instance fields
.field protected a:J

.field protected final b:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/igexin/push/c/q;",
            ">;"
        }
    .end annotation
.end field

.field protected final c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/igexin/push/c/j;",
            ">;"
        }
    .end annotation
.end field

.field protected d:Lcom/igexin/push/c/a;

.field private final f:Ljava/lang/Object;

.field private final g:Ljava/lang/Object;

.field private final h:Ljava/util/Comparator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Comparator<",
            "Ljava/util/Map$Entry<",
            "Ljava/lang/String;",
            "Lcom/igexin/push/c/j;",
            ">;>;"
        }
    .end annotation
.end field

.field private i:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "DT_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-class v1, Lcom/igexin/push/c/m;

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/c/m;->e:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    iput-object v0, p0, Lcom/igexin/push/c/m;->b:Ljava/util/Map;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/igexin/push/c/m;->c:Ljava/util/Map;

    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/igexin/push/c/m;->f:Ljava/lang/Object;

    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/igexin/push/c/m;->g:Ljava/lang/Object;

    new-instance v0, Lcom/igexin/push/c/a;

    invoke-direct {v0}, Lcom/igexin/push/c/a;-><init>()V

    iput-object v0, p0, Lcom/igexin/push/c/m;->d:Lcom/igexin/push/c/a;

    new-instance v0, Lcom/igexin/push/c/n;

    invoke-direct {v0, p0}, Lcom/igexin/push/c/n;-><init>(Lcom/igexin/push/c/m;)V

    iput-object v0, p0, Lcom/igexin/push/c/m;->h:Ljava/util/Comparator;

    invoke-static {}, Lcom/igexin/push/config/SDKUrlConfig;->hasMultipleXfr()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0, p1}, Lcom/igexin/push/c/m;->b(Ljava/lang/String;)V

    invoke-direct {p0, p2}, Lcom/igexin/push/c/m;->c(Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    invoke-direct {p0}, Lcom/igexin/push/c/m;->a()V

    :goto_0
    return-void
.end method

.method private a(Lorg/json/JSONObject;)Lcom/igexin/push/c/j;
    .locals 4

    const-string v0, "domain"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    const/4 p1, 0x0

    return-object p1

    :cond_0
    new-instance v1, Lcom/igexin/push/c/j;

    invoke-direct {v1}, Lcom/igexin/push/c/j;-><init>()V

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/igexin/push/c/j;->a(Ljava/lang/String;)V

    const-string v0, "port"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Lcom/igexin/push/c/j;->a(I)V

    :cond_1
    const-string v0, "ip"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/igexin/push/c/j;->b(Ljava/lang/String;)V

    :cond_2
    const-string v0, "consumeTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getLong(Ljava/lang/String;)J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/igexin/push/c/j;->a(J)V

    :cond_3
    const-string v0, "detectSuccessTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getLong(Ljava/lang/String;)J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/igexin/push/c/j;->b(J)V

    :cond_4
    const-string v0, "isDomain"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_5

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getBoolean(Ljava/lang/String;)Z

    move-result p1

    invoke-virtual {v1, p1}, Lcom/igexin/push/c/j;->a(Z)V

    :cond_5
    return-object v1
.end method

.method private a(Lorg/json/JSONArray;)Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lorg/json/JSONArray;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x0

    :goto_0
    :try_start_0
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_0

    invoke-virtual {p1, v1}, Lorg/json/JSONArray;->getJSONObject(I)Lorg/json/JSONObject;

    move-result-object v2

    const-string v3, "domain"

    invoke-virtual {v2, v3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :catch_0
    :cond_0
    return-object v0
.end method

.method private a()V
    .locals 8

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/igexin/push/c/m;->a:J

    invoke-direct {p0}, Lcom/igexin/push/c/m;->q()Z

    move-result v0

    const/4 v1, 0x1

    const-string v2, "null"

    if-eqz v0, :cond_0

    sget-object v0, Lcom/igexin/push/core/d;->af:Ljava/lang/String;

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    invoke-virtual {v0, v2, v1}, Lcom/igexin/push/core/b/i;->b(Ljava/lang/String;Z)Z

    goto :goto_0

    :cond_0
    sget-object v0, Lcom/igexin/push/core/d;->ag:Ljava/lang/String;

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    const/4 v3, 0x0

    invoke-virtual {v0, v2, v3}, Lcom/igexin/push/core/b/i;->b(Ljava/lang/String;Z)Z

    :cond_1
    :goto_0
    invoke-direct {p0}, Lcom/igexin/push/c/m;->o()Ljava/util/List;

    move-result-object v0

    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_1
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_3

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    new-instance v5, Lcom/igexin/push/c/j;

    invoke-static {v4}, Lcom/igexin/b/a/b/f;->a(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    const/4 v7, 0x2

    aget-object v6, v6, v7

    invoke-static {v6}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v6

    invoke-direct {v5, v4, v6}, Lcom/igexin/push/c/j;-><init>(Ljava/lang/String;I)V

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v4

    if-le v4, v1, :cond_2

    invoke-direct {p0, v5}, Lcom/igexin/push/c/m;->a(Lcom/igexin/push/c/j;)V

    :cond_2
    invoke-interface {v2, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    :cond_3
    iget-object v1, p0, Lcom/igexin/push/c/m;->d:Lcom/igexin/push/c/a;

    invoke-virtual {v1, v2}, Lcom/igexin/push/c/a;->b(Ljava/util/List;)V

    invoke-interface {v0}, Ljava/util/List;->clear()V

    return-void
.end method

.method private a(Lcom/igexin/push/c/j;)V
    .locals 3

    new-instance v0, Lcom/igexin/push/c/q;

    invoke-direct {v0}, Lcom/igexin/push/c/q;-><init>()V

    invoke-virtual {p0}, Lcom/igexin/push/c/m;->b()Lcom/igexin/push/c/h;

    move-result-object v1

    sget-object v2, Lcom/igexin/push/c/h;->a:Lcom/igexin/push/c/h;

    if-ne v1, v2, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    invoke-virtual {v0, v1}, Lcom/igexin/push/c/q;->a(Z)V

    invoke-virtual {p0}, Lcom/igexin/push/c/m;->c()Lcom/igexin/push/c/p;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/igexin/push/c/q;->a(Lcom/igexin/push/c/p;)V

    invoke-virtual {v0, p1}, Lcom/igexin/push/c/q;->a(Lcom/igexin/push/c/j;)V

    iget-object v1, p0, Lcom/igexin/push/c/m;->g:Ljava/lang/Object;

    monitor-enter v1

    :try_start_0
    iget-object v2, p0, Lcom/igexin/push/c/m;->b:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/igexin/push/c/j;->a()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v2, p1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    monitor-exit v1

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method private b(Ljava/lang/String;)V
    .locals 6

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/igexin/push/c/m;->a()V

    return-void

    :cond_0
    const/4 v0, 0x0

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-object v1, v0

    :goto_0
    if-eqz v1, :cond_9

    invoke-virtual {v1}, Lorg/json/JSONObject;->length()I

    move-result p1

    if-nez p1, :cond_1

    goto/16 :goto_2

    :cond_1
    const-string p1, "lastDetectTime"

    invoke-virtual {v1, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_2

    :try_start_1
    invoke-virtual {v1, p1}, Lorg/json/JSONObject;->getLong(Ljava/lang/String;)J

    move-result-wide v2

    iput-wide v2, p0, Lcom/igexin/push/c/m;->a:J
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    :catch_1
    :cond_2
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iget-wide v4, p0, Lcom/igexin/push/c/m;->a:J

    sub-long/2addr v2, v4

    invoke-static {v2, v3}, Ljava/lang/Math;->abs(J)J

    move-result-wide v2

    sget-wide v4, Lcom/igexin/push/c/f;->a:J

    cmp-long p1, v2, v4

    if-ltz p1, :cond_3

    invoke-direct {p0}, Lcom/igexin/push/c/m;->a()V

    return-void

    :cond_3
    const-string p1, "list"

    invoke-virtual {v1, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_4

    :try_start_2
    invoke-virtual {v1, p1}, Lorg/json/JSONObject;->getJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_2

    :catch_2
    :cond_4
    if-eqz v0, :cond_8

    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result p1

    if-nez p1, :cond_5

    goto :goto_1

    :cond_5
    invoke-direct {p0, v0}, Lcom/igexin/push/c/m;->a(Lorg/json/JSONArray;)Ljava/util/List;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_6

    invoke-direct {p0}, Lcom/igexin/push/c/m;->a()V

    return-void

    :cond_6
    invoke-direct {p0}, Lcom/igexin/push/c/m;->o()Ljava/util/List;

    move-result-object v1

    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2, v1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    invoke-interface {v2, p1}, Ljava/util/List;->retainAll(Ljava/util/Collection;)Z

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v3

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v4

    const/4 v5, 0x0

    if-eq v3, v4, :cond_7

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/igexin/push/c/m;->e:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " | db cache xfr != default, use default"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v3, v5, [Ljava/lang/Object;

    invoke-static {v0, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-interface {v2}, Ljava/util/List;->clear()V

    invoke-interface {v1}, Ljava/util/List;->clear()V

    invoke-interface {p1}, Ljava/util/List;->clear()V

    invoke-direct {p0}, Lcom/igexin/push/c/m;->a()V

    return-void

    :cond_7
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/c/m;->e:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " | db cache xfr == default, use cache"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v1, v5, [Ljava/lang/Object;

    invoke-static {p1, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-direct {p0, v0}, Lcom/igexin/push/c/m;->b(Lorg/json/JSONArray;)V

    return-void

    :cond_8
    :goto_1
    invoke-direct {p0}, Lcom/igexin/push/c/m;->a()V

    return-void

    :cond_9
    :goto_2
    invoke-direct {p0}, Lcom/igexin/push/c/m;->a()V

    return-void
.end method

.method private b(Lorg/json/JSONArray;)V
    .locals 7

    const-string v0, "|initWithCacheData exception "

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    :try_start_0
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-ge v3, v4, :cond_2

    invoke-virtual {p1, v3}, Lorg/json/JSONArray;->getJSONObject(I)Lorg/json/JSONObject;

    move-result-object v4

    invoke-direct {p0, v4}, Lcom/igexin/push/c/m;->a(Lorg/json/JSONObject;)Lcom/igexin/push/c/j;

    move-result-object v5

    if-eqz v5, :cond_0

    iget-object v4, p0, Lcom/igexin/push/c/m;->c:Ljava/util/Map;

    invoke-virtual {v5}, Lcom/igexin/push/c/j;->a()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v4, v6, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    goto :goto_1

    :cond_0
    :try_start_1
    const-string v5, "domain"

    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-direct {p0, v4}, Lcom/igexin/push/c/m;->d(Ljava/lang/String;)Lcom/igexin/push/c/j;

    move-result-object v5
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :goto_1
    if-eqz v5, :cond_1

    :try_start_2
    invoke-direct {p0, v5}, Lcom/igexin/push/c/m;->a(Lcom/igexin/push/c/j;)V

    invoke-interface {v1, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :catch_0
    move-exception p1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/igexin/push/c/m;->e:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v1, v2, [Ljava/lang/Object;

    invoke-static {p1, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object p1, p0, Lcom/igexin/push/c/m;->c:Ljava/util/Map;

    invoke-interface {p1}, Ljava/util/Map;->clear()V

    invoke-direct {p0}, Lcom/igexin/push/c/m;->a()V

    return-void

    :cond_2
    iget-object p1, p0, Lcom/igexin/push/c/m;->d:Lcom/igexin/push/c/a;

    invoke-virtual {p1, v1}, Lcom/igexin/push/c/a;->b(Ljava/util/List;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_2

    :catch_1
    move-exception p1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/igexin/push/c/m;->e:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v0, v2, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_2
    return-void
.end method

.method private c(Ljava/lang/String;)V
    .locals 4

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, v1

    :catch_0
    if-eqz v0, :cond_5

    invoke-virtual {v0}, Lorg/json/JSONObject;->length()I

    move-result p1

    if-nez p1, :cond_1

    goto :goto_0

    :cond_1
    const-string p1, "loginFailedlCnt"

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    :try_start_1
    iget-object v1, p0, Lcom/igexin/push/c/m;->d:Lcom/igexin/push/c/a;

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result p1

    iput p1, v1, Lcom/igexin/push/c/a;->c:I
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    :catch_1
    :cond_2
    const-string p1, "lastChange2BackupTime"

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    :try_start_2
    iget-object v1, p0, Lcom/igexin/push/c/m;->d:Lcom/igexin/push/c/a;

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->getLong(Ljava/lang/String;)J

    move-result-wide v2

    iput-wide v2, v1, Lcom/igexin/push/c/a;->d:J
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_2

    :catch_2
    :cond_3
    const-string p1, "lastOfflineTime"

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_4

    :try_start_3
    iget-object v1, p0, Lcom/igexin/push/c/m;->d:Lcom/igexin/push/c/a;

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->getLong(Ljava/lang/String;)J

    move-result-wide v2

    iput-wide v2, v1, Lcom/igexin/push/c/a;->e:J
    :try_end_3
    .catch Lorg/json/JSONException; {:try_start_3 .. :try_end_3} :catch_3

    :catch_3
    :cond_4
    const-string p1, "domainType"

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_5

    :try_start_4
    iget-object v1, p0, Lcom/igexin/push/c/m;->d:Lcom/igexin/push/c/a;

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result p1

    invoke-static {p1}, Lcom/igexin/push/c/d;->a(I)Lcom/igexin/push/c/d;

    move-result-object p1

    iput-object p1, v1, Lcom/igexin/push/c/a;->a:Lcom/igexin/push/c/d;

    iget-object p1, p0, Lcom/igexin/push/c/m;->d:Lcom/igexin/push/c/a;

    iget-object p1, p1, Lcom/igexin/push/c/a;->a:Lcom/igexin/push/c/d;

    sget-object v0, Lcom/igexin/push/c/d;->b:Lcom/igexin/push/c/d;

    if-ne p1, v0, :cond_5

    iget-object p1, p0, Lcom/igexin/push/c/m;->d:Lcom/igexin/push/c/a;

    iget-object p1, p1, Lcom/igexin/push/c/a;->b:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V
    :try_end_4
    .catch Lorg/json/JSONException; {:try_start_4 .. :try_end_4} :catch_4

    :catch_4
    :cond_5
    :goto_0
    return-void
.end method

.method private d(Ljava/lang/String;)Lcom/igexin/push/c/j;
    .locals 2

    new-instance v0, Lcom/igexin/push/c/j;

    invoke-direct {v0}, Lcom/igexin/push/c/j;-><init>()V

    invoke-static {p1}, Lcom/igexin/b/a/b/f;->a(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p1}, Lcom/igexin/push/c/j;->a(Ljava/lang/String;)V

    const/4 p1, 0x2

    aget-object p1, v1, p1

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    invoke-virtual {v0, p1}, Lcom/igexin/push/c/j;->a(I)V

    return-object v0
.end method

.method private o()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    invoke-static {}, Lcom/igexin/push/config/SDKUrlConfig;->getDefaultXfrList()Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method private p()V
    .locals 2

    iget-object v0, p0, Lcom/igexin/push/c/m;->f:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/igexin/push/c/m;->c:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->clear()V

    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method private q()Z
    .locals 2

    invoke-virtual {p0}, Lcom/igexin/push/c/m;->b()Lcom/igexin/push/c/h;

    move-result-object v0

    sget-object v1, Lcom/igexin/push/c/h;->b:Lcom/igexin/push/c/h;

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method


# virtual methods
.method protected a(Ljava/lang/String;)Lcom/igexin/push/c/q;
    .locals 4

    iget-object v0, p0, Lcom/igexin/push/c/m;->g:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/igexin/push/c/m;->b:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/igexin/push/c/q;

    monitor-exit v0

    return-object p1

    :cond_1
    const/4 p1, 0x0

    monitor-exit v0

    return-object p1

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public abstract b()Lcom/igexin/push/c/h;
.end method

.method protected b(Lcom/igexin/push/c/j;)V
    .locals 3

    iget-object v0, p0, Lcom/igexin/push/c/m;->f:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/igexin/push/c/m;->c:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/igexin/push/c/j;->a()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget-object p1, p0, Lcom/igexin/push/c/m;->d:Lcom/igexin/push/c/a;

    invoke-virtual {p1}, Lcom/igexin/push/c/a;->e()V

    return-void

    :catchall_0
    move-exception p1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public abstract c()Lcom/igexin/push/c/p;
.end method

.method public d()V
    .locals 3

    invoke-virtual {p0}, Lcom/igexin/push/c/m;->k()Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/c/m;->e:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|startDetect detect = false, return !!!"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/c/m;->e:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|startDetect detect = true, start detect !!!"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-virtual {p0}, Lcom/igexin/push/c/m;->h()V

    return-void
.end method

.method public e()V
    .locals 5

    iget-object v0, p0, Lcom/igexin/push/c/m;->g:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/igexin/push/c/m;->b:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/igexin/push/c/q;

    const/4 v4, 0x0

    invoke-virtual {v3, v4}, Lcom/igexin/push/c/q;->a(Lcom/igexin/push/c/p;)V

    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/igexin/push/c/q;

    invoke-virtual {v2}, Lcom/igexin/push/c/q;->d()V

    goto :goto_0

    :cond_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public f()V
    .locals 10

    invoke-virtual {p0}, Lcom/igexin/push/c/m;->e()V

    invoke-direct {p0}, Lcom/igexin/push/c/m;->p()V

    invoke-direct {p0}, Lcom/igexin/push/c/m;->o()Ljava/util/List;

    move-result-object v0

    iget-object v1, p0, Lcom/igexin/push/c/m;->g:Ljava/lang/Object;

    monitor-enter v1

    :try_start_0
    iget-object v2, p0, Lcom/igexin/push/c/m;->b:Ljava/util/Map;

    invoke-interface {v2}, Ljava/util/Map;->size()I

    move-result v2

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    const/4 v4, 0x0

    if-ge v3, v2, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    sub-int v3, v2, v3

    iget-object v5, p0, Lcom/igexin/push/c/m;->b:Ljava/util/Map;

    invoke-interface {v5}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v5

    invoke-interface {v5}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v5

    move v6, v4

    :goto_0
    invoke-interface {v5}, Ljava/util/Iterator;->hasNext()Z

    move-result v7

    if-eqz v7, :cond_0

    if-ge v6, v3, :cond_0

    invoke-interface {v5}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/util/Map$Entry;

    invoke-interface {v7}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/igexin/push/c/q;

    invoke-virtual {v7}, Lcom/igexin/push/c/q;->e()V

    invoke-interface {v5}, Ljava/util/Iterator;->remove()V

    add-int/lit8 v6, v6, 0x1

    goto :goto_0

    :cond_0
    new-instance v3, Ljava/util/ArrayList;

    iget-object v5, p0, Lcom/igexin/push/c/m;->b:Ljava/util/Map;

    invoke-interface {v5}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v5

    invoke-direct {v3, v5}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    iget-object v5, p0, Lcom/igexin/push/c/m;->b:Ljava/util/Map;

    invoke-interface {v5}, Ljava/util/Map;->clear()V

    new-instance v5, Ljava/util/ArrayList;

    invoke-direct {v5}, Ljava/util/ArrayList;-><init>()V

    :goto_1
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v6

    if-ge v4, v6, :cond_2

    new-instance v6, Lcom/igexin/push/c/j;

    invoke-direct {v6}, Lcom/igexin/push/c/j;-><init>()V

    invoke-interface {v0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    invoke-static {v7}, Lcom/igexin/b/a/b/f;->a(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v7

    invoke-interface {v0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/String;

    invoke-virtual {v6, v8}, Lcom/igexin/push/c/j;->a(Ljava/lang/String;)V

    const/4 v8, 0x2

    aget-object v7, v7, v8

    invoke-static {v7}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v6, v7}, Lcom/igexin/push/c/j;->a(I)V

    if-ge v4, v2, :cond_1

    invoke-interface {v3, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/igexin/push/c/q;

    invoke-virtual {v7, v6}, Lcom/igexin/push/c/q;->a(Lcom/igexin/push/c/j;)V

    iget-object v8, p0, Lcom/igexin/push/c/m;->b:Ljava/util/Map;

    invoke-virtual {v6}, Lcom/igexin/push/c/j;->a()Ljava/lang/String;

    move-result-object v9

    invoke-interface {v8, v9, v7}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_2

    :cond_1
    invoke-direct {p0, v6}, Lcom/igexin/push/c/m;->a(Lcom/igexin/push/c/j;)V

    :goto_2
    invoke-interface {v5, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    :cond_2
    iget-object v0, p0, Lcom/igexin/push/c/m;->d:Lcom/igexin/push/c/a;

    invoke-virtual {v0, v5}, Lcom/igexin/push/c/a;->b(Ljava/util/List;)V

    monitor-exit v1

    return-void

    :catchall_0
    move-exception v0

    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v0
.end method

.method public g()V
    .locals 6

    invoke-virtual {p0}, Lcom/igexin/push/c/m;->e()V

    invoke-direct {p0}, Lcom/igexin/push/c/m;->p()V

    invoke-direct {p0}, Lcom/igexin/push/c/m;->o()Ljava/util/List;

    move-result-object v0

    iget-object v1, p0, Lcom/igexin/push/c/m;->g:Ljava/lang/Object;

    monitor-enter v1

    :try_start_0
    iget-object v2, p0, Lcom/igexin/push/c/m;->b:Ljava/util/Map;

    invoke-interface {v2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map$Entry;

    invoke-interface {v3}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/igexin/push/c/q;

    invoke-virtual {v3}, Lcom/igexin/push/c/q;->e()V

    goto :goto_0

    :cond_0
    iget-object v2, p0, Lcom/igexin/push/c/m;->b:Ljava/util/Map;

    invoke-interface {v2}, Ljava/util/Map;->clear()V

    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    new-instance v3, Lcom/igexin/push/c/j;

    invoke-direct {v3}, Lcom/igexin/push/c/j;-><init>()V

    const/4 v4, 0x0

    invoke-interface {v0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    invoke-static {v5}, Lcom/igexin/b/a/b/f;->a(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v5

    invoke-interface {v0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-virtual {v3, v0}, Lcom/igexin/push/c/j;->a(Ljava/lang/String;)V

    const/4 v0, 0x2

    aget-object v0, v5, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/igexin/push/c/j;->a(I)V

    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/igexin/push/c/m;->d:Lcom/igexin/push/c/a;

    invoke-virtual {v0, v2}, Lcom/igexin/push/c/a;->b(Ljava/util/List;)V

    invoke-interface {v2}, Ljava/util/List;->clear()V

    monitor-exit v1

    return-void

    :catchall_0
    move-exception v0

    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v0
.end method

.method public h()V
    .locals 5

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/igexin/push/c/m;->a:J

    iget-object v0, p0, Lcom/igexin/push/c/m;->g:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/igexin/push/c/m;->b:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/igexin/push/c/q;

    invoke-virtual {p0}, Lcom/igexin/push/c/m;->c()Lcom/igexin/push/c/p;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/igexin/push/c/q;->a(Lcom/igexin/push/c/p;)V

    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/igexin/push/c/q;

    invoke-virtual {v3}, Lcom/igexin/push/c/q;->b()Lcom/igexin/push/c/j;

    move-result-object v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/igexin/push/c/q;

    invoke-virtual {v3}, Lcom/igexin/push/c/q;->b()Lcom/igexin/push/c/j;

    move-result-object v3

    invoke-virtual {v3}, Lcom/igexin/push/c/j;->b()V

    :cond_0
    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/igexin/push/c/q;

    invoke-virtual {v2}, Lcom/igexin/push/c/q;->c()V

    goto :goto_0

    :cond_1
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public declared-synchronized i()V
    .locals 6

    monitor-enter p0

    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/igexin/push/c/m;->a:J

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    iget-object v2, p0, Lcom/igexin/push/c/m;->g:Ljava/lang/Object;

    monitor-enter v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    const-string v3, "lastDetectTime"

    iget-wide v4, p0, Lcom/igexin/push/c/m;->a:J

    invoke-virtual {v0, v3, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v3, "list"

    invoke-virtual {v0, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    iget-object v3, p0, Lcom/igexin/push/c/m;->b:Ljava/util/Map;

    invoke-interface {v3}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :cond_0
    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map$Entry;

    invoke-interface {v4}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/igexin/push/c/q;

    invoke-virtual {v4}, Lcom/igexin/push/c/q;->b()Lcom/igexin/push/c/j;

    move-result-object v4

    invoke-virtual {v4}, Lcom/igexin/push/c/j;->h()Lorg/json/JSONObject;

    move-result-object v4

    if-eqz v4, :cond_0

    invoke-virtual {v1, v4}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    goto :goto_2

    :catch_0
    :cond_1
    :try_start_2
    monitor-exit v2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :try_start_3
    invoke-virtual {v0}, Lorg/json/JSONObject;->length()I

    move-result v1

    if-lez v1, :cond_3

    invoke-direct {p0}, Lcom/igexin/push/c/m;->q()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v1

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x1

    invoke-virtual {v1, v0, v2}, Lcom/igexin/push/core/b/i;->b(Ljava/lang/String;Z)Z

    goto :goto_1

    :cond_2
    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v1

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x0

    invoke-virtual {v1, v0, v2}, Lcom/igexin/push/core/b/i;->b(Ljava/lang/String;Z)Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :cond_3
    :goto_1
    monitor-exit p0

    return-void

    :goto_2
    :try_start_4
    monitor-exit v2
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    :try_start_5
    throw v0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    :catchall_1
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method protected j()V
    .locals 3

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    const-string v1, "null"

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Lcom/igexin/push/core/b/i;->b(Ljava/lang/String;Z)Z

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/igexin/push/core/b/i;->b(Ljava/lang/String;Z)Z

    return-void
.end method

.method protected k()Z
    .locals 7

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/igexin/push/c/m;->a:J

    sub-long/2addr v0, v2

    invoke-static {v0, v1}, Ljava/lang/Math;->abs(J)J

    move-result-wide v0

    sget-wide v2, Lcom/igexin/push/c/f;->a:J

    const-wide/16 v4, 0x2

    mul-long/2addr v2, v4

    const-wide/16 v4, 0xe10

    sub-long/2addr v2, v4

    cmp-long v2, v0, v2

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-ltz v2, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/c/m;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|current time - last detect time > "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-wide v1, Lcom/igexin/push/c/f;->a:J

    const-wide/16 v5, 0x3e8

    div-long/2addr v1, v5

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, " s, detect = true"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v3, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    sget-object v0, Lcom/igexin/push/c/k;->a:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0, v4}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    return v4

    :cond_0
    sget-object v2, Lcom/igexin/push/c/k;->a:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v2, v4}, Ljava/util/concurrent/atomic/AtomicBoolean;->getAndSet(Z)Z

    move-result v2

    if-nez v2, :cond_1

    sget-wide v4, Lcom/igexin/push/c/f;->a:J

    sub-long/2addr v4, v0

    invoke-static {v4, v5}, Ljava/lang/Math;->abs(J)J

    move-result-wide v0

    invoke-static {}, Lcom/igexin/push/c/k;->c_()Lcom/igexin/push/c/k;

    move-result-object v2

    invoke-virtual {v2, v0, v1}, Lcom/igexin/push/c/k;->a(J)V

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v4, Lcom/igexin/push/c/m;->e:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "|set next detect time = "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v3, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_1
    return v3
.end method

.method protected declared-synchronized l()V
    .locals 1

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/igexin/push/c/m;->d:Lcom/igexin/push/c/a;

    invoke-virtual {v0}, Lcom/igexin/push/c/a;->f()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public m()V
    .locals 6

    const-class v0, Lcom/igexin/push/c/m;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/igexin/push/c/m;->i:Landroid/os/Handler;

    if-nez v1, :cond_0

    new-instance v1, Landroid/os/HandlerThread;

    const-string v2, "NetDetect-T"

    invoke-direct {v1, v2}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Landroid/os/HandlerThread;->start()V

    new-instance v2, Landroid/os/Handler;

    invoke-virtual {v1}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v2, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v2, p0, Lcom/igexin/push/c/m;->i:Landroid/os/Handler;

    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget-object v0, p0, Lcom/igexin/push/c/m;->i:Landroid/os/Handler;

    const-string v1, "detToken"

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/igexin/push/c/m;->i:Landroid/os/Handler;

    new-instance v1, Lcom/igexin/push/c/o;

    invoke-direct {v1, p0}, Lcom/igexin/push/c/o;-><init>(Lcom/igexin/push/c/m;)V

    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v2

    const-wide/16 v4, 0x1388

    add-long/2addr v2, v4

    const-string v4, "detToken"

    invoke-virtual {v0, v1, v4, v2, v3}, Landroid/os/Handler;->postAtTime(Ljava/lang/Runnable;Ljava/lang/Object;J)Z

    return-void

    :catchall_0
    move-exception v1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method

.method protected declared-synchronized n()V
    .locals 4

    monitor-enter p0

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    const-string v1, "loginFailedlCnt"

    iget-object v2, p0, Lcom/igexin/push/c/m;->d:Lcom/igexin/push/c/a;

    iget v2, v2, Lcom/igexin/push/c/a;->c:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "lastChange2BackupTime"

    iget-object v2, p0, Lcom/igexin/push/c/m;->d:Lcom/igexin/push/c/a;

    iget-wide v2, v2, Lcom/igexin/push/c/a;->d:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "lastOfflineTime"

    iget-object v2, p0, Lcom/igexin/push/c/m;->d:Lcom/igexin/push/c/a;

    iget-wide v2, v2, Lcom/igexin/push/c/a;->e:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "domainType"

    iget-object v2, p0, Lcom/igexin/push/c/m;->d:Lcom/igexin/push/c/a;

    iget-object v2, v2, Lcom/igexin/push/c/a;->a:Lcom/igexin/push/c/d;

    invoke-virtual {v2}, Lcom/igexin/push/c/d;->b()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catch_0
    :try_start_2
    invoke-virtual {v0}, Lorg/json/JSONObject;->length()I

    move-result v1

    if-lez v1, :cond_1

    invoke-direct {p0}, Lcom/igexin/push/c/m;->q()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v1

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x1

    invoke-virtual {v1, v0, v2}, Lcom/igexin/push/core/b/i;->a(Ljava/lang/String;Z)Z

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v1

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x0

    invoke-virtual {v1, v0, v2}, Lcom/igexin/push/core/b/i;->a(Ljava/lang/String;Z)Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :cond_1
    :goto_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method
