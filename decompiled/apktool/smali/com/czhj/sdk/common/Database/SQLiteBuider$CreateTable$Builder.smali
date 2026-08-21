.class public Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "Builder"
.end annotation


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private d:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->a:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->b:Ljava/util/Map;

    iput-object v0, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->c:Ljava/util/Map;

    return-void
.end method


# virtual methods
.method public autoincrement(Z)Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;
    .locals 0

    iput-boolean p1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->d:Z

    return-object p0
.end method

.method public build()Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable;
    .locals 6

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "create table if not exists "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " ( "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->b:Ljava/util/Map;

    invoke-static {v1}, Lcom/czhj/sdk/common/Database/SQLiteBuider;->a(Ljava/util/Map;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v2

    const/4 v3, 0x1

    const-string v4, " ,"

    if-le v2, v3, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->c:Ljava/util/Map;

    invoke-static {v1}, Lcom/czhj/sdk/common/Database/SQLiteBuider;->a(Ljava/util/Map;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_0
    const-string v1, " primary key ( "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->b:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    :cond_1
    const-string v2, " )"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    :cond_2
    iget-boolean v2, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->d:Z

    const/4 v5, 0x0

    if-eqz v2, :cond_3

    new-array v1, v5, [Ljava/lang/Object;

    const-string v2, "id integer primary key AUTOINCREMENT"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    goto :goto_2

    :cond_3
    new-array v2, v3, [Ljava/lang/Object;

    invoke-interface {v1, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    aput-object v1, v2, v5

    const-string v1, "%s primary key "

    invoke-static {v1, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    :goto_2
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->c:Ljava/util/Map;

    iget-object v2, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->b:Ljava/util/Map;

    invoke-interface {v2}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->c:Ljava/util/Map;

    invoke-static {v1}, Lcom/czhj/sdk/common/Database/SQLiteBuider;->a(Ljava/util/Map;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_3
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_3

    :cond_4
    const-string v1, " ); "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v1, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable;

    invoke-direct {v1}, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable;-><init>()V

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable;->b:Ljava/lang/String;

    iget-object v0, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->a:Ljava/lang/String;

    iput-object v0, v1, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable;->a:Ljava/lang/String;

    return-object v1
.end method

.method public setColumns(Ljava/util/Map;)Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;"
        }
    .end annotation

    iput-object p1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->c:Ljava/util/Map;

    return-object p0
.end method

.method public setPrimaryKey(Ljava/lang/String;Ljava/lang/String;)Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;
    .locals 1

    iget-object v0, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->b:Ljava/util/Map;

    if-nez v0, :cond_0

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->b:Ljava/util/Map;

    :cond_0
    iget-object v0, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->b:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object p0
.end method

.method public setTableName(Ljava/lang/String;)Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable$Builder;->a:Ljava/lang/String;

    return-object p0
.end method
