.class public final Lcom/czhj/sdk/common/models/StrategyReq;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/sdk/common/models/StrategyReq$ProtoAdapter_StrategyReq;,
        Lcom/czhj/sdk/common/models/StrategyReq$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/czhj/sdk/common/models/StrategyReq;",
        "Lcom/czhj/sdk/common/models/StrategyReq$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/czhj/sdk/common/models/StrategyReq;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/czhj/sdk/common/models/StrategyReq;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_LAST_STRATEGY_ID:Ljava/lang/String; = ""

.field public static final DEFAULT_STRATEGY_INIT:Ljava/lang/Boolean;

.field private static final serialVersionUID:J


# instance fields
.field public final last_strategy_id:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x2
    .end annotation
.end field

.field public final strategy_init:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x1
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/czhj/sdk/common/models/StrategyReq$ProtoAdapter_StrategyReq;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/StrategyReq$ProtoAdapter_StrategyReq;-><init>()V

    sput-object v0, Lcom/czhj/sdk/common/models/StrategyReq;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/czhj/sdk/common/models/StrategyReq;->CREATOR:Landroid/os/Parcelable$Creator;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v0, Lcom/czhj/sdk/common/models/StrategyReq;->DEFAULT_STRATEGY_INIT:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/String;)V
    .locals 1

    sget-object v0, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    invoke-direct {p0, p1, p2, v0}, Lcom/czhj/sdk/common/models/StrategyReq;-><init>(Ljava/lang/Boolean;Ljava/lang/String;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/String;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/models/StrategyReq;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p3}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/StrategyReq;->strategy_init:Ljava/lang/Boolean;

    iput-object p2, p0, Lcom/czhj/sdk/common/models/StrategyReq;->last_strategy_id:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/czhj/sdk/common/models/StrategyReq;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/czhj/sdk/common/models/StrategyReq;

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/StrategyReq;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/czhj/sdk/common/models/StrategyReq;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/StrategyReq;->strategy_init:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/StrategyReq;->strategy_init:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/StrategyReq;->last_strategy_id:Ljava/lang/String;

    iget-object p1, p1, Lcom/czhj/sdk/common/models/StrategyReq;->last_strategy_id:Ljava/lang/String;

    invoke-static {v1, p1}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    goto :goto_0

    :cond_2
    move v0, v2

    :goto_0
    return v0
.end method

.method public hashCode()I
    .locals 3

    iget v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    if-nez v0, :cond_2

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/StrategyReq;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/StrategyReq;->strategy_init:Ljava/lang/Boolean;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/StrategyReq;->last_strategy_id:Ljava/lang/String;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v2

    :cond_1
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_2
    return v0
.end method

.method public newBuilder()Lcom/czhj/sdk/common/models/StrategyReq$Builder;
    .locals 2

    new-instance v0, Lcom/czhj/sdk/common/models/StrategyReq$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/StrategyReq$Builder;-><init>()V

    iget-object v1, p0, Lcom/czhj/sdk/common/models/StrategyReq;->strategy_init:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/StrategyReq$Builder;->strategy_init:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/StrategyReq;->last_strategy_id:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/StrategyReq$Builder;->last_strategy_id:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/StrategyReq;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/StrategyReq$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/StrategyReq;->newBuilder()Lcom/czhj/sdk/common/models/StrategyReq$Builder;

    move-result-object v0

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/czhj/sdk/common/models/StrategyReq;->strategy_init:Ljava/lang/Boolean;

    if-eqz v1, :cond_0

    const-string v1, ", strategy_init="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/StrategyReq;->strategy_init:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/czhj/sdk/common/models/StrategyReq;->last_strategy_id:Ljava/lang/String;

    if-eqz v1, :cond_1

    const-string v1, ", last_strategy_id="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/StrategyReq;->last_strategy_id:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "StrategyReq{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
