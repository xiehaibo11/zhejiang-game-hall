.class public final Lcom/czhj/sdk/common/models/StrategyReq$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/models/StrategyReq;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/sdk/common/models/StrategyReq;",
        "Lcom/czhj/sdk/common/models/StrategyReq$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public last_strategy_id:Ljava/lang/String;

.field public strategy_init:Ljava/lang/Boolean;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/czhj/sdk/common/models/StrategyReq;->DEFAULT_STRATEGY_INIT:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/StrategyReq$Builder;->strategy_init:Ljava/lang/Boolean;

    const-string v0, ""

    iput-object v0, p0, Lcom/czhj/sdk/common/models/StrategyReq$Builder;->last_strategy_id:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public build()Lcom/czhj/sdk/common/models/StrategyReq;
    .locals 4

    new-instance v0, Lcom/czhj/sdk/common/models/StrategyReq;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/StrategyReq$Builder;->strategy_init:Ljava/lang/Boolean;

    iget-object v2, p0, Lcom/czhj/sdk/common/models/StrategyReq$Builder;->last_strategy_id:Ljava/lang/String;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-direct {v0, v1, v2, v3}, Lcom/czhj/sdk/common/models/StrategyReq;-><init>(Ljava/lang/Boolean;Ljava/lang/String;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/StrategyReq$Builder;->build()Lcom/czhj/sdk/common/models/StrategyReq;

    move-result-object v0

    return-object v0
.end method

.method public last_strategy_id(Ljava/lang/String;)Lcom/czhj/sdk/common/models/StrategyReq$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/StrategyReq$Builder;->last_strategy_id:Ljava/lang/String;

    return-object p0
.end method

.method public strategy_init(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/StrategyReq$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/StrategyReq$Builder;->strategy_init:Ljava/lang/Boolean;

    return-object p0
.end method
