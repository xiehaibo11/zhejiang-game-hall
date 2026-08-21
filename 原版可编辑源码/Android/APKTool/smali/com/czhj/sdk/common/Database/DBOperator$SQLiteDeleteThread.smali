.class Lcom/czhj/sdk/common/Database/DBOperator$SQLiteDeleteThread;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/Database/DBOperator;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "SQLiteDeleteThread"
.end annotation


# instance fields
.field final synthetic a:Lcom/czhj/sdk/common/Database/DBOperator;

.field private final b:Ljava/lang/String;

.field private final c:Ljava/lang/String;

.field private final d:Lcom/czhj/sdk/common/Database/SQLiteLisenter;

.field private final e:Landroid/database/sqlite/SQLiteDatabase;


# direct methods
.method constructor <init>(Lcom/czhj/sdk/common/Database/DBOperator;Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/sdk/common/Database/SQLiteLisenter;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteDeleteThread;->a:Lcom/czhj/sdk/common/Database/DBOperator;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p3, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteDeleteThread;->b:Ljava/lang/String;

    iput-object p2, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteDeleteThread;->e:Landroid/database/sqlite/SQLiteDatabase;

    iput-object p4, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteDeleteThread;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteDeleteThread;->d:Lcom/czhj/sdk/common/Database/SQLiteLisenter;

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    :try_start_0
    iget-object v0, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteDeleteThread;->e:Landroid/database/sqlite/SQLiteDatabase;

    iget-object v1, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteDeleteThread;->b:Ljava/lang/String;

    iget-object v2, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteDeleteThread;->c:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v2, v3}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    iget-object v0, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteDeleteThread;->d:Lcom/czhj/sdk/common/Database/SQLiteLisenter;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteDeleteThread;->d:Lcom/czhj/sdk/common/Database/SQLiteLisenter;

    invoke-interface {v0, v3}, Lcom/czhj/sdk/common/Database/SQLiteLisenter;->onSuccess(Ljava/util/List;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    iget-object v1, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteDeleteThread;->d:Lcom/czhj/sdk/common/Database/SQLiteLisenter;

    if-eqz v1, :cond_0

    new-instance v2, Ljava/lang/Error;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v2, v0}, Ljava/lang/Error;-><init>(Ljava/lang/String;)V

    invoke-interface {v1, v2}, Lcom/czhj/sdk/common/Database/SQLiteLisenter;->onFailed(Ljava/lang/Error;)V

    :cond_0
    :goto_0
    return-void
.end method
