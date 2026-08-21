.class public Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert$Builder;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert;
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
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert$Builder;->a:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert$Builder;->b:Ljava/util/Map;

    return-void
.end method


# virtual methods
.method public build()Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert;
    .locals 6

    iget-object v0, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert$Builder;->b:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->toArray()[Ljava/lang/Object;

    move-result-object v0

    invoke-static {v0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "insert or replace into "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert$Builder;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "("

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const/4 v3, 0x0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v5

    if-ge v3, v5, :cond_1

    invoke-interface {v0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v5, "?"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v3, v3, 0x1

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v5

    if-ge v3, v5, :cond_0

    const-string v5, ", "

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_1
    const-string v3, ")"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;

    const-string v2, " values "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;

    new-instance v2, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert;

    invoke-direct {v2}, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert;-><init>()V

    iget-object v3, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert$Builder;->a:Ljava/lang/String;

    iput-object v3, v2, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert;->a:Ljava/lang/String;

    iput-object v0, v2, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert;->d:Ljava/util/List;

    iget-object v0, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert$Builder;->b:Ljava/util/Map;

    iput-object v0, v2, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert;->c:Ljava/util/Map;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v2, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert;->b:Ljava/lang/String;

    return-object v2
.end method

.method public setColumnValues(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    iput-object p1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert$Builder;->b:Ljava/util/Map;

    return-void
.end method

.method public setTableName(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert$Builder;->a:Ljava/lang/String;

    return-void
.end method
