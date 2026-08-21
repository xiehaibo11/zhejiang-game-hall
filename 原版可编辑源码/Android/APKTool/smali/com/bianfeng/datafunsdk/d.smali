.class public Lcom/bianfeng/datafunsdk/d;
.super Lcom/bianfeng/datafunsdk/l;
.source "ByteDataTask.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/bianfeng/datafunsdk/l<",
        "Lcom/bianfeng/datafunsdk/bean/DataFunBean;",
        ">;"
    }
.end annotation


# static fields
.field public static volatile g:Lcom/bianfeng/datafunsdk/d;


# instance fields
.field public f:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 1
    invoke-direct {p0}, Lcom/bianfeng/datafunsdk/l;-><init>()V

    .line 2
    const-class v0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;

    invoke-virtual {p0, v0}, Lcom/bianfeng/datafunsdk/l;->a(Ljava/lang/Class;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/bianfeng/datafunsdk/d;->f:Z

    return-void
.end method

.method public static e()Lcom/bianfeng/datafunsdk/d;
    .locals 2

    .line 1
    sget-object v0, Lcom/bianfeng/datafunsdk/d;->g:Lcom/bianfeng/datafunsdk/d;

    if-nez v0, :cond_1

    .line 2
    const-class v0, Lcom/bianfeng/datafunsdk/d;

    monitor-enter v0

    .line 3
    :try_start_0
    sget-object v1, Lcom/bianfeng/datafunsdk/d;->g:Lcom/bianfeng/datafunsdk/d;

    if-nez v1, :cond_0

    .line 4
    new-instance v1, Lcom/bianfeng/datafunsdk/d;

    invoke-direct {v1}, Lcom/bianfeng/datafunsdk/d;-><init>()V

    sput-object v1, Lcom/bianfeng/datafunsdk/d;->g:Lcom/bianfeng/datafunsdk/d;

    .line 6
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 8
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/datafunsdk/d;->g:Lcom/bianfeng/datafunsdk/d;

    return-object v0
.end method


# virtual methods
.method public declared-synchronized a(Lcom/bianfeng/datafunsdk/bean/DataFunBean;Lcom/bianfeng/datafunsdk/e;)V
    .locals 7

    monitor-enter p0

    :try_start_0
    const-string v0, "PostDatalib \u5f00\u59cb\u63d2\u5165\u6570\u636e--insert"

    .line 1
    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 2
    iget-boolean v0, p0, Lcom/bianfeng/datafunsdk/d;->f:Z

    if-nez v0, :cond_0

    .line 3
    invoke-interface {p2, p1}, Lcom/bianfeng/datafunsdk/e;->c(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    .line 8
    :cond_0
    :try_start_1
    invoke-virtual {p0, p1}, Lcom/bianfeng/datafunsdk/l;->b(Ljava/lang/Object;)Ljava/lang/Long;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    long-to-int v2, v0

    .line 14
    :try_start_2
    invoke-virtual {p1, v2}, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->setId(I)V

    long-to-double v2, v0

    const-wide v4, 0x41d7ffffffd00000L    # 1.61061273525E9

    cmpl-double v6, v2, v4

    if-lez v6, :cond_1

    .line 16
    sget-object v2, Lcom/bianfeng/datafunsdk/g;->b:Lcom/bianfeng/datafunsdk/g;

    invoke-virtual {v2}, Ljava/lang/Enum;->ordinal()I

    move-result v2

    invoke-static {v2}, Lcom/bianfeng/datafunsdk/y;->a(I)V

    :cond_1
    const-wide/16 v2, -0x1

    cmp-long v4, v0, v2

    if-eqz v4, :cond_2

    .line 20
    invoke-interface {p2, p1}, Lcom/bianfeng/datafunsdk/e;->b(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    goto :goto_0

    .line 22
    :cond_2
    invoke-interface {p2, p1}, Lcom/bianfeng/datafunsdk/e;->c(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :goto_0
    monitor-exit p0

    return-void

    .line 23
    :catch_0
    move-exception v0

    :try_start_3
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 24
    invoke-interface {p2, p1}, Lcom/bianfeng/datafunsdk/e;->c(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    monitor-exit p0

    return-void

    .line 0
    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public a(Lcom/bianfeng/datafunsdk/e;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 25
    iget-boolean v0, p0, Lcom/bianfeng/datafunsdk/d;->f:Z

    if-nez v0, :cond_0

    .line 26
    invoke-interface {p1}, Lcom/bianfeng/datafunsdk/e;->a()V

    return-void

    .line 32
    :cond_0
    :try_start_0
    invoke-virtual {p0, p2, p3}, Lcom/bianfeng/datafunsdk/l;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object p2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 37
    invoke-interface {p2}, Ljava/util/List;->isEmpty()Z

    move-result p3

    if-eqz p3, :cond_1

    .line 38
    invoke-interface {p1}, Lcom/bianfeng/datafunsdk/e;->a()V

    goto :goto_0

    .line 40
    :cond_1
    invoke-interface {p1, p2}, Lcom/bianfeng/datafunsdk/e;->a(Ljava/util/List;)V

    :goto_0
    return-void

    .line 41
    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public a(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)Z
    .locals 2

    .line 42
    iget-boolean v0, p0, Lcom/bianfeng/datafunsdk/d;->f:Z

    const/4 v1, 0x1

    if-nez v0, :cond_0

    return v1

    .line 47
    :cond_0
    const/4 v0, 0x0

    :try_start_0
    invoke-virtual {p0, p1}, Lcom/bianfeng/datafunsdk/l;->a(Ljava/lang/Object;)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 49
    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 50
    const-string p1, "ByteDataTask deleteEvent \u5f02\u5e38"

    invoke-static {p1}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    const/4 p1, 0x0

    :goto_0
    if-nez p1, :cond_1

    return v0

    :cond_1
    return v1
.end method
