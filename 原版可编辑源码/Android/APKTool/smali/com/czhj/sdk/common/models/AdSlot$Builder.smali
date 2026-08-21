.class public final Lcom/czhj/sdk/common/models/AdSlot$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/models/AdSlot;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/sdk/common/models/AdSlot;",
        "Lcom/czhj/sdk/common/models/AdSlot$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public ad_caches:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/czhj/sdk/common/models/AdCache;",
            ">;"
        }
    .end annotation
.end field

.field public ad_count:Ljava/lang/Integer;

.field public adslot_id:Ljava/lang/String;

.field public adslot_size:Lcom/czhj/sdk/common/models/Size;

.field public adslot_type:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public adx_ecpm:Ljava/lang/Integer;

.field public alg_bid_type:Ljava/lang/Integer;

.field public algorithm_floor:Ljava/lang/Integer;

.field public api_strategy_index:Ljava/lang/Integer;

.field public auto_click_mode:Ljava/lang/Integer;

.field public b_seat:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public bidfloor:Ljava/lang/Integer;

.field public commer_ecpm:Ljava/lang/Integer;

.field public commer_ecpm_state:Ljava/lang/Integer;

.field public creative_type:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public ecpm_target:Ljava/lang/Integer;

.field public expected_floor:Ljava/lang/Integer;

.field public ext:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public latest_camp_id:Ljava/lang/String;

.field public latest_crid:Ljava/lang/String;

.field public material_type:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public sdk_cached_ads:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public sdk_strategy_index:Ljava/lang/Integer;

.field public settlement_mode:Ljava/lang/Integer;

.field public settlement_setting:Ljava/lang/Integer;

.field public vid:Ljava/lang/String;

.field public vid_list:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public video:Lcom/czhj/sdk/common/models/Video;


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->adslot_id:Ljava/lang/String;

    sget-object v1, Lcom/czhj/sdk/common/models/AdSlot;->DEFAULT_BIDFLOOR:Ljava/lang/Integer;

    iput-object v1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->bidfloor:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->vid:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->latest_camp_id:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->latest_crid:Ljava/lang/String;

    sget-object v0, Lcom/czhj/sdk/common/models/AdSlot;->DEFAULT_SDK_STRATEGY_INDEX:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->sdk_strategy_index:Ljava/lang/Integer;

    sget-object v0, Lcom/czhj/sdk/common/models/AdSlot;->DEFAULT_API_STRATEGY_INDEX:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->api_strategy_index:Ljava/lang/Integer;

    sget-object v0, Lcom/czhj/sdk/common/models/AdSlot;->DEFAULT_ALGORITHM_FLOOR:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->algorithm_floor:Ljava/lang/Integer;

    sget-object v0, Lcom/czhj/sdk/common/models/AdSlot;->DEFAULT_EXPECTED_FLOOR:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->expected_floor:Ljava/lang/Integer;

    sget-object v0, Lcom/czhj/sdk/common/models/AdSlot;->DEFAULT_AUTO_CLICK_MODE:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->auto_click_mode:Ljava/lang/Integer;

    sget-object v0, Lcom/czhj/sdk/common/models/AdSlot;->DEFAULT_SETTLEMENT_MODE:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->settlement_mode:Ljava/lang/Integer;

    sget-object v0, Lcom/czhj/sdk/common/models/AdSlot;->DEFAULT_ALG_BID_TYPE:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->alg_bid_type:Ljava/lang/Integer;

    sget-object v0, Lcom/czhj/sdk/common/models/AdSlot;->DEFAULT_ECPM_TARGET:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->ecpm_target:Ljava/lang/Integer;

    sget-object v0, Lcom/czhj/sdk/common/models/AdSlot;->DEFAULT_SETTLEMENT_SETTING:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->settlement_setting:Ljava/lang/Integer;

    sget-object v0, Lcom/czhj/sdk/common/models/AdSlot;->DEFAULT_COMMER_ECPM:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->commer_ecpm:Ljava/lang/Integer;

    sget-object v0, Lcom/czhj/sdk/common/models/AdSlot;->DEFAULT_ADX_ECPM:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->adx_ecpm:Ljava/lang/Integer;

    sget-object v0, Lcom/czhj/sdk/common/models/AdSlot;->DEFAULT_COMMER_ECPM_STATE:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->commer_ecpm_state:Ljava/lang/Integer;

    sget-object v0, Lcom/czhj/sdk/common/models/AdSlot;->DEFAULT_AD_COUNT:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->ad_count:Ljava/lang/Integer;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->adslot_type:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->material_type:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableMap()Ljava/util/Map;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->sdk_cached_ads:Ljava/util/Map;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->creative_type:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableMap()Ljava/util/Map;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->ext:Ljava/util/Map;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableMap()Ljava/util/Map;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->ad_caches:Ljava/util/Map;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->b_seat:Ljava/util/List;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->vid_list:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public ad_caches(Ljava/util/Map;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/czhj/sdk/common/models/AdCache;",
            ">;)",
            "Lcom/czhj/sdk/common/models/AdSlot$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/Map;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->ad_caches:Ljava/util/Map;

    return-object p0
.end method

.method public ad_count(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->ad_count:Ljava/lang/Integer;

    return-object p0
.end method

.method public adslot_id(Ljava/lang/String;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->adslot_id:Ljava/lang/String;

    return-object p0
.end method

.method public adslot_size(Lcom/czhj/sdk/common/models/Size;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->adslot_size:Lcom/czhj/sdk/common/models/Size;

    return-object p0
.end method

.method public adslot_type(Ljava/util/List;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;)",
            "Lcom/czhj/sdk/common/models/AdSlot$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->adslot_type:Ljava/util/List;

    return-object p0
.end method

.method public adx_ecpm(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->adx_ecpm:Ljava/lang/Integer;

    return-object p0
.end method

.method public alg_bid_type(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->alg_bid_type:Ljava/lang/Integer;

    return-object p0
.end method

.method public algorithm_floor(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->algorithm_floor:Ljava/lang/Integer;

    return-object p0
.end method

.method public api_strategy_index(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->api_strategy_index:Ljava/lang/Integer;

    return-object p0
.end method

.method public auto_click_mode(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->auto_click_mode:Ljava/lang/Integer;

    return-object p0
.end method

.method public b_seat(Ljava/util/List;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/czhj/sdk/common/models/AdSlot$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->b_seat:Ljava/util/List;

    return-object p0
.end method

.method public bidfloor(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->bidfloor:Ljava/lang/Integer;

    return-object p0
.end method

.method public build()Lcom/czhj/sdk/common/models/AdSlot;
    .locals 33

    move-object/from16 v0, p0

    new-instance v31, Lcom/czhj/sdk/common/models/AdSlot;

    move-object/from16 v1, v31

    iget-object v2, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->adslot_id:Ljava/lang/String;

    iget-object v3, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->adslot_size:Lcom/czhj/sdk/common/models/Size;

    iget-object v4, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->adslot_type:Ljava/util/List;

    iget-object v5, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->bidfloor:Ljava/lang/Integer;

    iget-object v6, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->vid:Ljava/lang/String;

    iget-object v7, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->latest_camp_id:Ljava/lang/String;

    iget-object v8, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->latest_crid:Ljava/lang/String;

    iget-object v9, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->material_type:Ljava/util/List;

    iget-object v10, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->sdk_strategy_index:Ljava/lang/Integer;

    iget-object v11, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->api_strategy_index:Ljava/lang/Integer;

    iget-object v12, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->sdk_cached_ads:Ljava/util/Map;

    iget-object v13, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->creative_type:Ljava/util/List;

    iget-object v14, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->algorithm_floor:Ljava/lang/Integer;

    iget-object v15, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->ext:Ljava/util/Map;

    move-object/from16 v32, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->ad_caches:Ljava/util/Map;

    move-object/from16 v16, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->video:Lcom/czhj/sdk/common/models/Video;

    move-object/from16 v17, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->expected_floor:Ljava/lang/Integer;

    move-object/from16 v18, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->auto_click_mode:Ljava/lang/Integer;

    move-object/from16 v19, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->settlement_mode:Ljava/lang/Integer;

    move-object/from16 v20, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->alg_bid_type:Ljava/lang/Integer;

    move-object/from16 v21, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->ecpm_target:Ljava/lang/Integer;

    move-object/from16 v22, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->settlement_setting:Ljava/lang/Integer;

    move-object/from16 v23, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->commer_ecpm:Ljava/lang/Integer;

    move-object/from16 v24, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->adx_ecpm:Ljava/lang/Integer;

    move-object/from16 v25, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->commer_ecpm_state:Ljava/lang/Integer;

    move-object/from16 v26, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->b_seat:Ljava/util/List;

    move-object/from16 v27, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->ad_count:Ljava/lang/Integer;

    move-object/from16 v28, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->vid_list:Ljava/util/List;

    move-object/from16 v29, v1

    invoke-super/range {p0 .. p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v30

    move-object/from16 v1, v32

    invoke-direct/range {v1 .. v30}, Lcom/czhj/sdk/common/models/AdSlot;-><init>(Ljava/lang/String;Lcom/czhj/sdk/common/models/Size;Ljava/util/List;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/util/Map;Ljava/util/List;Ljava/lang/Integer;Ljava/util/Map;Ljava/util/Map;Lcom/czhj/sdk/common/models/Video;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/util/List;Ljava/lang/Integer;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V

    return-object v31
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/AdSlot$Builder;->build()Lcom/czhj/sdk/common/models/AdSlot;

    move-result-object v0

    return-object v0
.end method

.method public commer_ecpm(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->commer_ecpm:Ljava/lang/Integer;

    return-object p0
.end method

.method public commer_ecpm_state(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->commer_ecpm_state:Ljava/lang/Integer;

    return-object p0
.end method

.method public creative_type(Ljava/util/List;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;)",
            "Lcom/czhj/sdk/common/models/AdSlot$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->creative_type:Ljava/util/List;

    return-object p0
.end method

.method public ecpm_target(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->ecpm_target:Ljava/lang/Integer;

    return-object p0
.end method

.method public expected_floor(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->expected_floor:Ljava/lang/Integer;

    return-object p0
.end method

.method public ext(Ljava/util/Map;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/czhj/sdk/common/models/AdSlot$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/Map;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->ext:Ljava/util/Map;

    return-object p0
.end method

.method public latest_camp_id(Ljava/lang/String;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->latest_camp_id:Ljava/lang/String;

    return-object p0
.end method

.method public latest_crid(Ljava/lang/String;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->latest_crid:Ljava/lang/String;

    return-object p0
.end method

.method public material_type(Ljava/util/List;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;)",
            "Lcom/czhj/sdk/common/models/AdSlot$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->material_type:Ljava/util/List;

    return-object p0
.end method

.method public sdk_cached_ads(Ljava/util/Map;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/czhj/sdk/common/models/AdSlot$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/Map;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->sdk_cached_ads:Ljava/util/Map;

    return-object p0
.end method

.method public sdk_strategy_index(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->sdk_strategy_index:Ljava/lang/Integer;

    return-object p0
.end method

.method public settlement_mode(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->settlement_mode:Ljava/lang/Integer;

    return-object p0
.end method

.method public settlement_setting(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->settlement_setting:Ljava/lang/Integer;

    return-object p0
.end method

.method public vid(Ljava/lang/String;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->vid:Ljava/lang/String;

    return-object p0
.end method

.method public vid_list(Ljava/util/List;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/czhj/sdk/common/models/AdSlot$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->vid_list:Ljava/util/List;

    return-object p0
.end method

.method public video(Lcom/czhj/sdk/common/models/Video;)Lcom/czhj/sdk/common/models/AdSlot$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/AdSlot$Builder;->video:Lcom/czhj/sdk/common/models/Video;

    return-object p0
.end method
