.class public Lcom/sigmob/sdk/videocache/v;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/videocache/v$a;
    }
.end annotation


# static fields
.field private static a:Lcom/sigmob/sdk/videocache/v;


# instance fields
.field private b:Ljava/util/concurrent/ExecutorService;

.field private c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/ref/WeakReference<",
            "Lcom/sigmob/sdk/videocache/v$a;",
            ">;>;"
        }
    .end annotation
.end field

.field private d:Landroid/content/Context;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0x8

    invoke-static {v0}, Ljava/util/concurrent/Executors;->newFixedThreadPool(I)Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/videocache/v;->b:Ljava/util/concurrent/ExecutorService;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/videocache/v;->c:Ljava/util/Map;

    iput-object p1, p0, Lcom/sigmob/sdk/videocache/v;->d:Landroid/content/Context;

    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/sigmob/sdk/videocache/v;
    .locals 2

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    sget-object v0, Lcom/sigmob/sdk/videocache/v;->a:Lcom/sigmob/sdk/videocache/v;

    if-nez v0, :cond_1

    const-class v0, Lcom/sigmob/sdk/videocache/v;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/sigmob/sdk/videocache/v;->a:Lcom/sigmob/sdk/videocache/v;

    if-nez v1, :cond_0

    new-instance v1, Lcom/sigmob/sdk/videocache/v;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/videocache/v;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/sigmob/sdk/videocache/v;->a:Lcom/sigmob/sdk/videocache/v;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_1
    :goto_0
    sget-object p0, Lcom/sigmob/sdk/videocache/v;->a:Lcom/sigmob/sdk/videocache/v;

    return-object p0
.end method


# virtual methods
.method public a(Ljava/lang/String;)V
    .locals 3

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "http"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_0

    new-array v0, v2, [Ljava/lang/Object;

    aput-object p1, v0, v1

    const-string v1, "preloadVideo,\u7f51\u7edc\u6587\u4ef6,\u5f00\u59cb\u4e0b\u8f7d:ulr=%s"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    new-instance v0, Lcom/sigmob/sdk/videocache/v$a;

    invoke-direct {v0, p1}, Lcom/sigmob/sdk/videocache/v$a;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/videocache/v;->c:Ljava/util/Map;

    new-instance v2, Ljava/lang/ref/WeakReference;

    invoke-direct {v2, v0}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-interface {v1, p1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object p1, p0, Lcom/sigmob/sdk/videocache/v;->b:Ljava/util/concurrent/ExecutorService;

    invoke-interface {p1, v0}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    goto :goto_0

    :cond_0
    new-array v0, v2, [Ljava/lang/Object;

    aput-object p1, v0, v1

    const-string p1, "preloadVideo,\u672c\u5730\u6587\u4ef6:ulr=%s"

    invoke-static {p1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public b(Ljava/lang/String;)V
    .locals 4

    const/4 v0, 0x1

    new-array v1, v0, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    const-string v3, "cancelPreLoadVideo,ulr=%s"

    invoke-static {v3, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/videocache/v;->c:Ljava/util/Map;

    if-eqz v1, :cond_0

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/videocache/v;->c:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/ref/WeakReference;

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/videocache/v$a;

    if-eqz v1, :cond_0

    new-array v3, v0, [Ljava/lang/Object;

    aput-object p1, v3, v2

    const-string p1, "cancelPreLoadVideo,\u53d6\u6d88\u7f51\u7edc\u8bf7\u6c42,ulr=%s"

    invoke-static {p1, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/videocache/v$a;->a(Z)V

    :cond_0
    return-void
.end method
