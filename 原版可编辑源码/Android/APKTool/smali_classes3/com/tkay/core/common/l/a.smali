.class public abstract Lcom/tkay/core/common/l/a;
.super Ljava/lang/Object;


# instance fields
.field private a:Z

.field private final b:Lcom/tkay/core/common/j/a;

.field private final c:Lcom/tkay/core/common/j/b;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 1016
    invoke-static {}, Lcom/tkay/core/common/j/c;->a()Lcom/tkay/core/common/j/a;

    move-result-object v0

    .line 18
    iput-object v0, p0, Lcom/tkay/core/common/l/a;->b:Lcom/tkay/core/common/j/a;

    .line 20
    new-instance v0, Lcom/tkay/core/common/l/a$1;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/l/a$1;-><init>(Lcom/tkay/core/common/l/a;)V

    iput-object v0, p0, Lcom/tkay/core/common/l/a;->c:Lcom/tkay/core/common/j/b;

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/l/a;)Z
    .locals 0

    .line 14
    iget-boolean p0, p0, Lcom/tkay/core/common/l/a;->a:Z

    return p0
.end method

.method static synthetic b(Lcom/tkay/core/common/l/a;)Z
    .locals 1

    const/4 v0, 0x1

    .line 14
    iput-boolean v0, p0, Lcom/tkay/core/common/l/a;->a:Z

    return v0
.end method

.method private c()Z
    .locals 1

    .line 41
    iget-boolean v0, p0, Lcom/tkay/core/common/l/a;->a:Z

    return v0
.end method


# virtual methods
.method public final declared-synchronized a()V
    .locals 2

    monitor-enter p0

    .line 37
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/l/a;->b:Lcom/tkay/core/common/j/a;

    iget-object v1, p0, Lcom/tkay/core/common/l/a;->c:Lcom/tkay/core/common/j/b;

    invoke-interface {v0, v1}, Lcom/tkay/core/common/j/a;->a(Lcom/tkay/core/common/j/b;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 38
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method protected final declared-synchronized a(J)V
    .locals 3

    monitor-enter p0

    .line 33
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/l/a;->b:Lcom/tkay/core/common/j/a;

    iget-object v1, p0, Lcom/tkay/core/common/l/a;->c:Lcom/tkay/core/common/j/b;

    const/4 v2, 0x0

    invoke-interface {v0, v1, p1, p2, v2}, Lcom/tkay/core/common/j/a;->a(Lcom/tkay/core/common/j/b;JZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 34
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method protected abstract b()V
.end method
