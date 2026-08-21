.class public final Lcom/kwad/sdk/i/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/i/a$b;,
        Lcom/kwad/sdk/i/a$a;
    }
.end annotation


# static fields
.field private static aCP:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static volatile aCQ:Z


# direct methods
.method private static declared-synchronized Gc()V
    .locals 5

    const-class v0, Lcom/kwad/sdk/i/a;

    monitor-enter v0

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/i/a;->Ge()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v2

    if-nez v2, :cond_0

    const-string v2, "DynamicRunMonitor"

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "monitorInfoList:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "monitor_info_list"

    invoke-static {v2, v3, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/List;)V

    invoke-static {v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->r(Lorg/json/JSONObject;)V

    :cond_0
    const/4 v1, 0x1

    sput-boolean v1, Lcom/kwad/sdk/i/a;->aCQ:Z

    invoke-static {}, Lcom/kwad/sdk/i/a;->Gd()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method private static Gd()V
    .locals 2

    sget-object v0, Lcom/kwad/sdk/i/a;->aCP:Ljava/util/List;

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-static {v1}, Lcom/kwad/sdk/i/a;->eX(Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    sget-object v0, Lcom/kwad/sdk/i/a;->aCP:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    return-void
.end method

.method private static declared-synchronized Ge()Ljava/util/List;
    .locals 14
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/i/a$a;",
            ">;"
        }
    .end annotation

    const-class v0, Lcom/kwad/sdk/i/a;

    monitor-enter v0

    :try_start_0
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "dynamic_monitor_info"

    invoke-static {v2, v3}, Lcom/kwad/sdk/utils/y;->ai(Landroid/content/Context;Ljava/lang/String;)Ljava/util/Map;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v2, :cond_0

    monitor-exit v0

    return-object v1

    :cond_0
    :try_start_1
    invoke-interface {v2}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :cond_1
    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_5

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    const-string v5, "enter"

    invoke-virtual {v4, v5}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_1

    invoke-interface {v2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    instance-of v6, v5, Ljava/lang/Long;

    const-wide/16 v7, 0x0

    if-eqz v6, :cond_2

    check-cast v5, Ljava/lang/Long;

    invoke-virtual {v5}, Ljava/lang/Long;->longValue()J

    move-result-wide v5

    goto :goto_1

    :cond_2
    move-wide v5, v7

    :goto_1
    invoke-static {v4}, Lcom/kwad/sdk/i/a$b;->fa(Ljava/lang/String;)Lcom/kwad/sdk/i/a$b;

    move-result-object v9

    invoke-static {v9}, Lcom/kwad/sdk/i/a$b;->b(Lcom/kwad/sdk/i/a$b;)Ljava/lang/String;

    move-result-object v10

    invoke-interface {v2, v10}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    instance-of v12, v11, Ljava/lang/Long;

    if-eqz v12, :cond_3

    check-cast v11, Ljava/lang/Long;

    invoke-virtual {v11}, Ljava/lang/Long;->longValue()J

    move-result-wide v11

    goto :goto_2

    :cond_3
    move-wide v11, v7

    :goto_2
    sub-long v11, v5, v11

    cmp-long v13, v11, v7

    if-lez v13, :cond_4

    move-wide v7, v11

    :cond_4
    new-instance v13, Lcom/kwad/sdk/i/a$a;

    invoke-direct {v13}, Lcom/kwad/sdk/i/a$a;-><init>()V

    iput-wide v5, v13, Lcom/kwad/sdk/i/a$a;->aCR:J

    iput-wide v7, v13, Lcom/kwad/sdk/i/a$a;->aCS:J

    iput-wide v11, v13, Lcom/kwad/sdk/i/a$a;->aCT:J

    invoke-static {v9}, Lcom/kwad/sdk/i/a$b;->c(Lcom/kwad/sdk/i/a$b;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v13, Lcom/kwad/sdk/i/a$a;->aCU:Ljava/lang/String;

    invoke-static {v9}, Lcom/kwad/sdk/i/a$b;->d(Lcom/kwad/sdk/i/a$b;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v13, Lcom/kwad/sdk/i/a$a;->aCV:Ljava/lang/String;

    invoke-static {v9}, Lcom/kwad/sdk/i/a$b;->e(Lcom/kwad/sdk/i/a$b;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v13, Lcom/kwad/sdk/i/a$a;->aCW:Ljava/lang/String;

    invoke-static {v9}, Lcom/kwad/sdk/i/a$b;->f(Lcom/kwad/sdk/i/a$b;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v13, Lcom/kwad/sdk/i/a$a;->sdkVersion:Ljava/lang/String;

    invoke-interface {v1, v13}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    const-string v5, "dynamic_monitor_info"

    invoke-static {v5, v4}, Lcom/kwad/sdk/utils/y;->ar(Ljava/lang/String;Ljava/lang/String;)V

    const-string v4, "dynamic_monitor_info"

    invoke-static {v4, v10}, Lcom/kwad/sdk/utils/y;->ar(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :cond_5
    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method static synthetic Gf()V
    .locals 0

    invoke-static {}, Lcom/kwad/sdk/i/a;->Gc()V

    return-void
.end method

.method public static ah(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    const-string v0, "other"

    invoke-static {p0, p1, v0}, Lcom/kwad/sdk/i/a;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static ai(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    const-string v0, "other"

    invoke-static {p0, p1, v0}, Lcom/kwad/sdk/i/a;->f(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private static declared-synchronized b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    const-class v0, Lcom/kwad/sdk/i/a;

    monitor-enter v0

    :try_start_0
    invoke-static {p0, p1, p2, p3}, Lcom/kwad/sdk/i/a$b;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sget-boolean p1, Lcom/kwad/sdk/i/a;->aCQ:Z

    if-nez p1, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/i/a;->eY(Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/i/a;->eX(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    :try_start_1
    invoke-static {p0}, Lcom/kwad/components/core/d/a;->b(Ljava/lang/Throwable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :goto_0
    monitor-exit v0

    return-void

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    const-string v0, "enter"

    invoke-static {v0, p0, p1, p2}, Lcom/kwad/sdk/i/a;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private static declared-synchronized eX(Ljava/lang/String;)V
    .locals 6

    const-class v0, Lcom/kwad/sdk/i/a;

    monitor-enter v0

    :try_start_0
    const-string v1, "dynamic_monitor_info"

    const-wide/16 v2, 0x0

    invoke-static {v1, p0, v2, v3}, Lcom/kwad/sdk/utils/y;->b(Ljava/lang/String;Ljava/lang/String;J)J

    move-result-wide v1

    const-string v3, "DynamicRunMonitor"

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "increaseLocalCount: "

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "--lastCount:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "dynamic_monitor_info"

    const-wide/16 v4, 0x1

    add-long/2addr v1, v4

    invoke-static {v3, p0, v1, v2}, Lcom/kwad/sdk/utils/y;->a(Ljava/lang/String;Ljava/lang/String;J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private static eY(Ljava/lang/String;)V
    .locals 2

    sget-object v0, Lcom/kwad/sdk/i/a;->aCP:Ljava/util/List;

    if-nez v0, :cond_0

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    sput-object v0, Lcom/kwad/sdk/i/a;->aCP:Ljava/util/List;

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "saveToCache: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DynamicRunMonitor"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    sget-object v0, Lcom/kwad/sdk/i/a;->aCP:Ljava/util/List;

    invoke-interface {v0, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public static f(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    const-string v0, "exit"

    invoke-static {v0, p0, p1, p2}, Lcom/kwad/sdk/i/a;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static report()V
    .locals 4

    new-instance v0, Lcom/kwad/sdk/i/a$1;

    invoke-direct {v0}, Lcom/kwad/sdk/i/a$1;-><init>()V

    sget-object v1, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    const-wide/16 v2, 0x1

    invoke-static {v0, v2, v3, v1}, Lcom/kwad/sdk/utils/g;->schedule(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)V

    return-void
.end method
