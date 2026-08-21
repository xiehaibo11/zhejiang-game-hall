.class final Lcom/tkay/core/b/b$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/h/k;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/b/b;->b(J)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:J

.field final synthetic b:Ljava/util/Map;

.field final synthetic c:Lcom/tkay/core/b/b;


# direct methods
.method constructor <init>(Lcom/tkay/core/b/b;JLjava/util/Map;)V
    .locals 0

    .line 313
    iput-object p1, p0, Lcom/tkay/core/b/b$3;->c:Lcom/tkay/core/b/b;

    iput-wide p2, p0, Lcom/tkay/core/b/b$3;->a:J

    iput-object p4, p0, Lcom/tkay/core/b/b$3;->b:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onLoadCanceled(I)V
    .locals 10

    .line 359
    iget-object p1, p0, Lcom/tkay/core/b/b$3;->c:Lcom/tkay/core/b/b;

    monitor-enter p1

    .line 360
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/b/b$3;->c:Lcom/tkay/core/b/b;

    iget-object v0, v0, Lcom/tkay/core/b/b;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 361
    iget-object v0, p0, Lcom/tkay/core/b/b$3;->c:Lcom/tkay/core/b/b;

    invoke-virtual {v0}, Lcom/tkay/core/b/b;->c()V

    .line 363
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/tkay/core/b/b$3;->a:J

    sub-long v6, v0, v2

    .line 364
    iget-object v4, p0, Lcom/tkay/core/b/b$3;->c:Lcom/tkay/core/b/b;

    const/4 v5, 0x0

    const-string v8, "onLoadCanceled."

    iget-object v9, p0, Lcom/tkay/core/b/b$3;->b:Ljava/util/Map;

    invoke-static/range {v4 .. v9}, Lcom/tkay/core/b/b;->a(Lcom/tkay/core/b/b;Ljava/util/List;JLjava/lang/String;Ljava/util/Map;)V

    .line 365
    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p1

    throw v0
.end method

.method public final onLoadError(ILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    .locals 10

    .line 343
    iget-object p1, p0, Lcom/tkay/core/b/b$3;->c:Lcom/tkay/core/b/b;

    monitor-enter p1

    .line 348
    :try_start_0
    iget-object p2, p0, Lcom/tkay/core/b/b$3;->c:Lcom/tkay/core/b/b;

    iget-object p2, p2, Lcom/tkay/core/b/b;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v0, 0x0

    invoke-virtual {p2, v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 349
    iget-object p2, p0, Lcom/tkay/core/b/b$3;->c:Lcom/tkay/core/b/b;

    invoke-virtual {p2}, Lcom/tkay/core/b/b;->c()V

    .line 351
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/tkay/core/b/b$3;->a:J

    sub-long v6, v0, v2

    .line 353
    iget-object v4, p0, Lcom/tkay/core/b/b$3;->c:Lcom/tkay/core/b/b;

    const/4 v5, 0x0

    if-eqz p3, :cond_0

    invoke-virtual {p3}, Lcom/tkay/core/api/AdError;->getPlatformMSG()Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    :cond_0
    const-string p2, ""

    :goto_0
    move-object v8, p2

    iget-object v9, p0, Lcom/tkay/core/b/b$3;->b:Ljava/util/Map;

    invoke-static/range {v4 .. v9}, Lcom/tkay/core/b/b;->a(Lcom/tkay/core/b/b;Ljava/util/List;JLjava/lang/String;Ljava/util/Map;)V

    .line 354
    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    monitor-exit p1

    throw p2
.end method

.method public final onLoadFinish(ILjava/lang/Object;)V
    .locals 12

    .line 322
    iget-object p1, p0, Lcom/tkay/core/b/b$3;->c:Lcom/tkay/core/b/b;

    monitor-enter p1

    .line 327
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/b/b$3;->c:Lcom/tkay/core/b/b;

    iget-object v0, v0, Lcom/tkay/core/b/b;->q:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 329
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    iget-wide v4, p0, Lcom/tkay/core/b/b$3;->a:J

    sub-long v8, v2, v4

    .line 330
    iget-object v0, p0, Lcom/tkay/core/b/b$3;->c:Lcom/tkay/core/b/b;

    .line 1580
    new-instance v7, Ljava/util/ArrayList;

    invoke-direct {v7}, Ljava/util/ArrayList;-><init>()V

    .line 1581
    instance-of v2, p2, Lorg/json/JSONObject;

    if-eqz v2, :cond_1

    .line 1582
    move-object v2, p2

    check-cast v2, Lorg/json/JSONObject;

    const-string v3, "data"

    .line 1583
    invoke-virtual {v2, v3}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 1584
    :goto_0
    invoke-virtual {v2}, Lorg/json/JSONArray;->length()I

    move-result v3

    if-ge v1, v3, :cond_1

    .line 1585
    invoke-virtual {v2, v1}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/tkay/core/common/f/l;->a(Ljava/lang/String;)Lcom/tkay/core/common/f/l;

    move-result-object v3

    if-eqz v3, :cond_0

    .line 1587
    iget-object v4, v0, Lcom/tkay/core/b/b;->i:Ljava/lang/String;

    invoke-virtual {v3, v4}, Lcom/tkay/core/common/f/l;->b(Ljava/lang/String;)V

    .line 1588
    :cond_0
    invoke-interface {v7, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 332
    :cond_1
    iget-object v0, p0, Lcom/tkay/core/b/b$3;->c:Lcom/tkay/core/b/b;

    invoke-static {v0, p2, v7}, Lcom/tkay/core/b/b;->a(Lcom/tkay/core/b/b;Ljava/lang/Object;Ljava/util/List;)V

    .line 334
    iget-object v6, p0, Lcom/tkay/core/b/b$3;->c:Lcom/tkay/core/b/b;

    const/4 v10, 0x0

    iget-object v11, p0, Lcom/tkay/core/b/b$3;->b:Ljava/util/Map;

    invoke-static/range {v6 .. v11}, Lcom/tkay/core/b/b;->a(Lcom/tkay/core/b/b;Ljava/util/List;JLjava/lang/String;Ljava/util/Map;)V

    .line 336
    iget-object p2, p0, Lcom/tkay/core/b/b$3;->c:Lcom/tkay/core/b/b;

    invoke-virtual {p2}, Lcom/tkay/core/b/b;->c()V

    .line 337
    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    monitor-exit p1

    throw p2
.end method

.method public final onLoadStart(I)V
    .locals 0

    return-void
.end method
