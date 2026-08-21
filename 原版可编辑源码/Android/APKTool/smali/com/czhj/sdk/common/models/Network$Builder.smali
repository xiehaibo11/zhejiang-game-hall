.class public final Lcom/czhj/sdk/common/models/Network$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/models/Network;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/sdk/common/models/Network;",
        "Lcom/czhj/sdk/common/models/Network$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public carrier_name:Ljava/lang/String;

.field public connection_type:Ljava/lang/Integer;

.field public ips:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public ipv4:Ljava/lang/String;

.field public mac:Ljava/lang/String;

.field public operator:Ljava/lang/String;

.field public operator_type:Ljava/lang/Integer;

.field public ua:Ljava/lang/String;

.field public wifi_id:Ljava/lang/String;

.field public wifi_mac:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Network$Builder;->ipv4:Ljava/lang/String;

    sget-object v1, Lcom/czhj/sdk/common/models/Network;->DEFAULT_CONNECTION_TYPE:Ljava/lang/Integer;

    iput-object v1, p0, Lcom/czhj/sdk/common/models/Network$Builder;->connection_type:Ljava/lang/Integer;

    sget-object v1, Lcom/czhj/sdk/common/models/Network;->DEFAULT_OPERATOR_TYPE:Ljava/lang/Integer;

    iput-object v1, p0, Lcom/czhj/sdk/common/models/Network$Builder;->operator_type:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Network$Builder;->ua:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Network$Builder;->operator:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Network$Builder;->mac:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Network$Builder;->wifi_mac:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Network$Builder;->wifi_id:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Network$Builder;->carrier_name:Ljava/lang/String;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableMap()Ljava/util/Map;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Network$Builder;->ips:Ljava/util/Map;

    return-void
.end method


# virtual methods
.method public build()Lcom/czhj/sdk/common/models/Network;
    .locals 13

    new-instance v12, Lcom/czhj/sdk/common/models/Network;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Network$Builder;->ipv4:Ljava/lang/String;

    iget-object v2, p0, Lcom/czhj/sdk/common/models/Network$Builder;->connection_type:Ljava/lang/Integer;

    iget-object v3, p0, Lcom/czhj/sdk/common/models/Network$Builder;->operator_type:Ljava/lang/Integer;

    iget-object v4, p0, Lcom/czhj/sdk/common/models/Network$Builder;->ua:Ljava/lang/String;

    iget-object v5, p0, Lcom/czhj/sdk/common/models/Network$Builder;->operator:Ljava/lang/String;

    iget-object v6, p0, Lcom/czhj/sdk/common/models/Network$Builder;->mac:Ljava/lang/String;

    iget-object v7, p0, Lcom/czhj/sdk/common/models/Network$Builder;->wifi_mac:Ljava/lang/String;

    iget-object v8, p0, Lcom/czhj/sdk/common/models/Network$Builder;->wifi_id:Ljava/lang/String;

    iget-object v9, p0, Lcom/czhj/sdk/common/models/Network$Builder;->ips:Ljava/util/Map;

    iget-object v10, p0, Lcom/czhj/sdk/common/models/Network$Builder;->carrier_name:Ljava/lang/String;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v11

    move-object v0, v12

    invoke-direct/range {v0 .. v11}, Lcom/czhj/sdk/common/models/Network;-><init>(Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;Lcom/czhj/wire/okio/ByteString;)V

    return-object v12
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/Network$Builder;->build()Lcom/czhj/sdk/common/models/Network;

    move-result-object v0

    return-object v0
.end method

.method public carrier_name(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Network$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Network$Builder;->carrier_name:Ljava/lang/String;

    return-object p0
.end method

.method public connection_type(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Network$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Network$Builder;->connection_type:Ljava/lang/Integer;

    return-object p0
.end method

.method public ips(Ljava/util/Map;)Lcom/czhj/sdk/common/models/Network$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/czhj/sdk/common/models/Network$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/Map;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Network$Builder;->ips:Ljava/util/Map;

    return-object p0
.end method

.method public ipv4(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Network$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Network$Builder;->ipv4:Ljava/lang/String;

    return-object p0
.end method

.method public mac(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Network$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Network$Builder;->mac:Ljava/lang/String;

    return-object p0
.end method

.method public operator(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Network$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Network$Builder;->operator:Ljava/lang/String;

    return-object p0
.end method

.method public operator_type(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Network$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Network$Builder;->operator_type:Ljava/lang/Integer;

    return-object p0
.end method

.method public ua(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Network$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Network$Builder;->ua:Ljava/lang/String;

    return-object p0
.end method

.method public wifi_id(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Network$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Network$Builder;->wifi_id:Ljava/lang/String;

    return-object p0
.end method

.method public wifi_mac(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Network$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Network$Builder;->wifi_mac:Ljava/lang/String;

    return-object p0
.end method
