.class public final Lcom/sigmob/sdk/base/models/rtb/BidResponse;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/models/rtb/BidResponse$ProtoAdapter_BidResponse;,
        Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/sigmob/sdk/base/models/rtb/BidResponse;",
        "Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/sigmob/sdk/base/models/rtb/BidResponse;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/sigmob/sdk/base/models/rtb/BidResponse;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_AD_UA:Ljava/lang/String; = ""

.field public static final DEFAULT_ERROR_CODE:Ljava/lang/Long;

.field public static final DEFAULT_ERROR_MESSAGE:Ljava/lang/String; = ""

.field public static final DEFAULT_EXPIRATION_TIME:Ljava/lang/Integer;

.field public static final DEFAULT_PCTR_VALID_CHECK:Ljava/lang/Integer;

.field public static final DEFAULT_PCTR_VERSION:Ljava/lang/String; = ""

.field public static final DEFAULT_PROCESS_TIME_MS_DSP:Ljava/lang/Long;

.field public static final DEFAULT_PROCESS_TIME_MS_SSP:Ljava/lang/Long;

.field public static final DEFAULT_REQUEST_ID:Ljava/lang/String; = ""

.field public static final DEFAULT_UID:Ljava/lang/String; = ""

.field private static final serialVersionUID:J


# instance fields
.field public final ad_ua:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0xa
    .end annotation
.end field

.field public final ads:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.Ad#ADAPTER"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0x2
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/rtb/Ad;",
            ">;"
        }
    .end annotation
.end field

.field public final bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.BiddingResponse#ADAPTER"
        tag = 0xe
    .end annotation
.end field

.field public final error_code:Ljava/lang/Long;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT64"
        tag = 0x3
    .end annotation
.end field

.field public final error_message:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0xc
    .end annotation
.end field

.field public final expiration_time:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x9
    .end annotation
.end field

.field public final pctr_valid_check:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x6
    .end annotation
.end field

.field public final pctr_version:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x7
    .end annotation
.end field

.field public final process_time_ms_dsp:Ljava/lang/Long;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT64"
        tag = 0x4
    .end annotation
.end field

.field public final process_time_ms_ssp:Ljava/lang/Long;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT64"
        tag = 0x5
    .end annotation
.end field

.field public final request_id:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x1
    .end annotation
.end field

.field public final scene:Lcom/sigmob/sdk/base/models/rtb/Template;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.Template#ADAPTER"
        tag = 0xd
    .end annotation
.end field

.field public final slot_ad_setting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.SlotAdSetting#ADAPTER"
        tag = 0xb
    .end annotation
.end field

.field public final uid:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x8
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse$ProtoAdapter_BidResponse;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$ProtoAdapter_BidResponse;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->CREATOR:Landroid/os/Parcelable$Creator;

    const-wide/16 v0, 0x0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->DEFAULT_ERROR_CODE:Ljava/lang/Long;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->DEFAULT_PROCESS_TIME_MS_DSP:Ljava/lang/Long;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->DEFAULT_PROCESS_TIME_MS_SSP:Ljava/lang/Long;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->DEFAULT_PCTR_VALID_CHECK:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->DEFAULT_EXPIRATION_TIME:Ljava/lang/Integer;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/util/List;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/Template;Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;)V
    .locals 16
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/rtb/Ad;",
            ">;",
            "Ljava/lang/Long;",
            "Ljava/lang/Long;",
            "Ljava/lang/Long;",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            "Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;",
            "Ljava/lang/String;",
            "Lcom/sigmob/sdk/base/models/rtb/Template;",
            "Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;",
            ")V"
        }
    .end annotation

    sget-object v15, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

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

    invoke-direct/range {v0 .. v15}, Lcom/sigmob/sdk/base/models/rtb/BidResponse;-><init>(Ljava/lang/String;Ljava/util/List;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/Template;Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/util/List;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;Ljava/lang/String;Lcom/sigmob/sdk/base/models/rtb/Template;Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;Lcom/czhj/wire/okio/ByteString;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/rtb/Ad;",
            ">;",
            "Ljava/lang/Long;",
            "Ljava/lang/Long;",
            "Ljava/lang/Long;",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            "Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;",
            "Ljava/lang/String;",
            "Lcom/sigmob/sdk/base/models/rtb/Template;",
            "Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;",
            "Lcom/czhj/wire/okio/ByteString;",
            ")V"
        }
    .end annotation

    move-object v0, p0

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    move-object/from16 v2, p15

    invoke-direct {p0, v1, v2}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    move-object v1, p1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->request_id:Ljava/lang/String;

    const-string v1, "ads"

    move-object v2, p2

    invoke-static {v1, p2}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ads:Ljava/util/List;

    move-object v1, p3

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_code:Ljava/lang/Long;

    move-object v1, p4

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->process_time_ms_dsp:Ljava/lang/Long;

    move-object v1, p5

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->process_time_ms_ssp:Ljava/lang/Long;

    move-object v1, p6

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->pctr_valid_check:Ljava/lang/Integer;

    move-object v1, p7

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->pctr_version:Ljava/lang/String;

    move-object v1, p8

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->uid:Ljava/lang/String;

    move-object v1, p9

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->expiration_time:Ljava/lang/Integer;

    move-object v1, p10

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ad_ua:Ljava/lang/String;

    move-object v1, p11

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->slot_ad_setting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    move-object v1, p12

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_message:Ljava/lang/String;

    move-object/from16 v1, p13

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    move-object/from16 v1, p14

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->request_id:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->request_id:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ads:Ljava/util/List;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ads:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_code:Ljava/lang/Long;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_code:Ljava/lang/Long;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->process_time_ms_dsp:Ljava/lang/Long;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->process_time_ms_dsp:Ljava/lang/Long;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->process_time_ms_ssp:Ljava/lang/Long;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->process_time_ms_ssp:Ljava/lang/Long;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->pctr_valid_check:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->pctr_valid_check:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->pctr_version:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->pctr_version:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->uid:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->uid:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->expiration_time:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->expiration_time:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ad_ua:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ad_ua:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->slot_ad_setting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->slot_ad_setting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_message:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_message:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

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

    if-nez v0, :cond_d

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->request_id:Ljava/lang/String;

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

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ads:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_code:Ljava/lang/Long;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/Long;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->process_time_ms_dsp:Ljava/lang/Long;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/lang/Long;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->process_time_ms_ssp:Ljava/lang/Long;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/Long;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->pctr_valid_check:Ljava/lang/Integer;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->pctr_version:Ljava/lang/String;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_5

    :cond_5
    move v1, v2

    :goto_5
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->uid:Ljava/lang/String;

    if-eqz v1, :cond_6

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_6

    :cond_6
    move v1, v2

    :goto_6
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->expiration_time:Ljava/lang/Integer;

    if-eqz v1, :cond_7

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_7

    :cond_7
    move v1, v2

    :goto_7
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ad_ua:Ljava/lang/String;

    if-eqz v1, :cond_8

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_8

    :cond_8
    move v1, v2

    :goto_8
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->slot_ad_setting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    if-eqz v1, :cond_9

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->hashCode()I

    move-result v1

    goto :goto_9

    :cond_9
    move v1, v2

    :goto_9
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_message:Ljava/lang/String;

    if-eqz v1, :cond_a

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_a

    :cond_a
    move v1, v2

    :goto_a
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    if-eqz v1, :cond_b

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/rtb/Template;->hashCode()I

    move-result v1

    goto :goto_b

    :cond_b
    move v1, v2

    :goto_b
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    if-eqz v1, :cond_c

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->hashCode()I

    move-result v2

    :cond_c
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_d
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->request_id:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->request_id:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ads:Ljava/util/List;

    const-string v2, "ads"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->ads:Ljava/util/List;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_code:Ljava/lang/Long;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->error_code:Ljava/lang/Long;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->process_time_ms_dsp:Ljava/lang/Long;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->process_time_ms_dsp:Ljava/lang/Long;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->process_time_ms_ssp:Ljava/lang/Long;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->process_time_ms_ssp:Ljava/lang/Long;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->pctr_valid_check:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->pctr_valid_check:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->pctr_version:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->pctr_version:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->uid:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->uid:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->expiration_time:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->expiration_time:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ad_ua:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->ad_ua:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->slot_ad_setting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->slot_ad_setting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_message:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->error_message:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/rtb/BidResponse$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->request_id:Ljava/lang/String;

    if-eqz v1, :cond_0

    const-string v1, ", request_id="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->request_id:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ads:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, ", ads="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ads:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_code:Ljava/lang/Long;

    if-eqz v1, :cond_2

    const-string v1, ", error_code="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_code:Ljava/lang/Long;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->process_time_ms_dsp:Ljava/lang/Long;

    if-eqz v1, :cond_3

    const-string v1, ", process_time_ms_dsp="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->process_time_ms_dsp:Ljava/lang/Long;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->process_time_ms_ssp:Ljava/lang/Long;

    if-eqz v1, :cond_4

    const-string v1, ", process_time_ms_ssp="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->process_time_ms_ssp:Ljava/lang/Long;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->pctr_valid_check:Ljava/lang/Integer;

    if-eqz v1, :cond_5

    const-string v1, ", pctr_valid_check="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->pctr_valid_check:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_5
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->pctr_version:Ljava/lang/String;

    if-eqz v1, :cond_6

    const-string v1, ", pctr_version="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->pctr_version:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_6
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->uid:Ljava/lang/String;

    if-eqz v1, :cond_7

    const-string v1, ", uid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->uid:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_7
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->expiration_time:Ljava/lang/Integer;

    if-eqz v1, :cond_8

    const-string v1, ", expiration_time="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->expiration_time:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_8
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ad_ua:Ljava/lang/String;

    if-eqz v1, :cond_9

    const-string v1, ", ad_ua="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->ad_ua:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_9
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->slot_ad_setting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    if-eqz v1, :cond_a

    const-string v1, ", slot_ad_setting="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->slot_ad_setting:Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_a
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_message:Ljava/lang/String;

    if-eqz v1, :cond_b

    const-string v1, ", error_message="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->error_message:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_b
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    if-eqz v1, :cond_c

    const-string v1, ", scene="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_c
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    if-eqz v1, :cond_d

    const-string v1, ", bidding_response="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/BidResponse;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_d
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "BidResponse{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
