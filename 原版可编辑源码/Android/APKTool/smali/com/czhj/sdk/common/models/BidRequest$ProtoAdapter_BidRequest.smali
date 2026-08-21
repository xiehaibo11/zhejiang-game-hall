.class final Lcom/czhj/sdk/common/models/BidRequest$ProtoAdapter_BidRequest;
.super Lcom/czhj/wire/ProtoAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/models/BidRequest;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "ProtoAdapter_BidRequest"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/ProtoAdapter<",
        "Lcom/czhj/sdk/common/models/BidRequest;",
        ">;"
    }
.end annotation


# instance fields
.field private final ext_options:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation
.end field

.field private final options:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 2

    sget-object v0, Lcom/czhj/wire/FieldEncoding;->LENGTH_DELIMITED:Lcom/czhj/wire/FieldEncoding;

    const-class v1, Lcom/czhj/sdk/common/models/BidRequest;

    invoke-direct {p0, v0, v1}, Lcom/czhj/wire/ProtoAdapter;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->newMapAdapter(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/ProtoAdapter;)Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/models/BidRequest$ProtoAdapter_BidRequest;->options:Lcom/czhj/wire/ProtoAdapter;

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->newMapAdapter(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/ProtoAdapter;)Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/models/BidRequest$ProtoAdapter_BidRequest;->ext_options:Lcom/czhj/wire/ProtoAdapter;

    return-void
.end method


# virtual methods
.method public decode(Lcom/czhj/wire/ProtoReader;)Lcom/czhj/sdk/common/models/BidRequest;
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    new-instance v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/BidRequest$Builder;-><init>()V

    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->beginMessage()J

    move-result-wide v1

    :goto_0
    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->nextTag()I

    move-result v3

    const/4 v4, -0x1

    if-eq v3, v4, :cond_0

    packed-switch v3, :pswitch_data_0

    :pswitch_0
    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->peekFieldEncoding()Lcom/czhj/wire/FieldEncoding;

    move-result-object v4

    invoke-virtual {v4}, Lcom/czhj/wire/FieldEncoding;->rawProtoAdapter()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v5

    invoke-virtual {v5, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v0, v3, v4, v5}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->addUnknownField(ILcom/czhj/wire/FieldEncoding;Ljava/lang/Object;)Lcom/czhj/wire/Message$Builder;

    goto :goto_0

    :pswitch_1
    sget-object v3, Lcom/czhj/sdk/common/models/StrategyReq;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/czhj/sdk/common/models/StrategyReq;

    invoke-virtual {v0, v3}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->strategy_req(Lcom/czhj/sdk/common/models/StrategyReq;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    goto :goto_0

    :pswitch_2
    sget-object v3, Lcom/czhj/sdk/common/models/WXProgramReq;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/czhj/sdk/common/models/WXProgramReq;

    invoke-virtual {v0, v3}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->wx_program_req(Lcom/czhj/sdk/common/models/WXProgramReq;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    goto :goto_0

    :pswitch_3
    sget-object v3, Lcom/czhj/sdk/common/models/Version;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/czhj/sdk/common/models/Version;

    invoke-virtual {v0, v3}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->sdk_version(Lcom/czhj/sdk/common/models/Version;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    goto :goto_0

    :pswitch_4
    iget-object v3, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->ext_options:Ljava/util/Map;

    iget-object v4, p0, Lcom/czhj/sdk/common/models/BidRequest$ProtoAdapter_BidRequest;->ext_options:Lcom/czhj/wire/ProtoAdapter;

    goto :goto_1

    :pswitch_5
    iget-object v3, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->hbs:Ljava/util/List;

    sget-object v4, Lcom/czhj/sdk/common/models/HeaderBidding;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    goto :goto_2

    :pswitch_6
    sget-object v3, Lcom/czhj/sdk/common/models/User;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/czhj/sdk/common/models/User;

    invoke-virtual {v0, v3}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->user(Lcom/czhj/sdk/common/models/User;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    goto :goto_0

    :pswitch_7
    sget-object v3, Lcom/czhj/sdk/common/models/HeaderBidding;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/czhj/sdk/common/models/HeaderBidding;

    invoke-virtual {v0, v3}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->header_bidding(Lcom/czhj/sdk/common/models/HeaderBidding;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    goto :goto_0

    :pswitch_8
    iget-object v3, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->options:Ljava/util/Map;

    iget-object v4, p0, Lcom/czhj/sdk/common/models/BidRequest$ProtoAdapter_BidRequest;->options:Lcom/czhj/wire/ProtoAdapter;

    :goto_1
    invoke-virtual {v4, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map;

    invoke-interface {v3, v4}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    goto :goto_0

    :pswitch_9
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Boolean;

    invoke-virtual {v0, v3}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->disable_mediation(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    goto :goto_0

    :pswitch_a
    sget-object v3, Lcom/czhj/sdk/common/models/Privacy;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/czhj/sdk/common/models/Privacy;

    invoke-virtual {v0, v3}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->privacy(Lcom/czhj/sdk/common/models/Privacy;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    goto/16 :goto_0

    :pswitch_b
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Boolean;

    invoke-virtual {v0, v3}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->ad_is_expired(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    goto/16 :goto_0

    :pswitch_c
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->UINT32:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v0, v3}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->request_scene_type(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    goto/16 :goto_0

    :pswitch_d
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->INT64:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Long;

    invoke-virtual {v0, v3}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->req_timestamp(Ljava/lang/Long;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    goto/16 :goto_0

    :pswitch_e
    iget-object v3, v0, Lcom/czhj/sdk/common/models/BidRequest$Builder;->slots:Ljava/util/List;

    sget-object v4, Lcom/czhj/sdk/common/models/AdSlot;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    :goto_2
    invoke-virtual {v4, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_0

    :pswitch_f
    sget-object v3, Lcom/czhj/sdk/common/models/Network;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/czhj/sdk/common/models/Network;

    invoke-virtual {v0, v3}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->network(Lcom/czhj/sdk/common/models/Network;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    goto/16 :goto_0

    :pswitch_10
    sget-object v3, Lcom/czhj/sdk/common/models/Device;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/czhj/sdk/common/models/Device;

    invoke-virtual {v0, v3}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->device(Lcom/czhj/sdk/common/models/Device;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    goto/16 :goto_0

    :pswitch_11
    sget-object v3, Lcom/czhj/sdk/common/models/App;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/czhj/sdk/common/models/App;

    invoke-virtual {v0, v3}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->app(Lcom/czhj/sdk/common/models/App;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    goto/16 :goto_0

    :pswitch_12
    sget-object v3, Lcom/czhj/sdk/common/models/Version;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/czhj/sdk/common/models/Version;

    invoke-virtual {v0, v3}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->api_version(Lcom/czhj/sdk/common/models/Version;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    goto/16 :goto_0

    :pswitch_13
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->request_id(Ljava/lang/String;)Lcom/czhj/sdk/common/models/BidRequest$Builder;

    goto/16 :goto_0

    :cond_0
    invoke-virtual {p1, v1, v2}, Lcom/czhj/wire/ProtoReader;->endMessage(J)V

    invoke-virtual {v0}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->build()Lcom/czhj/sdk/common/models/BidRequest;

    move-result-object p1

    return-object p1

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_13
        :pswitch_12
        :pswitch_11
        :pswitch_10
        :pswitch_f
        :pswitch_e
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
    .end packed-switch
.end method

.method public bridge synthetic decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-virtual {p0, p1}, Lcom/czhj/sdk/common/models/BidRequest$ProtoAdapter_BidRequest;->decode(Lcom/czhj/wire/ProtoReader;)Lcom/czhj/sdk/common/models/BidRequest;

    move-result-object p1

    return-object p1
.end method

.method public encode(Lcom/czhj/wire/ProtoWriter;Lcom/czhj/sdk/common/models/BidRequest;)V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/BidRequest;->request_id:Ljava/lang/String;

    const/4 v2, 0x1

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/sdk/common/models/Version;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/BidRequest;->api_version:Lcom/czhj/sdk/common/models/Version;

    const/4 v2, 0x2

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/sdk/common/models/App;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/BidRequest;->app:Lcom/czhj/sdk/common/models/App;

    const/4 v2, 0x3

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/sdk/common/models/Device;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/BidRequest;->device:Lcom/czhj/sdk/common/models/Device;

    const/4 v2, 0x4

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/sdk/common/models/Network;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/BidRequest;->network:Lcom/czhj/sdk/common/models/Network;

    const/4 v2, 0x5

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/sdk/common/models/AdSlot;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v0}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iget-object v1, p2, Lcom/czhj/sdk/common/models/BidRequest;->slots:Ljava/util/List;

    const/4 v2, 0x6

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->INT64:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/BidRequest;->req_timestamp:Ljava/lang/Long;

    const/4 v2, 0x7

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->UINT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/BidRequest;->request_scene_type:Ljava/lang/Integer;

    const/16 v2, 0x8

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/BidRequest;->ad_is_expired:Ljava/lang/Boolean;

    const/16 v2, 0x9

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/sdk/common/models/Privacy;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/BidRequest;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    const/16 v2, 0xa

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/BidRequest;->disable_mediation:Ljava/lang/Boolean;

    const/16 v2, 0xb

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    iget-object v0, p0, Lcom/czhj/sdk/common/models/BidRequest$ProtoAdapter_BidRequest;->options:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/BidRequest;->options:Ljava/util/Map;

    const/16 v2, 0xf

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/sdk/common/models/HeaderBidding;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/BidRequest;->header_bidding:Lcom/czhj/sdk/common/models/HeaderBidding;

    const/16 v2, 0x10

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/sdk/common/models/User;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/BidRequest;->user:Lcom/czhj/sdk/common/models/User;

    const/16 v2, 0x11

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/sdk/common/models/HeaderBidding;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v0}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iget-object v1, p2, Lcom/czhj/sdk/common/models/BidRequest;->hbs:Ljava/util/List;

    const/16 v2, 0x12

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    iget-object v0, p0, Lcom/czhj/sdk/common/models/BidRequest$ProtoAdapter_BidRequest;->ext_options:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/BidRequest;->ext_options:Ljava/util/Map;

    const/16 v2, 0x13

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/sdk/common/models/Version;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/BidRequest;->sdk_version:Lcom/czhj/sdk/common/models/Version;

    const/16 v2, 0x14

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/sdk/common/models/WXProgramReq;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/BidRequest;->wx_program_req:Lcom/czhj/sdk/common/models/WXProgramReq;

    const/16 v2, 0x15

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/sdk/common/models/StrategyReq;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/BidRequest;->strategy_req:Lcom/czhj/sdk/common/models/StrategyReq;

    const/16 v2, 0x16

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    invoke-virtual {p2}, Lcom/czhj/sdk/common/models/BidRequest;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/czhj/wire/ProtoWriter;->writeBytes(Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public bridge synthetic encode(Lcom/czhj/wire/ProtoWriter;Ljava/lang/Object;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    check-cast p2, Lcom/czhj/sdk/common/models/BidRequest;

    invoke-virtual {p0, p1, p2}, Lcom/czhj/sdk/common/models/BidRequest$ProtoAdapter_BidRequest;->encode(Lcom/czhj/wire/ProtoWriter;Lcom/czhj/sdk/common/models/BidRequest;)V

    return-void
.end method

.method public encodedSize(Lcom/czhj/sdk/common/models/BidRequest;)I
    .locals 4

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/czhj/sdk/common/models/BidRequest;->request_id:Ljava/lang/String;

    const/4 v2, 0x1

    invoke-virtual {v0, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v0

    sget-object v1, Lcom/czhj/sdk/common/models/Version;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/sdk/common/models/BidRequest;->api_version:Lcom/czhj/sdk/common/models/Version;

    const/4 v3, 0x2

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/sdk/common/models/App;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/sdk/common/models/BidRequest;->app:Lcom/czhj/sdk/common/models/App;

    const/4 v3, 0x3

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/sdk/common/models/Device;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/sdk/common/models/BidRequest;->device:Lcom/czhj/sdk/common/models/Device;

    const/4 v3, 0x4

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/sdk/common/models/Network;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/sdk/common/models/BidRequest;->network:Lcom/czhj/sdk/common/models/Network;

    const/4 v3, 0x5

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/sdk/common/models/AdSlot;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v1}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v1

    iget-object v2, p1, Lcom/czhj/sdk/common/models/BidRequest;->slots:Ljava/util/List;

    const/4 v3, 0x6

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->INT64:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/sdk/common/models/BidRequest;->req_timestamp:Ljava/lang/Long;

    const/4 v3, 0x7

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->UINT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/sdk/common/models/BidRequest;->request_scene_type:Ljava/lang/Integer;

    const/16 v3, 0x8

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/sdk/common/models/BidRequest;->ad_is_expired:Ljava/lang/Boolean;

    const/16 v3, 0x9

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/sdk/common/models/Privacy;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/sdk/common/models/BidRequest;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    const/16 v3, 0xa

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/sdk/common/models/BidRequest;->disable_mediation:Ljava/lang/Boolean;

    const/16 v3, 0xb

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest$ProtoAdapter_BidRequest;->options:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/sdk/common/models/BidRequest;->options:Ljava/util/Map;

    const/16 v3, 0xf

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/sdk/common/models/HeaderBidding;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/sdk/common/models/BidRequest;->header_bidding:Lcom/czhj/sdk/common/models/HeaderBidding;

    const/16 v3, 0x10

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/sdk/common/models/User;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/sdk/common/models/BidRequest;->user:Lcom/czhj/sdk/common/models/User;

    const/16 v3, 0x11

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/sdk/common/models/HeaderBidding;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v1}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v1

    iget-object v2, p1, Lcom/czhj/sdk/common/models/BidRequest;->hbs:Ljava/util/List;

    const/16 v3, 0x12

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    iget-object v1, p0, Lcom/czhj/sdk/common/models/BidRequest$ProtoAdapter_BidRequest;->ext_options:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/sdk/common/models/BidRequest;->ext_options:Ljava/util/Map;

    const/16 v3, 0x13

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/sdk/common/models/Version;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/sdk/common/models/BidRequest;->sdk_version:Lcom/czhj/sdk/common/models/Version;

    const/16 v3, 0x14

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/sdk/common/models/WXProgramReq;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/sdk/common/models/BidRequest;->wx_program_req:Lcom/czhj/sdk/common/models/WXProgramReq;

    const/16 v3, 0x15

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/sdk/common/models/StrategyReq;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/sdk/common/models/BidRequest;->strategy_req:Lcom/czhj/sdk/common/models/StrategyReq;

    const/16 v3, 0x16

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    invoke-virtual {p1}, Lcom/czhj/sdk/common/models/BidRequest;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object p1

    invoke-virtual {p1}, Lcom/czhj/wire/okio/ByteString;->size()I

    move-result p1

    add-int/2addr v0, p1

    return v0
.end method

.method public bridge synthetic encodedSize(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/czhj/sdk/common/models/BidRequest;

    invoke-virtual {p0, p1}, Lcom/czhj/sdk/common/models/BidRequest$ProtoAdapter_BidRequest;->encodedSize(Lcom/czhj/sdk/common/models/BidRequest;)I

    move-result p1

    return p1
.end method

.method public redact(Lcom/czhj/sdk/common/models/BidRequest;)Lcom/czhj/sdk/common/models/BidRequest;
    .locals 2

    invoke-virtual {p1}, Lcom/czhj/sdk/common/models/BidRequest;->newBuilder()Lcom/czhj/sdk/common/models/BidRequest$Builder;

    move-result-object p1

    iget-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->api_version:Lcom/czhj/sdk/common/models/Version;

    if-eqz v0, :cond_0

    sget-object v0, Lcom/czhj/sdk/common/models/Version;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->api_version:Lcom/czhj/sdk/common/models/Version;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->redact(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/czhj/sdk/common/models/Version;

    iput-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->api_version:Lcom/czhj/sdk/common/models/Version;

    :cond_0
    iget-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->app:Lcom/czhj/sdk/common/models/App;

    if-eqz v0, :cond_1

    sget-object v0, Lcom/czhj/sdk/common/models/App;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->app:Lcom/czhj/sdk/common/models/App;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->redact(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/czhj/sdk/common/models/App;

    iput-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->app:Lcom/czhj/sdk/common/models/App;

    :cond_1
    iget-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->device:Lcom/czhj/sdk/common/models/Device;

    if-eqz v0, :cond_2

    sget-object v0, Lcom/czhj/sdk/common/models/Device;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->device:Lcom/czhj/sdk/common/models/Device;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->redact(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/czhj/sdk/common/models/Device;

    iput-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->device:Lcom/czhj/sdk/common/models/Device;

    :cond_2
    iget-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->network:Lcom/czhj/sdk/common/models/Network;

    if-eqz v0, :cond_3

    sget-object v0, Lcom/czhj/sdk/common/models/Network;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->network:Lcom/czhj/sdk/common/models/Network;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->redact(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/czhj/sdk/common/models/Network;

    iput-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->network:Lcom/czhj/sdk/common/models/Network;

    :cond_3
    iget-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->slots:Ljava/util/List;

    sget-object v1, Lcom/czhj/sdk/common/models/AdSlot;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0, v1}, Lcom/czhj/wire/internal/Internal;->redactElements(Ljava/util/List;Lcom/czhj/wire/ProtoAdapter;)V

    iget-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    if-eqz v0, :cond_4

    sget-object v0, Lcom/czhj/sdk/common/models/Privacy;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->redact(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/czhj/sdk/common/models/Privacy;

    iput-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    :cond_4
    iget-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->header_bidding:Lcom/czhj/sdk/common/models/HeaderBidding;

    if-eqz v0, :cond_5

    sget-object v0, Lcom/czhj/sdk/common/models/HeaderBidding;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->header_bidding:Lcom/czhj/sdk/common/models/HeaderBidding;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->redact(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/czhj/sdk/common/models/HeaderBidding;

    iput-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->header_bidding:Lcom/czhj/sdk/common/models/HeaderBidding;

    :cond_5
    iget-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->user:Lcom/czhj/sdk/common/models/User;

    if-eqz v0, :cond_6

    sget-object v0, Lcom/czhj/sdk/common/models/User;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->user:Lcom/czhj/sdk/common/models/User;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->redact(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/czhj/sdk/common/models/User;

    iput-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->user:Lcom/czhj/sdk/common/models/User;

    :cond_6
    iget-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->hbs:Ljava/util/List;

    sget-object v1, Lcom/czhj/sdk/common/models/HeaderBidding;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0, v1}, Lcom/czhj/wire/internal/Internal;->redactElements(Ljava/util/List;Lcom/czhj/wire/ProtoAdapter;)V

    iget-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->sdk_version:Lcom/czhj/sdk/common/models/Version;

    if-eqz v0, :cond_7

    sget-object v0, Lcom/czhj/sdk/common/models/Version;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->sdk_version:Lcom/czhj/sdk/common/models/Version;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->redact(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/czhj/sdk/common/models/Version;

    iput-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->sdk_version:Lcom/czhj/sdk/common/models/Version;

    :cond_7
    iget-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->wx_program_req:Lcom/czhj/sdk/common/models/WXProgramReq;

    if-eqz v0, :cond_8

    sget-object v0, Lcom/czhj/sdk/common/models/WXProgramReq;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->wx_program_req:Lcom/czhj/sdk/common/models/WXProgramReq;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->redact(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/czhj/sdk/common/models/WXProgramReq;

    iput-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->wx_program_req:Lcom/czhj/sdk/common/models/WXProgramReq;

    :cond_8
    iget-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->strategy_req:Lcom/czhj/sdk/common/models/StrategyReq;

    if-eqz v0, :cond_9

    sget-object v0, Lcom/czhj/sdk/common/models/StrategyReq;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->strategy_req:Lcom/czhj/sdk/common/models/StrategyReq;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->redact(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/czhj/sdk/common/models/StrategyReq;

    iput-object v0, p1, Lcom/czhj/sdk/common/models/BidRequest$Builder;->strategy_req:Lcom/czhj/sdk/common/models/StrategyReq;

    :cond_9
    invoke-virtual {p1}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->clearUnknownFields()Lcom/czhj/wire/Message$Builder;

    invoke-virtual {p1}, Lcom/czhj/sdk/common/models/BidRequest$Builder;->build()Lcom/czhj/sdk/common/models/BidRequest;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic redact(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    check-cast p1, Lcom/czhj/sdk/common/models/BidRequest;

    invoke-virtual {p0, p1}, Lcom/czhj/sdk/common/models/BidRequest$ProtoAdapter_BidRequest;->redact(Lcom/czhj/sdk/common/models/BidRequest;)Lcom/czhj/sdk/common/models/BidRequest;

    move-result-object p1

    return-object p1
.end method
