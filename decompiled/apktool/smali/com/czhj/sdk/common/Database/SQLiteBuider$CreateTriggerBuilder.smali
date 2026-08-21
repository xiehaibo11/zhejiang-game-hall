.class public Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTriggerBuilder;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/Database/SQLiteBuider;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "CreateTriggerBuilder"
.end annotation


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTriggerBuilder;->a:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTriggerBuilder;->b:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTriggerBuilder;->c:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTriggerBuilder;->d:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public build()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x4

    new-array v0, v0, [Ljava/lang/Object;

    iget-object v1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTriggerBuilder;->a:Ljava/lang/String;

    const/4 v2, 0x0

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTriggerBuilder;->b:Ljava/lang/String;

    const/4 v2, 0x1

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTriggerBuilder;->c:Ljava/lang/String;

    const/4 v2, 0x2

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTriggerBuilder;->d:Ljava/lang/String;

    const/4 v2, 0x3

    aput-object v1, v0, v2

    const-string v1, "create trigger if not exists %s after %s on %s begin %s end;"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public setExecSql(Ljava/lang/String;)Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTriggerBuilder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTriggerBuilder;->d:Ljava/lang/String;

    return-object p0
.end method

.method public setOnAction(Ljava/lang/String;)Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTriggerBuilder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTriggerBuilder;->b:Ljava/lang/String;

    return-object p0
.end method

.method public setOnTableName(Ljava/lang/String;)Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTriggerBuilder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTriggerBuilder;->c:Ljava/lang/String;

    return-object p0
.end method

.method public setTriggerName(Ljava/lang/String;)Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTriggerBuilder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTriggerBuilder;->a:Ljava/lang/String;

    return-object p0
.end method
