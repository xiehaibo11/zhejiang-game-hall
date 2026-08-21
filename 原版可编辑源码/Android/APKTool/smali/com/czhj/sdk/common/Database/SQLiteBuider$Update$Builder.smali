.class public Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/Database/SQLiteBuider$Update;
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

.field private c:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;->a:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;->b:Ljava/util/Map;

    iput-object v0, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;->c:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public build()Lcom/czhj/sdk/common/Database/SQLiteBuider$Update;
    .locals 5

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "update "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " set "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;->b:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;->b:Ljava/util/Map;

    invoke-interface {v4, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    const-string v2, ", "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_1
    iget-object v1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;->c:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, " "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    new-instance v1, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update;

    invoke-direct {v1}, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update;-><init>()V

    iget-object v2, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;->a:Ljava/lang/String;

    iput-object v2, v1, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update;->a:Ljava/lang/String;

    iget-object v2, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;->b:Ljava/util/Map;

    iput-object v2, v1, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update;->c:Ljava/util/Map;

    iget-object v2, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;->c:Ljava/lang/String;

    iput-object v2, v1, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update;->d:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update;->b:Ljava/lang/String;

    return-object v1
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

    iput-object p1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;->b:Ljava/util/Map;

    return-void
.end method

.method public setTableName(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;->a:Ljava/lang/String;

    return-void
.end method

.method public setWhere(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$Update$Builder;->c:Ljava/lang/String;

    return-void
.end method
