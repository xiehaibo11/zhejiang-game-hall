.class public Lcom/tkay/core/common/c/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# instance fields
.field protected a:Lcom/tkay/core/common/c/b;


# direct methods
.method public constructor <init>(Lcom/tkay/core/common/c/b;)V
    .locals 1

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 17
    iput-object v0, p0, Lcom/tkay/core/common/c/a;->a:Lcom/tkay/core/common/c/b;

    .line 20
    iput-object p1, p0, Lcom/tkay/core/common/c/a;->a:Lcom/tkay/core/common/c/b;

    return-void
.end method


# virtual methods
.method protected final declared-synchronized a()Landroid/database/sqlite/SQLiteDatabase;
    .locals 1

    monitor-enter p0

    .line 24
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/c/a;->a:Lcom/tkay/core/common/c/b;

    invoke-virtual {v0}, Lcom/tkay/core/common/c/b;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method protected final declared-synchronized b()Landroid/database/sqlite/SQLiteDatabase;
    .locals 1

    monitor-enter p0

    .line 28
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/c/a;->a:Lcom/tkay/core/common/c/b;

    invoke-virtual {v0}, Lcom/tkay/core/common/c/b;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method
