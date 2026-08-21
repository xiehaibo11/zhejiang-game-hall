.class final Lcom/sigmob/sdk/base/models/rtb/BidResponse$ProtoAdapter_BidResponse;
.super Lcom/czhj/wire/ProtoAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/BidResponse;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "ProtoAdapter_BidResponse"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/ProtoAdapter<",
        "Lcom/sigmob/sdk/base/models/rtb/BidResponse;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 2

    sget-object v0, Lcom/czhj/wire/FieldEncoding;->LENGTH_DELIMITED:Lcom/czhj/wire/FieldEncoding;

    const-class v1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;

    invoke-direct {p0, v0, v1}, Lcom/czhj/wire/ProtoAdapter;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    return-void
.end method


# virtual methods
.method public decode(Lcom/czhj/wire/ProtoReader;)Lcom/sigmob/sdk/base/models/rtb/BidResponse;
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;-><init>()V

    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->beginMessage()J

    move-result-wide v1

    :goto_0
    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->nextTag()I

    move-result v3

    const/4 v4, -0x1

    if-eq v3, v4, :cond_0

    packed-switch v3, :pswitch_data_0

    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->peekFieldEncoding()Lcom/czhj/wire/FieldEncoding;

    move-result-object v4

    invoke-virtual {v4}, Lcom/czhj/wire/FieldEncoding;->rawProtoAdapter()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v5

    invoke-virtual {v5, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v0, v3, v4, v5}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->addUnknownField(ILcom/czhj/wire/FieldEncoding;Ljava/lang/Object;)Lcom/czhj/wire/Message$Builder;

    goto :goto_0

    :pswitch_0
    sget-object v3, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->bidding_response(Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;)Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    goto :goto_0

    :pswitch_1
    sget-object v3, Lcom/sigmob/sdk/base/models/rtb/Template;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/rtb/Template;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->scene(Lcom/sigmob/sdk/base/models/rtb/Template;)Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    goto :goto_0

    :pswitch_2
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->error_message(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    goto :goto_0

    :pswitch_3
    sget-object v3, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->slot_ad_setting(Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;)Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    goto :goto_0

    :pswitch_4
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->ad_ua(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    goto :goto_0

    :pswitch_5
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->UINT32:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->expiration_time(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    goto :goto_0

    :pswitch_6
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->uid(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    goto :goto_0

    :pswitch_7
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->pctr_version(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    goto :goto_0

    :pswitch_8
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->UINT32:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->pctr_valid_check(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    goto/16 :goto_0

    :pswitch_9
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->UINT64:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Long;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->process_time_ms_ssp(Ljava/lang/Long;)Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    goto/16 :goto_0

    :pswitch_a
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->UINT64:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Long;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->process_time_ms_dsp(Ljava/lang/Long;)Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    goto/16 :goto_0

    :pswitch_b
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->UINT64:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Long;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->error_code(Ljava/lang/Long;)Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    goto/16 :goto_0

    :pswitch_c
    iget-object v3, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->ads:Ljava/util/List;

    sget-object v4, Lcom/sigmob/sdk/base/models/rtb/Ad;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v4, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_0

    :pswitch_d
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->request_id(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    goto/16 :goto_0

    :cond_0
    invoke-virtual {p1, v1, v2}, Lcom/czhj/wire/ProtoReader;->endMessage(J)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/BidResponse;

    move-result-object p1

    return-object p1

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public bridge synthetic decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$ProtoAdapter_BidResponse;->decode(Lcom/czhj/wire/ProtoReader;)Lcom/sigmob/sdk/base/models/rtb/BidResponse;

    move-result-object p1

    return-object p1
.end method

.method public encode(Lcom/czhj/wire/ProtoWriter;Lcom/sigmob/sdk/base/models/rtb/BidResponse;)V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->request_id:Ljava/lang/String;

    const/4 v2, 0x1

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v0}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ads:Ljava/util/List;

    const/4 v2, 0x2

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->UINT64:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_code:Ljava/lang/Long;

    const/4 v2, 0x3

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->UINT64:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->process_time_ms_dsp:Ljava/lang/Long;

    const/4 v2, 0x4

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->UINT64:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->process_time_ms_ssp:Ljava/lang/Long;

    const/4 v2, 0x5

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->UINT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->pctr_valid_check:Ljava/lang/Integer;

    const/4 v2, 0x6

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->pctr_version:Ljava/lang/String;

    const/4 v2, 0x7

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->uid:Ljava/lang/String;

    const/16 v2, 0x8

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->UINT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->expiration_time:Ljava/lang/Integer;

    const/16 v2, 0x9

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ad_ua:Ljava/lang/String;

    const/16 v2, 0xa

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->slot_ad_setting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    const/16 v2, 0xb

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_message:Ljava/lang/String;

    const/16 v2, 0xc

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/Template;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    const/16 v2, 0xd

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    const/16 v2, 0xe

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->unknownFields()Lcom/czhj/wire/okio/ByteString;

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

    check-cast p2, Lcom/sigmob/sdk/base/models/rtb/BidResponse;

    invoke-virtual {p0, p1, p2}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$ProtoAdapter_BidResponse;->encode(Lcom/czhj/wire/ProtoWriter;Lcom/sigmob/sdk/base/models/rtb/BidResponse;)V

    return-void
.end method

.method public encodedSize(Lcom/sigmob/sdk/base/models/rtb/BidResponse;)I
    .locals 4

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->request_id:Ljava/lang/String;

    const/4 v2, 0x1

    invoke-virtual {v0, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v0

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/Ad;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v1}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v1

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ads:Ljava/util/List;

    const/4 v3, 0x2

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->UINT64:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_code:Ljava/lang/Long;

    const/4 v3, 0x3

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->UINT64:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->process_time_ms_dsp:Ljava/lang/Long;

    const/4 v3, 0x4

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->UINT64:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->process_time_ms_ssp:Ljava/lang/Long;

    const/4 v3, 0x5

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->UINT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->pctr_valid_check:Ljava/lang/Integer;

    const/4 v3, 0x6

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->pctr_version:Ljava/lang/String;

    const/4 v3, 0x7

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->uid:Ljava/lang/String;

    const/16 v3, 0x8

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->UINT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->expiration_time:Ljava/lang/Integer;

    const/16 v3, 0x9

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ad_ua:Ljava/lang/String;

    const/16 v3, 0xa

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->slot_ad_setting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    const/16 v3, 0xb

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_message:Ljava/lang/String;

    const/16 v3, 0xc

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/Template;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    const/16 v3, 0xd

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    const/16 v3, 0xe

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object p1

    invoke-virtual {p1}, Lcom/czhj/wire/okio/ByteString;->size()I

    move-result p1

    add-int/2addr v0, p1

    return v0
.end method

.method public bridge synthetic encodedSize(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$ProtoAdapter_BidResponse;->encodedSize(Lcom/sigmob/sdk/base/models/rtb/BidResponse;)I

    move-result p1

    return p1
.end method

.method public redact(Lcom/sigmob/sdk/base/models/rtb/BidResponse;)Lcom/sigmob/sdk/base/models/rtb/BidResponse;
    .locals 2

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    move-result-object p1

    iget-object v0, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->ads:Ljava/util/List;

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/Ad;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0, v1}, Lcom/czhj/wire/internal/Internal;->redactElements(Ljava/util/List;Lcom/czhj/wire/ProtoAdapter;)V

    iget-object v0, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->slot_ad_setting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    if-eqz v0, :cond_0

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->slot_ad_setting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->redact(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    iput-object v0, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->slot_ad_setting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    :cond_0
    iget-object v0, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    if-eqz v0, :cond_1

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/Template;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->redact(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/rtb/Template;

    iput-object v0, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    :cond_1
    iget-object v0, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    if-eqz v0, :cond_2

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->redact(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    iput-object v0, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    :cond_2
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->clearUnknownFields()Lcom/czhj/wire/Message$Builder;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/BidResponse;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic redact(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$ProtoAdapter_BidResponse;->redact(Lcom/sigmob/sdk/base/models/rtb/BidResponse;)Lcom/sigmob/sdk/base/models/rtb/BidResponse;

    move-result-object p1

    return-object p1
.end method
