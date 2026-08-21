.class Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/Database/DBOperator;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "SQLiteThread"
.end annotation


# instance fields
.field final synthetic a:Lcom/czhj/sdk/common/Database/DBOperator;

.field private final b:Ljava/lang/String;

.field private final c:[Ljava/lang/String;

.field private final d:Ljava/lang/String;

.field private final e:[Ljava/lang/String;

.field private final f:Ljava/lang/String;

.field private final g:Ljava/lang/String;

.field private final h:Ljava/lang/String;

.field private final i:Ljava/lang/String;

.field private final j:Landroid/database/sqlite/SQLiteDatabase;

.field private final k:Lcom/czhj/sdk/common/Database/DBOperator$DataSQLiteLisenter;


# direct methods
.method constructor <init>(Lcom/czhj/sdk/common/Database/DBOperator;Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/sdk/common/Database/DBOperator$DataSQLiteLisenter;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->a:Lcom/czhj/sdk/common/Database/DBOperator;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p3, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->b:Ljava/lang/String;

    iput-object p2, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->j:Landroid/database/sqlite/SQLiteDatabase;

    iput-object p4, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->c:[Ljava/lang/String;

    iput-object p5, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->d:Ljava/lang/String;

    iput-object p6, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->e:[Ljava/lang/String;

    iput-object p7, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->f:Ljava/lang/String;

    iput-object p8, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->g:Ljava/lang/String;

    iput-object p9, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->h:Ljava/lang/String;

    iput-object p10, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->i:Ljava/lang/String;

    iput-object p11, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->k:Lcom/czhj/sdk/common/Database/DBOperator$DataSQLiteLisenter;

    return-void
.end method

.method private a(Landroid/database/Cursor;)Ljava/util/List;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/database/Cursor;",
            ")",
            "Ljava/util/List<",
            "Ljava/util/Map;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    :goto_0
    invoke-interface {p1}, Landroid/database/Cursor;->moveToNext()Z

    move-result v1

    if-eqz v1, :cond_5

    invoke-interface {p1}, Landroid/database/Cursor;->getColumnNames()[Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    array-length v3, v1

    const/4 v4, 0x0

    :goto_1
    if-ge v4, v3, :cond_4

    aget-object v5, v1, v4

    invoke-interface {p1, v5}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v6

    invoke-interface {p1, v6}, Landroid/database/Cursor;->getType(I)I

    move-result v6

    const/4 v7, 0x1

    if-eq v6, v7, :cond_3

    const/4 v7, 0x2

    if-eq v6, v7, :cond_2

    const/4 v7, 0x3

    if-eq v6, v7, :cond_1

    const/4 v7, 0x4

    if-eq v6, v7, :cond_0

    goto :goto_3

    :cond_0
    invoke-interface {p1, v5}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v6

    invoke-interface {p1, v6}, Landroid/database/Cursor;->getBlob(I)[B

    move-result-object v6

    invoke-interface {v2, v5, v6}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_3

    :cond_1
    invoke-interface {p1, v5}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v6

    invoke-interface {p1, v6}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v6

    goto :goto_2

    :cond_2
    invoke-interface {p1, v5}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v6

    invoke-interface {p1, v6}, Landroid/database/Cursor;->getDouble(I)D

    move-result-wide v6

    invoke-static {v6, v7}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v6

    goto :goto_2

    :cond_3
    invoke-interface {p1, v5}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v6

    invoke-interface {p1, v6}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v6

    invoke-static {v6, v7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v6

    :goto_2
    invoke-interface {v2, v5, v6}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :goto_3
    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    :cond_4
    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_5
    return-object v0
.end method


# virtual methods
.method public run()V
    .locals 10

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->j:Landroid/database/sqlite/SQLiteDatabase;

    iget-object v2, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->c:[Ljava/lang/String;

    iget-object v4, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->d:Ljava/lang/String;

    iget-object v5, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->e:[Ljava/lang/String;

    iget-object v6, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->f:Ljava/lang/String;

    iget-object v7, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->g:Ljava/lang/String;

    iget-object v8, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->h:Ljava/lang/String;

    iget-object v9, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->i:Ljava/lang/String;

    invoke-virtual/range {v1 .. v9}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->a(Landroid/database/Cursor;)Ljava/util/List;

    move-result-object v1

    iget-object v2, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->k:Lcom/czhj/sdk/common/Database/DBOperator$DataSQLiteLisenter;

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->k:Lcom/czhj/sdk/common/Database/DBOperator$DataSQLiteLisenter;

    invoke-interface {v2, v1}, Lcom/czhj/sdk/common/Database/DBOperator$DataSQLiteLisenter;->onSuccess(Ljava/util/List;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    if-eqz v0, :cond_2

    goto :goto_0

    :catchall_0
    move-exception v1

    :try_start_1
    iget-object v2, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->k:Lcom/czhj/sdk/common/Database/DBOperator$DataSQLiteLisenter;

    if-eqz v2, :cond_1

    iget-object v2, p0, Lcom/czhj/sdk/common/Database/DBOperator$SQLiteThread;->k:Lcom/czhj/sdk/common/Database/DBOperator$DataSQLiteLisenter;

    new-instance v3, Ljava/lang/Error;

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v3, v1}, Ljava/lang/Error;-><init>(Ljava/lang/String;)V

    invoke-interface {v2, v3}, Lcom/czhj/sdk/common/Database/DBOperator$DataSQLiteLisenter;->onFailed(Ljava/lang/Error;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :cond_1
    if-eqz v0, :cond_2

    :goto_0
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    :cond_2
    return-void

    :catchall_1
    move-exception v1

    if-eqz v0, :cond_3

    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    :cond_3
    throw v1
.end method
