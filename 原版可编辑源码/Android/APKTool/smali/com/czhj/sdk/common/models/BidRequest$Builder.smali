.class public final Lcom/czhj/sdk/common/models/BidRequest$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/models/BidRequest;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/sdk/common/models/BidRequest;",
        "Lcom/czhj/sdk/common/models/BidRequest$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public ad_is_expired:Ljava/lang/Boolean;

.field public api_version:Lcom/czhj/sdk/common/models/Version;

.field public app:Lcom/czhj/sdk/common/models/App;

.field public device:Lcom/czhj/sdk/common/models/Device;

.field public disable_mediation:Ljava/lang/Boolean;

.field public ext_options:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public hbs:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/sdk/common/models/HeaderBidding;",
            ">;"
        }
    .end annotation
.end field

.field public header_bidding:Lcom/czhj/sdk/common/models/HeaderBidding;

.field public network:Lcom/czhj/sdk/common/models/Network;

.field public options:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public privacy:Lcom/czhj/sdk/common/models/Privacy;

.field public req_timestamp:Ljava/lang/Long;

.field public request_id:Ljava/lang/String;

.field public request_scene_type:Ljava/lang/Integer;

.field public sdk_version:Lcom/czhj/sdk/common/models/Version;

.field public slots:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/sdk/common/models/AdSlot;",
            ">;"
        }
    .end annotation
.end field

.field public strategy_req:Lcom/czhj/sdk/common/models/StrategyReq;

.field public user:Lcom/czhj/sdk/common/models/User;

.field public wx_program_req:Lcom/czhj/sdk/common/models/WXProgramReq;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->request_id:Ljava/lang/String;

    sget-object v0, Lcom/czhj/sdk/common/models/BidRequest;->DEFAULT_REQ_TIMESTAMP:Ljava/lang/Long;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->req_timestamp:Ljava/lang/Long;

    sget-object v0, Lcom/czhj/sdk/common/models/BidRequest;->DEFAULT_REQUEST_SCENE_TYPE:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->request_scene_type:Ljava/lang/Integer;

    sget-object v0, Lcom/czhj/sdk/common/models/BidRequest;->DEFAULT_AD_IS_EXPIRED:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->ad_is_expired:Ljava/lang/Boolean;

    sget-object v0, Lcom/czhj/sdk/common/models/BidRequest;->DEFAULT_DISABLE_MEDIATION:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->disable_mediation:Ljava/lang/Boolean;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->slots:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableMap()Ljava/util/Map;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->options:Ljava/util/Map;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->hbs:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableMap()Ljava/util/Map;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->ext_options:Ljava/util/Map;

    return-void
.end method


# virtual methods
.method public ad_is_expired(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->ad_is_expired:Ljava/lang/Boolean;

    return-object p0
.end method

.method public api_version(Lcom/czhj/sdk/common/models/Version;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->api_version:Lcom/czhj/sdk/common/models/Version;

    return-object p0
.end method

.method public app(Lcom/czhj/sdk/common/models/App;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->app:Lcom/czhj/sdk/common/models/App;

    return-object p0
.end method

.method public build()Lcom/czhj/sdk/common/models/BidRequest;
    .locals 24

    move-object/from16 v0, p0

    new-instance v22, Lcom/czhj/sdk/common/models/BidRequest;

    move-object/from16 v1, v22

    iget-object v2, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->request_id:Ljava/lang/String;

    iget-object v3, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->api_version:Lcom/czhj/sdk/common/models/Version;

    iget-object v4, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->app:Lcom/czhj/sdk/common/models/App;

    iget-object v5, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->device:Lcom/czhj/sdk/common/models/Device;

    iget-object v6, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->network:Lcom/czhj/sdk/common/models/Network;

    iget-object v7, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->slots:Ljava/util/List;

    iget-object v8, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->req_timestamp:Ljava/lang/Long;

    iget-object v9, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->request_scene_type:Ljava/lang/Integer;

    iget-object v10, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->ad_is_expired:Ljava/lang/Boolean;

    iget-object v11, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    iget-object v12, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->disable_mediation:Ljava/lang/Boolean;

    iget-object v13, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->options:Ljava/util/Map;

    iget-object v14, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->header_bidding:Lcom/czhj/sdk/common/models/HeaderBidding;

    iget-object v15, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->user:Lcom/czhj/sdk/common/models/User;

    move-object/from16 v23, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->hbs:Ljava/util/List;

    move-object/from16 v16, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->ext_options:Ljava/util/Map;

    move-object/from16 v17, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->sdk_version:Lcom/czhj/sdk/common/models/Version;

    move-object/from16 v18, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->wx_program_req:Lcom/czhj/sdk/common/models/WXProgramReq;

    move-object/from16 v19, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->strategy_req:Lcom/czhj/sdk/common/models/StrategyReq;

    move-object/from16 v20, v1

    invoke-super/range {p0 .. p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v21

    move-object/from16 v1, v23

    invoke-direct/range {v1 .. v21}, Lcom/czhj/sdk/common/models/BidRequest;-><init>(Ljava/lang/String;Lcom/czhj/sdk/common/models/Version;Lcom/czhj/sdk/common/models/App;Lcom/czhj/sdk/common/models/Device;Lcom/czhj/sdk/common/models/Network;Ljava/util/List;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/czhj/sdk/common/models/Privacy;Ljava/lang/Boolean;Ljava/util/Map;Lcom/czhj/sdk/common/models/HeaderBidding;Lcom/czhj/sdk/common/models/User;Ljava/util/List;Ljava/util/Map;Lcom/czhj/sdk/common/models/Version;Lcom/czhj/sdk/common/models/WXProgramReq;Lcom/czhj/sdk/common/models/StrategyReq;Lcom/czhj/wire/okio/ByteString;)V

    return-object v22
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->build()Lcom/czhj/sdk/common/models/BidRequest;

    move-result-object v0

    return-object v0
.end method

.method public device(Lcom/czhj/sdk/common/models/Device;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->device:Lcom/czhj/sdk/common/models/Device;

    return-object p0
.end method

.method public disable_mediation(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->disable_mediation:Ljava/lang/Boolean;

    return-object p0
.end method

.method public ext_options(Ljava/util/Map;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/czhj/sdk/common/models/BidRequest$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/Map;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->ext_options:Ljava/util/Map;

    return-object p0
.end method

.method public hbs(Ljava/util/List;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/czhj/sdk/common/models/HeaderBidding;",
            ">;)",
            "Lcom/czhj/sdk/common/models/BidRequest$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->hbs:Ljava/util/List;

    return-object p0
.end method

.method public header_bidding(Lcom/czhj/sdk/common/models/HeaderBidding;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->header_bidding:Lcom/czhj/sdk/common/models/HeaderBidding;

    return-object p0
.end method

.method public network(Lcom/czhj/sdk/common/models/Network;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->network:Lcom/czhj/sdk/common/models/Network;

    return-object p0
.end method

.method public options(Ljava/util/Map;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/czhj/sdk/common/models/BidRequest$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/Map;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->options:Ljava/util/Map;

    return-object p0
.end method

.method public privacy(Lcom/czhj/sdk/common/models/Privacy;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    return-object p0
.end method

.method public req_timestamp(Ljava/lang/Long;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->req_timestamp:Ljava/lang/Long;

    return-object p0
.end method

.method public request_id(Ljava/lang/String;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->request_id:Ljava/lang/String;

    return-object p0
.end method

.method public request_scene_type(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->request_scene_type:Ljava/lang/Integer;

    return-object p0
.end method

.method public sdk_version(Lcom/czhj/sdk/common/models/Version;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->sdk_version:Lcom/czhj/sdk/common/models/Version;

    return-object p0
.end method

.method public slots(Ljava/util/List;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/czhj/sdk/common/models/AdSlot;",
            ">;)",
            "Lcom/czhj/sdk/common/models/BidRequest$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->slots:Ljava/util/List;

    return-object p0
.end method

.method public strategy_req(Lcom/czhj/sdk/common/models/StrategyReq;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->strategy_req:Lcom/czhj/sdk/common/models/StrategyReq;

    return-object p0
.end method

.method public user(Lcom/czhj/sdk/common/models/User;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->user:Lcom/czhj/sdk/common/models/User;

    return-object p0
.end method

.method public wx_program_req(Lcom/czhj/sdk/common/models/WXProgramReq;)Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->wx_program_req:Lcom/czhj/sdk/common/models/WXProgramReq;

    return-object p0
.end method
