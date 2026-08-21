.class public final Lcom/czhj/sdk/common/models/BidRequest;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/sdk/common/models/BidRequest$ProtoAdapter_BidRequest;,
        Lcom/czhj/sdk/common/models/BidRequest$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/czhj/sdk/common/models/BidRequest;",
        "Lcom/czhj/sdk/common/models/BidRequest$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/czhj/sdk/common/models/BidRequest;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/czhj/sdk/common/models/BidRequest;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_AD_IS_EXPIRED:Ljava/lang/Boolean;

.field public static final DEFAULT_DISABLE_MEDIATION:Ljava/lang/Boolean;

.field public static final DEFAULT_REQUEST_ID:Ljava/lang/String; = ""

.field public static final DEFAULT_REQUEST_SCENE_TYPE:Ljava/lang/Integer;

.field public static final DEFAULT_REQ_TIMESTAMP:Ljava/lang/Long;

.field private static final serialVersionUID:J


# instance fields
.field public final ad_is_expired:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x9
    .end annotation
.end field

.field public final api_version:Lcom/czhj/sdk/common/models/Version;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.czhj.sdk.common.models.Version#ADAPTER"
        tag = 0x2
    .end annotation
.end field

.field public final app:Lcom/czhj/sdk/common/models/App;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.czhj.sdk.common.models.App#ADAPTER"
        tag = 0x3
    .end annotation
.end field

.field public final device:Lcom/czhj/sdk/common/models/Device;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.czhj.sdk.common.models.Device#ADAPTER"
        tag = 0x4
    .end annotation
.end field

.field public final disable_mediation:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0xb
    .end annotation
.end field

.field public final ext_options:Ljava/util/Map;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        keyAdapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x13
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public final hbs:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.czhj.sdk.common.models.HeaderBidding#ADAPTER"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0x12
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/sdk/common/models/HeaderBidding;",
            ">;"
        }
    .end annotation
.end field

.field public final header_bidding:Lcom/czhj/sdk/common/models/HeaderBidding;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.czhj.sdk.common.models.HeaderBidding#ADAPTER"
        tag = 0x10
    .end annotation
.end field

.field public final network:Lcom/czhj/sdk/common/models/Network;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.czhj.sdk.common.models.Network#ADAPTER"
        tag = 0x5
    .end annotation
.end field

.field public final options:Ljava/util/Map;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        keyAdapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0xf
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public final privacy:Lcom/czhj/sdk/common/models/Privacy;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.czhj.sdk.common.models.Privacy#ADAPTER"
        tag = 0xa
    .end annotation
.end field

.field public final req_timestamp:Ljava/lang/Long;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT64"
        tag = 0x7
    .end annotation
.end field

.field public final request_id:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x1
    .end annotation
.end field

.field public final request_scene_type:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x8
    .end annotation
.end field

.field public final sdk_version:Lcom/czhj/sdk/common/models/Version;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.czhj.sdk.common.models.Version#ADAPTER"
        tag = 0x14
    .end annotation
.end field

.field public final slots:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.czhj.sdk.common.models.AdSlot#ADAPTER"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0x6
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/czhj/sdk/common/models/AdSlot;",
            ">;"
        }
    .end annotation
.end field

.field public final strategy_req:Lcom/czhj/sdk/common/models/StrategyReq;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.czhj.sdk.common.models.StrategyReq#ADAPTER"
        tag = 0x16
    .end annotation
.end field

.field public final user:Lcom/czhj/sdk/common/models/User;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.czhj.sdk.common.models.User#ADAPTER"
        tag = 0x11
    .end annotation
.end field

.field public final wx_program_req:Lcom/czhj/sdk/common/models/WXProgramReq;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.czhj.sdk.common.models.WXProgramReq#ADAPTER"
        tag = 0x15
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/czhj/sdk/common/models/BidRequest$ProtoAdapter_BidRequest;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/BidRequest$ProtoAdapter_BidRequest;-><init>()V

    sput-object v0, Lcom/czhj/sdk/common/models/BidRequest;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/czhj/sdk/common/models/BidRequest;->CREATOR:Landroid/os/Parcelable$Creator;

    const-wide/16 v0, 0x0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    sput-object v0, Lcom/czhj/sdk/common/models/BidRequest;->DEFAULT_REQ_TIMESTAMP:Ljava/lang/Long;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    sput-object v1, Lcom/czhj/sdk/common/models/BidRequest;->DEFAULT_REQUEST_SCENE_TYPE:Ljava/lang/Integer;

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v0, Lcom/czhj/sdk/common/models/BidRequest;->DEFAULT_AD_IS_EXPIRED:Ljava/lang/Boolean;

    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v0, Lcom/czhj/sdk/common/models/BidRequest;->DEFAULT_DISABLE_MEDIATION:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Lcom/czhj/sdk/common/models/Version;Lcom/czhj/sdk/common/models/App;Lcom/czhj/sdk/common/models/Device;Lcom/czhj/sdk/common/models/Network;Ljava/util/List;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/czhj/sdk/common/models/Privacy;Ljava/lang/Boolean;Ljava/util/Map;Lcom/czhj/sdk/common/models/HeaderBidding;Lcom/czhj/sdk/common/models/User;Ljava/util/List;Ljava/util/Map;Lcom/czhj/sdk/common/models/Version;Lcom/czhj/sdk/common/models/WXProgramReq;Lcom/czhj/sdk/common/models/StrategyReq;)V
    .locals 21
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Lcom/czhj/sdk/common/models/Version;",
            "Lcom/czhj/sdk/common/models/App;",
            "Lcom/czhj/sdk/common/models/Device;",
            "Lcom/czhj/sdk/common/models/Network;",
            "Ljava/util/List<",
            "Lcom/czhj/sdk/common/models/AdSlot;",
            ">;",
            "Ljava/lang/Long;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Boolean;",
            "Lcom/czhj/sdk/common/models/Privacy;",
            "Ljava/lang/Boolean;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Lcom/czhj/sdk/common/models/HeaderBidding;",
            "Lcom/czhj/sdk/common/models/User;",
            "Ljava/util/List<",
            "Lcom/czhj/sdk/common/models/HeaderBidding;",
            ">;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Lcom/czhj/sdk/common/models/Version;",
            "Lcom/czhj/sdk/common/models/WXProgramReq;",
            "Lcom/czhj/sdk/common/models/StrategyReq;",
            ")V"
        }
    .end annotation

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    move-object/from16 v3, p3

    move-object/from16 v4, p4

    move-object/from16 v5, p5

    move-object/from16 v6, p6

    move-object/from16 v7, p7

    move-object/from16 v8, p8

    move-object/from16 v9, p9

    move-object/from16 v10, p10

    move-object/from16 v11, p11

    move-object/from16 v12, p12

    move-object/from16 v13, p13

    move-object/from16 v14, p14

    move-object/from16 v15, p15

    move-object/from16 v16, p16

    move-object/from16 v17, p17

    move-object/from16 v18, p18

    move-object/from16 v19, p19

    sget-object v20, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    invoke-direct/range {v0 .. v20}, Lcom/czhj/sdk/common/models/BidRequest;-><init>(Ljava/lang/String;Lcom/czhj/sdk/common/models/Version;Lcom/czhj/sdk/common/models/App;Lcom/czhj/sdk/common/models/Device;Lcom/czhj/sdk/common/models/Network;Ljava/util/List;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/czhj/sdk/common/models/Privacy;Ljava/lang/Boolean;Ljava/util/Map;Lcom/czhj/sdk/common/models/HeaderBidding;Lcom/czhj/sdk/common/models/User;Ljava/util/List;Ljava/util/Map;Lcom/czhj/sdk/common/models/Version;Lcom/czhj/sdk/common/models/WXProgramReq;Lcom/czhj/sdk/common/models/StrategyReq;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Lcom/czhj/sdk/common/models/Version;Lcom/czhj/sdk/common/models/App;Lcom/czhj/sdk/common/models/Device;Lcom/czhj/sdk/common/models/Network;Ljava/util/List;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/czhj/sdk/common/models/Privacy;Ljava/lang/Boolean;Ljava/util/Map;Lcom/czhj/sdk/common/models/HeaderBidding;Lcom/czhj/sdk/common/models/User;Ljava/util/List;Ljava/util/Map;Lcom/czhj/sdk/common/models/Version;Lcom/czhj/sdk/common/models/WXProgramReq;Lcom/czhj/sdk/common/models/StrategyReq;Lcom/czhj/wire/okio/ByteString;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Lcom/czhj/sdk/common/models/Version;",
            "Lcom/czhj/sdk/common/models/App;",
            "Lcom/czhj/sdk/common/models/Device;",
            "Lcom/czhj/sdk/common/models/Network;",
            "Ljava/util/List<",
            "Lcom/czhj/sdk/common/models/AdSlot;",
            ">;",
            "Ljava/lang/Long;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Boolean;",
            "Lcom/czhj/sdk/common/models/Privacy;",
            "Ljava/lang/Boolean;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Lcom/czhj/sdk/common/models/HeaderBidding;",
            "Lcom/czhj/sdk/common/models/User;",
            "Ljava/util/List<",
            "Lcom/czhj/sdk/common/models/HeaderBidding;",
            ">;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Lcom/czhj/sdk/common/models/Version;",
            "Lcom/czhj/sdk/common/models/WXProgramReq;",
            "Lcom/czhj/sdk/common/models/StrategyReq;",
            "Lcom/czhj/wire/okio/ByteString;",
            ")V"
        }
    .end annotation

    move-object v0, p0

    sget-object v1, Lcom/czhj/sdk/common/models/BidRequest;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    move-object/from16 v2, p20

    invoke-direct {p0, v1, v2}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    move-object v1, p1

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest;->request_id:Ljava/lang/String;

    move-object v1, p2

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest;->api_version:Lcom/czhj/sdk/common/models/Version;

    move-object v1, p3

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest;->app:Lcom/czhj/sdk/common/models/App;

    move-object v1, p4

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest;->device:Lcom/czhj/sdk/common/models/Device;

    move-object v1, p5

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest;->network:Lcom/czhj/sdk/common/models/Network;

    const-string v1, "slots"

    move-object v2, p6

    invoke-static {v1, p6}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest;->slots:Ljava/util/List;

    move-object v1, p7

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest;->req_timestamp:Ljava/lang/Long;

    move-object v1, p8

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest;->request_scene_type:Ljava/lang/Integer;

    move-object v1, p9

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest;->ad_is_expired:Ljava/lang/Boolean;

    move-object v1, p10

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    move-object v1, p11

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest;->disable_mediation:Ljava/lang/Boolean;

    const-string v1, "options"

    move-object v2, p12

    invoke-static {v1, p12}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/Map;)Ljava/util/Map;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest;->options:Ljava/util/Map;

    move-object/from16 v1, p13

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest;->header_bidding:Lcom/czhj/sdk/common/models/HeaderBidding;

    move-object/from16 v1, p14

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest;->user:Lcom/czhj/sdk/common/models/User;

    const-string v1, "hbs"

    move-object/from16 v2, p15

    invoke-static {v1, v2}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest;->hbs:Ljava/util/List;

    const-string v1, "ext_options"

    move-object/from16 v2, p16

    invoke-static {v1, v2}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/Map;)Ljava/util/Map;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest;->ext_options:Ljava/util/Map;

    move-object/from16 v1, p17

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest;->sdk_version:Lcom/czhj/sdk/common/models/Version;

    move-object/from16 v1, p18

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest;->wx_program_req:Lcom/czhj/sdk/common/models/WXProgramReq;

    move-object/from16 v1, p19

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest;->strategy_req:Lcom/czhj/sdk/common/models/StrategyReq;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/czhj/sdk/common/models/BidRequest;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/czhj/sdk/common/models/BidRequest;

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/BidRequest;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/czhj/sdk/common/models/BidRequest;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->request_id:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/BidRequest;->request_id:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->api_version:Lcom/czhj/sdk/common/models/Version;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/BidRequest;->api_version:Lcom/czhj/sdk/common/models/Version;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->app:Lcom/czhj/sdk/common/models/App;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/BidRequest;->app:Lcom/czhj/sdk/common/models/App;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->device:Lcom/czhj/sdk/common/models/Device;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/BidRequest;->device:Lcom/czhj/sdk/common/models/Device;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->network:Lcom/czhj/sdk/common/models/Network;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/BidRequest;->network:Lcom/czhj/sdk/common/models/Network;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->slots:Ljava/util/List;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/BidRequest;->slots:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->req_timestamp:Ljava/lang/Long;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/BidRequest;->req_timestamp:Ljava/lang/Long;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->request_scene_type:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/BidRequest;->request_scene_type:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->ad_is_expired:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/BidRequest;->ad_is_expired:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/BidRequest;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->disable_mediation:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/BidRequest;->disable_mediation:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->options:Ljava/util/Map;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/BidRequest;->options:Ljava/util/Map;

    invoke-interface {v1, v3}, Ljava/util/Map;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->header_bidding:Lcom/czhj/sdk/common/models/HeaderBidding;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/BidRequest;->header_bidding:Lcom/czhj/sdk/common/models/HeaderBidding;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->user:Lcom/czhj/sdk/common/models/User;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/BidRequest;->user:Lcom/czhj/sdk/common/models/User;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->hbs:Ljava/util/List;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/BidRequest;->hbs:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->ext_options:Ljava/util/Map;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/BidRequest;->ext_options:Ljava/util/Map;

    invoke-interface {v1, v3}, Ljava/util/Map;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->sdk_version:Lcom/czhj/sdk/common/models/Version;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/BidRequest;->sdk_version:Lcom/czhj/sdk/common/models/Version;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->wx_program_req:Lcom/czhj/sdk/common/models/WXProgramReq;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/BidRequest;->wx_program_req:Lcom/czhj/sdk/common/models/WXProgramReq;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->strategy_req:Lcom/czhj/sdk/common/models/StrategyReq;

    iget-object p1, p1, Lcom/czhj/sdk/common/models/BidRequest;->strategy_req:Lcom/czhj/sdk/common/models/StrategyReq;

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

    if-nez v0, :cond_f

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/BidRequest;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->request_id:Ljava/lang/String;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->api_version:Lcom/czhj/sdk/common/models/Version;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Version;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->app:Lcom/czhj/sdk/common/models/App;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/App;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->device:Lcom/czhj/sdk/common/models/Device;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Device;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->network:Lcom/czhj/sdk/common/models/Network;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Network;->hashCode()I

    move-result v1

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->slots:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->req_timestamp:Ljava/lang/Long;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Ljava/lang/Long;->hashCode()I

    move-result v1

    goto :goto_5

    :cond_5
    move v1, v2

    :goto_5
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->request_scene_type:Ljava/lang/Integer;

    if-eqz v1, :cond_6

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_6

    :cond_6
    move v1, v2

    :goto_6
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->ad_is_expired:Ljava/lang/Boolean;

    if-eqz v1, :cond_7

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_7

    :cond_7
    move v1, v2

    :goto_7
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    if-eqz v1, :cond_8

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Privacy;->hashCode()I

    move-result v1

    goto :goto_8

    :cond_8
    move v1, v2

    :goto_8
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->disable_mediation:Ljava/lang/Boolean;

    if-eqz v1, :cond_9

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_9

    :cond_9
    move v1, v2

    :goto_9
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->options:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->header_bidding:Lcom/czhj/sdk/common/models/HeaderBidding;

    if-eqz v1, :cond_a

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/HeaderBidding;->hashCode()I

    move-result v1

    goto :goto_a

    :cond_a
    move v1, v2

    :goto_a
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->user:Lcom/czhj/sdk/common/models/User;

    if-eqz v1, :cond_b

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/User;->hashCode()I

    move-result v1

    goto :goto_b

    :cond_b
    move v1, v2

    :goto_b
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->hbs:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->ext_options:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->sdk_version:Lcom/czhj/sdk/common/models/Version;

    if-eqz v1, :cond_c

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Version;->hashCode()I

    move-result v1

    goto :goto_c

    :cond_c
    move v1, v2

    :goto_c
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->wx_program_req:Lcom/czhj/sdk/common/models/WXProgramReq;

    if-eqz v1, :cond_d

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/WXProgramReq;->hashCode()I

    move-result v1

    goto :goto_d

    :cond_d
    move v1, v2

    :goto_d
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->strategy_req:Lcom/czhj/sdk/common/models/StrategyReq;

    if-eqz v1, :cond_e

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/StrategyReq;->hashCode()I

    move-result v2

    :cond_e
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_f
    return v0
.end method

.method public newBuilder()Lcom/czhj/sdk/common/models/BidRequest$Builder;
    .locals 3

    new-instance v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/BidRequest$Builder;-><init>()V

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->request_id:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->request_id:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->api_version:Lcom/czhj/sdk/common/models/Version;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->api_version:Lcom/czhj/sdk/common/models/Version;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->app:Lcom/czhj/sdk/common/models/App;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->app:Lcom/czhj/sdk/common/models/App;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->device:Lcom/czhj/sdk/common/models/Device;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->device:Lcom/czhj/sdk/common/models/Device;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->network:Lcom/czhj/sdk/common/models/Network;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->network:Lcom/czhj/sdk/common/models/Network;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->slots:Ljava/util/List;

    const-string v2, "slots"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->slots:Ljava/util/List;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->req_timestamp:Ljava/lang/Long;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->req_timestamp:Ljava/lang/Long;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->request_scene_type:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->request_scene_type:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->ad_is_expired:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->ad_is_expired:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->disable_mediation:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->disable_mediation:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->options:Ljava/util/Map;

    const-string v2, "options"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/Map;)Ljava/util/Map;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->options:Ljava/util/Map;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->header_bidding:Lcom/czhj/sdk/common/models/HeaderBidding;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->header_bidding:Lcom/czhj/sdk/common/models/HeaderBidding;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->user:Lcom/czhj/sdk/common/models/User;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->user:Lcom/czhj/sdk/common/models/User;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->hbs:Ljava/util/List;

    const-string v2, "hbs"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->hbs:Ljava/util/List;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->ext_options:Ljava/util/Map;

    const-string v2, "ext_options"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/Map;)Ljava/util/Map;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->ext_options:Ljava/util/Map;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->sdk_version:Lcom/czhj/sdk/common/models/Version;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->sdk_version:Lcom/czhj/sdk/common/models/Version;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->wx_program_req:Lcom/czhj/sdk/common/models/WXProgramReq;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->wx_program_req:Lcom/czhj/sdk/common/models/WXProgramReq;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->strategy_req:Lcom/czhj/sdk/common/models/StrategyReq;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->strategy_req:Lcom/czhj/sdk/common/models/StrategyReq;

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/BidRequest;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/BidRequest;->newBuilder()Lcom/czhj/sdk/common/models/BidRequest$Builder;

    move-result-object v0

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->request_id:Ljava/lang/String;

    if-eqz v1, :cond_0

    const-string v1, ", request_id="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->request_id:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->api_version:Lcom/czhj/sdk/common/models/Version;

    if-eqz v1, :cond_1

    const-string v1, ", api_version="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->api_version:Lcom/czhj/sdk/common/models/Version;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->app:Lcom/czhj/sdk/common/models/App;

    if-eqz v1, :cond_2

    const-string v1, ", app="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->app:Lcom/czhj/sdk/common/models/App;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->device:Lcom/czhj/sdk/common/models/Device;

    if-eqz v1, :cond_3

    const-string v1, ", device="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->device:Lcom/czhj/sdk/common/models/Device;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->network:Lcom/czhj/sdk/common/models/Network;

    if-eqz v1, :cond_4

    const-string v1, ", network="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->network:Lcom/czhj/sdk/common/models/Network;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->slots:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_5

    const-string v1, ", slots="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->slots:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_5
    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->req_timestamp:Ljava/lang/Long;

    if-eqz v1, :cond_6

    const-string v1, ", req_timestamp="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->req_timestamp:Ljava/lang/Long;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_6
    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->request_scene_type:Ljava/lang/Integer;

    if-eqz v1, :cond_7

    const-string v1, ", request_scene_type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->request_scene_type:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_7
    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->ad_is_expired:Ljava/lang/Boolean;

    if-eqz v1, :cond_8

    const-string v1, ", ad_is_expired="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->ad_is_expired:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_8
    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    if-eqz v1, :cond_9

    const-string v1, ", privacy="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_9
    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->disable_mediation:Ljava/lang/Boolean;

    if-eqz v1, :cond_a

    const-string v1, ", disable_mediation="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->disable_mediation:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_a
    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->options:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_b

    const-string v1, ", options="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->options:Ljava/util/Map;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_b
    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->header_bidding:Lcom/czhj/sdk/common/models/HeaderBidding;

    if-eqz v1, :cond_c

    const-string v1, ", header_bidding="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->header_bidding:Lcom/czhj/sdk/common/models/HeaderBidding;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_c
    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->user:Lcom/czhj/sdk/common/models/User;

    if-eqz v1, :cond_d

    const-string v1, ", user="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->user:Lcom/czhj/sdk/common/models/User;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_d
    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->hbs:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_e

    const-string v1, ", hbs="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->hbs:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_e
    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->ext_options:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_f

    const-string v1, ", ext_options="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->ext_options:Ljava/util/Map;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_f
    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->sdk_version:Lcom/czhj/sdk/common/models/Version;

    if-eqz v1, :cond_10

    const-string v1, ", sdk_version="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->sdk_version:Lcom/czhj/sdk/common/models/Version;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_10
    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->wx_program_req:Lcom/czhj/sdk/common/models/WXProgramReq;

    if-eqz v1, :cond_11

    const-string v1, ", wx_program_req="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->wx_program_req:Lcom/czhj/sdk/common/models/WXProgramReq;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_11
    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->strategy_req:Lcom/czhj/sdk/common/models/StrategyReq;

    if-eqz v1, :cond_12

    const-string v1, ", strategy_req="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest;->strategy_req:Lcom/czhj/sdk/common/models/StrategyReq;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_12
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "BidRequest{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
