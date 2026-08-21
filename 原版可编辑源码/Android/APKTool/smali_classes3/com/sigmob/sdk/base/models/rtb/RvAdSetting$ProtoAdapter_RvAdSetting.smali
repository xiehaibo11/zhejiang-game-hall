.class final Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$ProtoAdapter_RvAdSetting;
.super Lcom/czhj/wire/ProtoAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "ProtoAdapter_RvAdSetting"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/ProtoAdapter<",
        "Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 2

    sget-object v0, Lcom/czhj/wire/FieldEncoding;->LENGTH_DELIMITED:Lcom/czhj/wire/FieldEncoding;

    const-class v1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    invoke-direct {p0, v0, v1}, Lcom/czhj/wire/ProtoAdapter;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    return-void
.end method


# virtual methods
.method public decode(Lcom/czhj/wire/ProtoReader;)Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;-><init>()V

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

    invoke-virtual {v0, v3, v4, v5}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->addUnknownField(ILcom/czhj/wire/FieldEncoding;Ljava/lang/Object;)Lcom/czhj/wire/Message$Builder;

    goto :goto_0

    :pswitch_0
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Boolean;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->disable_auto_load(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;

    goto :goto_0

    :pswitch_1
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->end_impression_time(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;

    goto :goto_0

    :pswitch_2
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->endcard_close_image(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;

    goto :goto_0

    :pswitch_3
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->end_time(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;

    goto :goto_0

    :pswitch_4
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Boolean;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->invisible_ad_label(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;

    goto :goto_0

    :pswitch_5
    sget-object v3, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->click_setting(Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;)Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;

    goto :goto_0

    :pswitch_6
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Boolean;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->full_click_on_video(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;

    goto :goto_0

    :pswitch_7
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Boolean;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->enable_exit_on_video_close(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;

    goto :goto_0

    :pswitch_8
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->skip_seconds(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;

    goto/16 :goto_0

    :pswitch_9
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->skip_percent(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;

    goto/16 :goto_0

    :pswitch_a
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->mute_postion(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;

    goto/16 :goto_0

    :pswitch_b
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->endcard_close_position(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;

    goto/16 :goto_0

    :pswitch_c
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->video_close_position(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;

    goto/16 :goto_0

    :pswitch_d
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->FLOAT:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Float;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->finished(Ljava/lang/Float;)Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;

    goto/16 :goto_0

    :pswitch_e
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->if_mute(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;

    goto/16 :goto_0

    :cond_0
    invoke-virtual {p1, v1, v2}, Lcom/czhj/wire/ProtoReader;->endMessage(J)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    move-result-object p1

    return-object p1

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_e
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

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$ProtoAdapter_RvAdSetting;->decode(Lcom/czhj/wire/ProtoReader;)Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    move-result-object p1

    return-object p1
.end method

.method public encode(Lcom/czhj/wire/ProtoWriter;Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;)V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->if_mute:Ljava/lang/Integer;

    const/4 v2, 0x1

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->FLOAT:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->finished:Ljava/lang/Float;

    const/4 v2, 0x2

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->video_close_position:Ljava/lang/Integer;

    const/4 v2, 0x3

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_position:Ljava/lang/Integer;

    const/4 v2, 0x4

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->mute_postion:Ljava/lang/Integer;

    const/4 v2, 0x5

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_percent:Ljava/lang/Integer;

    const/4 v2, 0x6

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_seconds:Ljava/lang/Integer;

    const/4 v2, 0x7

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->enable_exit_on_video_close:Ljava/lang/Boolean;

    const/16 v2, 0x8

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->full_click_on_video:Ljava/lang/Boolean;

    const/16 v2, 0x9

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->click_setting:Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    const/16 v2, 0xa

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->invisible_ad_label:Ljava/lang/Boolean;

    const/16 v2, 0xb

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->end_time:Ljava/lang/Integer;

    const/16 v2, 0xc

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_image:Ljava/lang/Integer;

    const/16 v2, 0xd

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->end_impression_time:Ljava/lang/Integer;

    const/16 v2, 0xe

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->disable_auto_load:Ljava/lang/Boolean;

    const/16 v2, 0xf

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

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

    check-cast p2, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    invoke-virtual {p0, p1, p2}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$ProtoAdapter_RvAdSetting;->encode(Lcom/czhj/wire/ProtoWriter;Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;)V

    return-void
.end method

.method public encodedSize(Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;)I
    .locals 4

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->if_mute:Ljava/lang/Integer;

    const/4 v2, 0x1

    invoke-virtual {v0, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v0

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->FLOAT:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->finished:Ljava/lang/Float;

    const/4 v3, 0x2

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->video_close_position:Ljava/lang/Integer;

    const/4 v3, 0x3

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_position:Ljava/lang/Integer;

    const/4 v3, 0x4

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->mute_postion:Ljava/lang/Integer;

    const/4 v3, 0x5

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_percent:Ljava/lang/Integer;

    const/4 v3, 0x6

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_seconds:Ljava/lang/Integer;

    const/4 v3, 0x7

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->enable_exit_on_video_close:Ljava/lang/Boolean;

    const/16 v3, 0x8

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->full_click_on_video:Ljava/lang/Boolean;

    const/16 v3, 0x9

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->click_setting:Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    const/16 v3, 0xa

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->invisible_ad_label:Ljava/lang/Boolean;

    const/16 v3, 0xb

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->end_time:Ljava/lang/Integer;

    const/16 v3, 0xc

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_image:Ljava/lang/Integer;

    const/16 v3, 0xd

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->end_impression_time:Ljava/lang/Integer;

    const/16 v3, 0xe

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->disable_auto_load:Ljava/lang/Boolean;

    const/16 v3, 0xf

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object p1

    invoke-virtual {p1}, Lcom/czhj/wire/okio/ByteString;->size()I

    move-result p1

    add-int/2addr v0, p1

    return v0
.end method

.method public bridge synthetic encodedSize(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$ProtoAdapter_RvAdSetting;->encodedSize(Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;)I

    move-result p1

    return p1
.end method

.method public redact(Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;)Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;
    .locals 2

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;

    move-result-object p1

    iget-object v0, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->click_setting:Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    if-eqz v0, :cond_0

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->click_setting:Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->redact(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    iput-object v0, p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->click_setting:Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    :cond_0
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->clearUnknownFields()Lcom/czhj/wire/Message$Builder;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic redact(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting$ProtoAdapter_RvAdSetting;->redact(Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;)Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    move-result-object p1

    return-object p1
.end method
