.class public final Lcom/tkay/core/common/f/ae;
.super Ljava/lang/Object;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Z

.field private c:Ljava/lang/Boolean;


# direct methods
.method public constructor <init>(Ljava/lang/String;Z)V
    .locals 0

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 10
    iput-object p1, p0, Lcom/tkay/core/common/f/ae;->a:Ljava/lang/String;

    .line 11
    iput-boolean p2, p0, Lcom/tkay/core/common/f/ae;->b:Z

    return-void
.end method


# virtual methods
.method public final declared-synchronized a()Ljava/lang/String;
    .locals 1

    monitor-enter p0

    .line 19
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/f/ae;->a:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized a(Z)V
    .locals 0

    monitor-enter p0

    .line 15
    :try_start_0
    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/f/ae;->c:Ljava/lang/Boolean;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 16
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized b()Z
    .locals 1

    monitor-enter p0

    .line 23
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/core/common/f/ae;->b:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized c()Ljava/lang/Boolean;
    .locals 1

    monitor-enter p0

    .line 27
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/f/ae;->c:Ljava/lang/Boolean;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method
