.class public Lcom/igexin/push/core/b/d;
.super Ljava/lang/Object;


# static fields
.field private static final b:Ljava/lang/Object;

.field private static final c:Ljava/lang/Object;


# instance fields
.field private a:Landroid/content/SharedPreferences;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    sput-object v0, Lcom/igexin/push/core/b/d;->b:Ljava/lang/Object;

    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    sput-object v0, Lcom/igexin/push/core/b/d;->c:Ljava/lang/Object;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    if-eqz p1, :cond_0

    const/4 v0, 0x0

    const-string v1, "gx_msg_sp"

    invoke-virtual {p1, v1, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p1

    iput-object p1, p0, Lcom/igexin/push/core/b/d;->a:Landroid/content/SharedPreferences;

    :cond_0
    return-void
.end method

.method private a(Lorg/json/JSONObject;)V
    .locals 12

    :try_start_0
    invoke-virtual {p1}, Lorg/json/JSONObject;->length()I

    move-result v0

    const/16 v1, 0x96

    if-ge v0, v1, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    const-wide v1, 0x7fffffffffffffffL

    const/4 v3, 0x0

    invoke-virtual {p1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v4

    :cond_1
    :goto_0
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_3

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    invoke-virtual {p1, v5}, Lorg/json/JSONObject;->getLong(Ljava/lang/String;)J

    move-result-wide v6

    cmp-long v8, v1, v6

    if-lez v8, :cond_2

    move-object v3, v5

    move-wide v1, v6

    :cond_2
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    const-wide/32 v10, 0x19bfcc00

    sub-long/2addr v8, v10

    cmp-long v5, v6, v8

    if-gez v5, :cond_1

    invoke-interface {v4}, Ljava/util/Iterator;->remove()V

    const/4 v0, 0x1

    goto :goto_0

    :cond_3
    if-nez v0, :cond_4

    if-eqz v3, :cond_4

    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->remove(Ljava/lang/String;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_4
    return-void
.end method

.method private b(Lorg/json/JSONObject;)V
    .locals 12

    :try_start_0
    invoke-virtual {p1}, Lorg/json/JSONObject;->length()I

    move-result v0

    const/16 v1, 0x14

    if-ge v0, v1, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    const-wide v1, 0x7fffffffffffffffL

    const/4 v3, 0x0

    invoke-virtual {p1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v4

    :cond_1
    :goto_0
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_3

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    invoke-virtual {p1, v5}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v6

    const-string v7, "timestamp"

    invoke-virtual {v6, v7}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v6

    cmp-long v8, v1, v6

    if-lez v8, :cond_2

    move-object v3, v5

    move-wide v1, v6

    :cond_2
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    const-wide/32 v10, 0x19bfcc00

    sub-long/2addr v8, v10

    cmp-long v5, v6, v8

    if-gez v5, :cond_1

    invoke-interface {v4}, Ljava/util/Iterator;->remove()V

    const/4 v0, 0x1

    goto :goto_0

    :cond_3
    if-nez v0, :cond_4

    if-eqz v3, :cond_4

    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->remove(Ljava/lang/String;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_4
    return-void
.end method


# virtual methods
.method public a()Lorg/json/JSONObject;
    .locals 3

    :try_start_0
    iget-object v0, p0, Lcom/igexin/push/core/b/d;->a:Landroid/content/SharedPreferences;

    const-string v1, "taskIdList"

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v1

    :catchall_0
    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public a(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 3

    iget-object v0, p0, Lcom/igexin/push/core/b/d;->a:Landroid/content/SharedPreferences;

    if-eqz v0, :cond_3

    if-eqz p2, :cond_3

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    sget-object v0, Lcom/igexin/push/core/b/d;->b:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    invoke-virtual {p0}, Lcom/igexin/push/core/b/d;->b()Lorg/json/JSONObject;

    move-result-object v1

    if-nez v1, :cond_1

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    :cond_1
    invoke-virtual {v1}, Lorg/json/JSONObject;->length()I

    move-result v2

    if-lez v2, :cond_2

    invoke-direct {p0, v1}, Lcom/igexin/push/core/b/d;->b(Lorg/json/JSONObject;)V

    :cond_2
    invoke-virtual {v1, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    iget-object p1, p0, Lcom/igexin/push/core/b/d;->a:Landroid/content/SharedPreferences;

    invoke-interface {p1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    const-string p2, "usfdl"

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, p2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :try_start_1
    monitor-exit v0

    return-void

    :catchall_1
    move-exception p1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    throw p1

    :cond_3
    :goto_0
    return-void
.end method

.method public a(Ljava/lang/String;)Z
    .locals 3

    iget-object v0, p0, Lcom/igexin/push/core/b/d;->a:Landroid/content/SharedPreferences;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    :try_start_0
    invoke-virtual {p0}, Lcom/igexin/push/core/b/d;->a()Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "sp task "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " already exists"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v0, v1, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p1, 0x1

    return p1

    :catchall_0
    :cond_1
    :goto_0
    return v1
.end method

.method public b()Lorg/json/JSONObject;
    .locals 3

    :try_start_0
    iget-object v0, p0, Lcom/igexin/push/core/b/d;->a:Landroid/content/SharedPreferences;

    const-string v1, "usfdl"

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v1

    :catchall_0
    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public b(Ljava/lang/String;)V
    .locals 4

    iget-object v0, p0, Lcom/igexin/push/core/b/d;->a:Landroid/content/SharedPreferences;

    if-eqz v0, :cond_3

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    sget-object v0, Lcom/igexin/push/core/b/d;->c:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    invoke-virtual {p0}, Lcom/igexin/push/core/b/d;->a()Lorg/json/JSONObject;

    move-result-object v1

    if-nez v1, :cond_1

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    :cond_1
    invoke-virtual {v1}, Lorg/json/JSONObject;->length()I

    move-result v2

    if-lez v2, :cond_2

    invoke-direct {p0, v1}, Lcom/igexin/push/core/b/d;->a(Lorg/json/JSONObject;)V

    :cond_2
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v1, p1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    iget-object p1, p0, Lcom/igexin/push/core/b/d;->a:Landroid/content/SharedPreferences;

    invoke-interface {p1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    const-string v2, "taskIdList"

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :try_start_1
    monitor-exit v0

    return-void

    :catchall_1
    move-exception p1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    throw p1

    :cond_3
    :goto_0
    return-void
.end method

.method public c()Lorg/json/JSONObject;
    .locals 10

    sget-object v0, Lcom/igexin/push/core/b/d;->b:Ljava/lang/Object;

    monitor-enter v0

    const/4 v1, 0x0

    :try_start_0
    iget-object v2, p0, Lcom/igexin/push/core/b/d;->a:Landroid/content/SharedPreferences;

    const-string v3, "usfdl"

    const-string v4, ""

    invoke-interface {v2, v3, v4}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v3, :cond_0

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-object v1

    :cond_0
    :try_start_2
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v2

    :cond_1
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_3

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v3, v4}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v4

    const-string v5, "timestamp"

    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_2

    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->remove()V

    goto :goto_0

    :cond_2
    const-string v5, "timestamp"

    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v4

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    const-wide/32 v8, 0x19bfcc00

    sub-long/2addr v6, v8

    cmp-long v4, v4, v6

    if-gez v4, :cond_1

    goto :goto_1

    :cond_3
    :try_start_3
    monitor-exit v0

    return-object v3

    :catchall_0
    monitor-exit v0

    return-object v1

    :catchall_1
    move-exception v1

    monitor-exit v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    throw v1
.end method

.method public c(Ljava/lang/String;)V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/igexin/push/core/b/d;->a:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    const-string v1, "gx_vendor_token"

    invoke-interface {v0, v1, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public d()V
    .locals 4

    sget-object v0, Lcom/igexin/push/core/b/d;->b:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/igexin/push/core/b/d;->a:Landroid/content/SharedPreferences;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/igexin/push/core/b/d;->a:Landroid/content/SharedPreferences;

    invoke-interface {v1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    const-string v2, "usfdl"

    const-string v3, ""

    invoke-interface {v1, v2, v3}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    :try_start_1
    monitor-exit v0

    return-void

    :catchall_1
    move-exception v1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    throw v1
.end method

.method public e()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/igexin/push/core/b/d;->a:Landroid/content/SharedPreferences;

    const-string v2, "gx_vendor_token"

    invoke-interface {v1, v2, v0}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-object v0
.end method
