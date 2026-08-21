.class public final Lcom/mbridge/msdk/foundation/tools/ab;
.super Ljava/lang/Object;
.source "SameOptimizedController.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/foundation/tools/ab$a;
    }
.end annotation


# instance fields
.field private volatile a:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field

.field private volatile b:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private volatile c:Lcom/mbridge/msdk/c/a;

.field private volatile d:Lorg/json/JSONObject;

.field private final e:Ljava/lang/Object;

.field private final f:Ljava/lang/Object;

.field private final g:Ljava/lang/Object;

.field private h:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 193
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 187
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/ab;->e:Ljava/lang/Object;

    .line 189
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/ab;->f:Ljava/lang/Object;

    .line 190
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/ab;->g:Ljava/lang/Object;

    return-void
.end method

.method synthetic constructor <init>(Lcom/mbridge/msdk/foundation/tools/ab$1;)V
    .locals 0

    .line 23
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/tools/ab;-><init>()V

    return-void
.end method

.method public static a()Lcom/mbridge/msdk/foundation/tools/ab;
    .locals 1

    .line 197
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ab$a;->a()Lcom/mbridge/msdk/foundation/tools/ab;

    move-result-object v0

    return-object v0
.end method

.method private static a(Ljava/lang/String;Ljava/util/concurrent/ConcurrentHashMap;)Ljava/lang/Boolean;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;)",
            "Ljava/lang/Boolean;"
        }
    .end annotation

    .line 256
    :try_start_0
    invoke-virtual {p1, p0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Boolean;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 p0, 0x0

    :goto_0
    return-object p0
.end method

.method private b(Ljava/lang/String;I)I
    .locals 1

    .line 285
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/tools/ab;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    return p2

    .line 289
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/tools/ab;->d:Lorg/json/JSONObject;

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    return p2
.end method

.method private static b(Ljava/lang/String;Ljava/util/concurrent/ConcurrentHashMap;)Ljava/lang/Integer;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;)",
            "Ljava/lang/Integer;"
        }
    .end annotation

    .line 266
    :try_start_0
    invoke-virtual {p1, p0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 p0, 0x0

    :goto_0
    return-object p0
.end method

.method private b()Z
    .locals 5

    .line 296
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/tools/ab;->g:Ljava/lang/Object;

    monitor-enter v0

    .line 297
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/tools/ab;->c:Lcom/mbridge/msdk/c/a;

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v1, :cond_1

    .line 1316
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/tools/ab;->c:Lcom/mbridge/msdk/c/a;

    invoke-virtual {v1}, Lcom/mbridge/msdk/c/a;->aY()I

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-ne v1, v3, :cond_0

    move v1, v3

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    if-eqz v1, :cond_3

    .line 299
    :cond_1
    :try_start_1
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/tools/ab;->h:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 300
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v1

    const-string v4, "sdk_app_id"

    invoke-virtual {v1, v4}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/foundation/tools/ab;->h:Ljava/lang/String;

    .line 302
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    iget-object v4, p0, Lcom/mbridge/msdk/foundation/tools/ab;->h:Ljava/lang/String;

    invoke-virtual {v1, v4}, Lcom/mbridge/msdk/c/b;->g(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/foundation/tools/ab;->c:Lcom/mbridge/msdk/c/a;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catch_0
    const/4 v1, 0x0

    .line 304
    :try_start_2
    iput-object v1, p0, Lcom/mbridge/msdk/foundation/tools/ab;->c:Lcom/mbridge/msdk/c/a;

    .line 308
    :cond_3
    :goto_1
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/tools/ab;->c:Lcom/mbridge/msdk/c/a;

    if-eqz v1, :cond_4

    .line 309
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/tools/ab;->c:Lcom/mbridge/msdk/c/a;

    invoke-virtual {v1}, Lcom/mbridge/msdk/c/a;->s()Lorg/json/JSONObject;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/foundation/tools/ab;->d:Lorg/json/JSONObject;

    .line 311
    :cond_4
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 312
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/tools/ab;->c:Lcom/mbridge/msdk/c/a;

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/tools/ab;->d:Lorg/json/JSONObject;

    if-nez v0, :cond_6

    :cond_5
    move v2, v3

    :cond_6
    return v2

    :catchall_0
    move-exception v1

    .line 311
    :try_start_3
    monitor-exit v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    throw v1
.end method

.method private b(Ljava/lang/String;Z)Z
    .locals 4

    .line 274
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/tools/ab;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    return p2

    .line 278
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/tools/ab;->d:Lorg/json/JSONObject;

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz p2, :cond_1

    move v3, v1

    goto :goto_0

    :cond_1
    move v3, v2

    :goto_0
    invoke-virtual {v0, p1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz p1, :cond_2

    goto :goto_1

    :cond_2
    move v1, v2

    :goto_1
    return v1

    :catch_0
    return p2
.end method

.method private c()Ljava/util/concurrent/ConcurrentHashMap;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation

    .line 320
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/tools/ab;->e:Ljava/lang/Object;

    monitor-enter v0

    .line 321
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/tools/ab;->a:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v1, :cond_0

    .line 322
    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/foundation/tools/ab;->a:Ljava/util/concurrent/ConcurrentHashMap;

    .line 324
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 325
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/tools/ab;->a:Ljava/util/concurrent/ConcurrentHashMap;

    return-object v0

    :catchall_0
    move-exception v1

    .line 324
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method

.method private d()Ljava/util/concurrent/ConcurrentHashMap;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    .line 329
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/tools/ab;->f:Ljava/lang/Object;

    monitor-enter v0

    .line 330
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/tools/ab;->b:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v1, :cond_0

    .line 331
    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/foundation/tools/ab;->b:Ljava/util/concurrent/ConcurrentHashMap;

    .line 333
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 334
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/tools/ab;->b:Ljava/util/concurrent/ConcurrentHashMap;

    return-object v0

    :catchall_0
    move-exception v1

    .line 333
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method


# virtual methods
.method public final a(Ljava/lang/String;I)I
    .locals 2

    .line 202
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return p2

    .line 207
    :cond_0
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/tools/ab;->d()Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    .line 208
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/ab;->b(Ljava/lang/String;Ljava/util/concurrent/ConcurrentHashMap;)Ljava/lang/Integer;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 211
    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    return p1

    .line 215
    :cond_1
    :try_start_1
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/foundation/tools/ab;->b(Ljava/lang/String;I)I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    .line 217
    :catch_0
    :try_start_2
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    .line 219
    :goto_0
    invoke-virtual {v0, p1, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 220
    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result p1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    return p1

    :catch_1
    return p2
.end method

.method public final a(Ljava/lang/String;Z)Z
    .locals 2

    .line 229
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return p2

    .line 234
    :cond_0
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/tools/ab;->c()Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    .line 235
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/ab;->a(Ljava/lang/String;Ljava/util/concurrent/ConcurrentHashMap;)Ljava/lang/Boolean;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 237
    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    return p1

    .line 241
    :cond_1
    :try_start_1
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/foundation/tools/ab;->b(Ljava/lang/String;Z)Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    .line 243
    :catch_0
    :try_start_2
    invoke-static {p2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    .line 246
    :goto_0
    invoke-virtual {v0, p1, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 247
    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    return p1

    :catch_1
    return p2
.end method
