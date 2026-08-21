.class public final Lcom/sigmob/sdk/base/models/rtb/Ad;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/models/rtb/Ad$ProtoAdapter_Ad;,
        Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/sigmob/sdk/base/models/rtb/Ad;",
        "Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/sigmob/sdk/base/models/rtb/Ad;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/sigmob/sdk/base/models/rtb/Ad;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_ADSLOT_ID:Ljava/lang/String; = ""

.field public static final DEFAULT_AD_SOURCE_CHANNEL:Ljava/lang/String; = ""

.field public static final DEFAULT_AD_SOURCE_LOGO:Ljava/lang/String; = ""

.field public static final DEFAULT_AD_TYPE:Ljava/lang/Integer;

.field public static final DEFAULT_ATTRIBUTION_ID:Ljava/lang/String; = ""

.field public static final DEFAULT_BID_PRICE:Ljava/lang/Integer;

.field public static final DEFAULT_BID_TYPE:Ljava/lang/Integer;

.field public static final DEFAULT_CAMP_ID:Ljava/lang/String; = ""

.field public static final DEFAULT_CRID:Ljava/lang/String; = ""

.field public static final DEFAULT_CUST_ID:Ljava/lang/String; = ""

.field public static final DEFAULT_DISPLAY_ORIENTATION:Ljava/lang/Integer;

.field public static final DEFAULT_EXPIRED_TIME:Ljava/lang/Integer;

.field public static final DEFAULT_FORBIDEN_PARSE_LANDINGPAGE:Ljava/lang/Boolean;

.field public static final DEFAULT_IS_OVERRIDE:Ljava/lang/Integer;

.field public static final DEFAULT_PRODUCT_ID:Ljava/lang/String; = ""

.field public static final DEFAULT_SETTLEMENT_PRICE_ENC:Ljava/lang/String; = ""

.field public static final DEFAULT_VID:Ljava/lang/String; = ""

.field private static final serialVersionUID:J


# instance fields
.field public final ad_setting:Lcom/sigmob/sdk/base/models/rtb/AdSetting;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.AdSetting#ADAPTER"
        tag = 0x13
    .end annotation
.end field

.field public final ad_source_channel:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0xd
    .end annotation
.end field

.field public final ad_source_logo:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0xc
    .end annotation
.end field

.field public final ad_track_macro:Ljava/util/Map;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        keyAdapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x18
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

.field public final ad_tracking:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.Tracking#ADAPTER"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0x7
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/rtb/Tracking;",
            ">;"
        }
    .end annotation
.end field

.field public final ad_type:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0xe
    .end annotation
.end field

.field public final adslot_id:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x1
    .end annotation
.end field

.field public final attribution_id:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x15
    .end annotation
.end field

.field public final bid_price:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x8
    .end annotation
.end field

.field public final bid_type:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x14
    .end annotation
.end field

.field public final camp_id:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x4
    .end annotation
.end field

.field public final crid:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x5
    .end annotation
.end field

.field public final cust_id:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x3
    .end annotation
.end field

.field public final display_orientation:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x12
    .end annotation
.end field

.field public final expired_time:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x10
    .end annotation
.end field

.field public final forbiden_parse_landingpage:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x11
    .end annotation
.end field

.field public final is_override:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0xb
    .end annotation
.end field

.field public final materials:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.MaterialMeta#ADAPTER"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0x6
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;",
            ">;"
        }
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

.field public final product_id:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x9
    .end annotation
.end field

.field public final settlement_price_enc:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0xa
    .end annotation
.end field

.field public final vid:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x2
    .end annotation
.end field

.field public final wx_program_res:Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.WXProgramRes#ADAPTER"
        tag = 0x1b
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/Ad$ProtoAdapter_Ad;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/Ad$ProtoAdapter_Ad;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->CREATOR:Landroid/os/Parcelable$Creator;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    sput-object v1, Lcom/sigmob/sdk/base/models/rtb/Ad;->DEFAULT_BID_PRICE:Ljava/lang/Integer;

    sput-object v1, Lcom/sigmob/sdk/base/models/rtb/Ad;->DEFAULT_IS_OVERRIDE:Ljava/lang/Integer;

    sput-object v1, Lcom/sigmob/sdk/base/models/rtb/Ad;->DEFAULT_AD_TYPE:Ljava/lang/Integer;

    sput-object v1, Lcom/sigmob/sdk/base/models/rtb/Ad;->DEFAULT_EXPIRED_TIME:Ljava/lang/Integer;

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->DEFAULT_FORBIDEN_PARSE_LANDINGPAGE:Ljava/lang/Boolean;

    sput-object v1, Lcom/sigmob/sdk/base/models/rtb/Ad;->DEFAULT_DISPLAY_ORIENTATION:Ljava/lang/Integer;

    sput-object v1, Lcom/sigmob/sdk/base/models/rtb/Ad;->DEFAULT_BID_TYPE:Ljava/lang/Integer;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/List;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/util/Map;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/rtb/AdSetting;Ljava/lang/Integer;Ljava/lang/String;Ljava/util/Map;Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;)V
    .locals 25
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;",
            ">;",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/rtb/Tracking;",
            ">;",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Integer;",
            "Lcom/sigmob/sdk/base/models/rtb/AdSetting;",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;",
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

    move-object/from16 v20, p20

    move-object/from16 v21, p21

    move-object/from16 v22, p22

    move-object/from16 v23, p23

    sget-object v24, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    invoke-direct/range {v0 .. v24}, Lcom/sigmob/sdk/base/models/rtb/Ad;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/List;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/util/Map;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/rtb/AdSetting;Ljava/lang/Integer;Ljava/lang/String;Ljava/util/Map;Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/List;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/util/Map;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/rtb/AdSetting;Ljava/lang/Integer;Ljava/lang/String;Ljava/util/Map;Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;Lcom/czhj/wire/okio/ByteString;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;",
            ">;",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/rtb/Tracking;",
            ">;",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Integer;",
            "Lcom/sigmob/sdk/base/models/rtb/AdSetting;",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;",
            "Lcom/czhj/wire/okio/ByteString;",
            ")V"
        }
    .end annotation

    move-object v0, p0

    sget-object v1, Lcom/sigmob/sdk/base/models/rtb/Ad;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    move-object/from16 v2, p24

    invoke-direct {p0, v1, v2}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    move-object v1, p1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->adslot_id:Ljava/lang/String;

    move-object v1, p2

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->vid:Ljava/lang/String;

    move-object v1, p3

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->cust_id:Ljava/lang/String;

    move-object v1, p4

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->camp_id:Ljava/lang/String;

    move-object v1, p5

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->crid:Ljava/lang/String;

    const-string v1, "materials"

    move-object v2, p6

    invoke-static {v1, p6}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    const-string v1, "ad_tracking"

    move-object v2, p7

    invoke-static {v1, p7}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_tracking:Ljava/util/List;

    move-object v1, p8

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->bid_price:Ljava/lang/Integer;

    move-object v1, p9

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->product_id:Ljava/lang/String;

    move-object v1, p10

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->settlement_price_enc:Ljava/lang/String;

    move-object v1, p11

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->is_override:Ljava/lang/Integer;

    move-object v1, p12

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_source_logo:Ljava/lang/String;

    move-object/from16 v1, p13

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_source_channel:Ljava/lang/String;

    move-object/from16 v1, p14

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_type:Ljava/lang/Integer;

    const-string v1, "options"

    move-object/from16 v2, p15

    invoke-static {v1, v2}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/Map;)Ljava/util/Map;

    move-result-object v1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->options:Ljava/util/Map;

    move-object/from16 v1, p16

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->expired_time:Ljava/lang/Integer;

    move-object/from16 v1, p17

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->forbiden_parse_landingpage:Ljava/lang/Boolean;

    move-object/from16 v1, p18

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->display_orientation:Ljava/lang/Integer;

    move-object/from16 v1, p19

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_setting:Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    move-object/from16 v1, p20

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->bid_type:Ljava/lang/Integer;

    move-object/from16 v1, p21

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->attribution_id:Ljava/lang/String;

    const-string v1, "ad_track_macro"

    move-object/from16 v2, p22

    invoke-static {v1, v2}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/Map;)Ljava/util/Map;

    move-result-object v1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_track_macro:Ljava/util/Map;

    move-object/from16 v1, p23

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->wx_program_res:Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/Ad;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/Ad;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/Ad;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->adslot_id:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->adslot_id:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->vid:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->vid:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->cust_id:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->cust_id:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->camp_id:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->camp_id:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->crid:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->crid:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_tracking:Ljava/util/List;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_tracking:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->bid_price:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->bid_price:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->product_id:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->product_id:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->settlement_price_enc:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->settlement_price_enc:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->is_override:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->is_override:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_source_logo:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_source_logo:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_source_channel:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_source_channel:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_type:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_type:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->options:Ljava/util/Map;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->options:Ljava/util/Map;

    invoke-interface {v1, v3}, Ljava/util/Map;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->expired_time:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->expired_time:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->forbiden_parse_landingpage:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->forbiden_parse_landingpage:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->display_orientation:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->display_orientation:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_setting:Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_setting:Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->bid_type:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->bid_type:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->attribution_id:Ljava/lang/String;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->attribution_id:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_track_macro:Ljava/util/Map;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_track_macro:Ljava/util/Map;

    invoke-interface {v1, v3}, Ljava/util/Map;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->wx_program_res:Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/Ad;->wx_program_res:Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;

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

    if-nez v0, :cond_13

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/Ad;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->adslot_id:Ljava/lang/String;

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

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->vid:Ljava/lang/String;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->cust_id:Ljava/lang/String;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->camp_id:Ljava/lang/String;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->crid:Ljava/lang/String;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_tracking:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->bid_price:Ljava/lang/Integer;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_5

    :cond_5
    move v1, v2

    :goto_5
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->product_id:Ljava/lang/String;

    if-eqz v1, :cond_6

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_6

    :cond_6
    move v1, v2

    :goto_6
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->settlement_price_enc:Ljava/lang/String;

    if-eqz v1, :cond_7

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_7

    :cond_7
    move v1, v2

    :goto_7
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->is_override:Ljava/lang/Integer;

    if-eqz v1, :cond_8

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_8

    :cond_8
    move v1, v2

    :goto_8
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_source_logo:Ljava/lang/String;

    if-eqz v1, :cond_9

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_9

    :cond_9
    move v1, v2

    :goto_9
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_source_channel:Ljava/lang/String;

    if-eqz v1, :cond_a

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_a

    :cond_a
    move v1, v2

    :goto_a
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_type:Ljava/lang/Integer;

    if-eqz v1, :cond_b

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_b

    :cond_b
    move v1, v2

    :goto_b
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->options:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->expired_time:Ljava/lang/Integer;

    if-eqz v1, :cond_c

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_c

    :cond_c
    move v1, v2

    :goto_c
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->forbiden_parse_landingpage:Ljava/lang/Boolean;

    if-eqz v1, :cond_d

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_d

    :cond_d
    move v1, v2

    :goto_d
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->display_orientation:Ljava/lang/Integer;

    if-eqz v1, :cond_e

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_e

    :cond_e
    move v1, v2

    :goto_e
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_setting:Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    if-eqz v1, :cond_f

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->hashCode()I

    move-result v1

    goto :goto_f

    :cond_f
    move v1, v2

    :goto_f
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->bid_type:Ljava/lang/Integer;

    if-eqz v1, :cond_10

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_10

    :cond_10
    move v1, v2

    :goto_10
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->attribution_id:Ljava/lang/String;

    if-eqz v1, :cond_11

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_11

    :cond_11
    move v1, v2

    :goto_11
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_track_macro:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->wx_program_res:Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;

    if-eqz v1, :cond_12

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;->hashCode()I

    move-result v2

    :cond_12
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_13
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/Ad;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->adslot_id:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->adslot_id:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->vid:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->vid:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->cust_id:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->cust_id:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->camp_id:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->camp_id:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->crid:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->crid:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    const-string v2, "materials"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->materials:Ljava/util/List;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_tracking:Ljava/util/List;

    const-string v2, "ad_tracking"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->ad_tracking:Ljava/util/List;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->bid_price:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->bid_price:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->product_id:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->product_id:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->settlement_price_enc:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->settlement_price_enc:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->is_override:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->is_override:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_source_logo:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->ad_source_logo:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_source_channel:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->ad_source_channel:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_type:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->ad_type:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->options:Ljava/util/Map;

    const-string v2, "options"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/Map;)Ljava/util/Map;

    move-result-object v1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->options:Ljava/util/Map;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->expired_time:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->expired_time:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->forbiden_parse_landingpage:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->forbiden_parse_landingpage:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->display_orientation:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->display_orientation:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_setting:Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->ad_setting:Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->bid_type:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->bid_type:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->attribution_id:Ljava/lang/String;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->attribution_id:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_track_macro:Ljava/util/Map;

    const-string v2, "ad_track_macro"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/Map;)Ljava/util/Map;

    move-result-object v1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->ad_track_macro:Ljava/util/Map;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->wx_program_res:Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->wx_program_res:Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/Ad;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/rtb/Ad$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->adslot_id:Ljava/lang/String;

    if-eqz v1, :cond_0

    const-string v1, ", adslot_id="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->adslot_id:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->vid:Ljava/lang/String;

    if-eqz v1, :cond_1

    const-string v1, ", vid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->vid:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->cust_id:Ljava/lang/String;

    if-eqz v1, :cond_2

    const-string v1, ", cust_id="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->cust_id:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->camp_id:Ljava/lang/String;

    if-eqz v1, :cond_3

    const-string v1, ", camp_id="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->camp_id:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->crid:Ljava/lang/String;

    if-eqz v1, :cond_4

    const-string v1, ", crid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->crid:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_5

    const-string v1, ", materials="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_5
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_tracking:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_6

    const-string v1, ", ad_tracking="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_tracking:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_6
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->bid_price:Ljava/lang/Integer;

    if-eqz v1, :cond_7

    const-string v1, ", bid_price="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->bid_price:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_7
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->product_id:Ljava/lang/String;

    if-eqz v1, :cond_8

    const-string v1, ", product_id="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->product_id:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_8
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->settlement_price_enc:Ljava/lang/String;

    if-eqz v1, :cond_9

    const-string v1, ", settlement_price_enc="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->settlement_price_enc:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_9
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->is_override:Ljava/lang/Integer;

    if-eqz v1, :cond_a

    const-string v1, ", is_override="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->is_override:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_a
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_source_logo:Ljava/lang/String;

    if-eqz v1, :cond_b

    const-string v1, ", ad_source_logo="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_source_logo:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_b
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_source_channel:Ljava/lang/String;

    if-eqz v1, :cond_c

    const-string v1, ", ad_source_channel="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_source_channel:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_c
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_type:Ljava/lang/Integer;

    if-eqz v1, :cond_d

    const-string v1, ", ad_type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_type:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_d
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->options:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_e

    const-string v1, ", options="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->options:Ljava/util/Map;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_e
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->expired_time:Ljava/lang/Integer;

    if-eqz v1, :cond_f

    const-string v1, ", expired_time="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->expired_time:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_f
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->forbiden_parse_landingpage:Ljava/lang/Boolean;

    if-eqz v1, :cond_10

    const-string v1, ", forbiden_parse_landingpage="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->forbiden_parse_landingpage:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_10
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->display_orientation:Ljava/lang/Integer;

    if-eqz v1, :cond_11

    const-string v1, ", display_orientation="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->display_orientation:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_11
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_setting:Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    if-eqz v1, :cond_12

    const-string v1, ", ad_setting="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_setting:Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_12
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->bid_type:Ljava/lang/Integer;

    if-eqz v1, :cond_13

    const-string v1, ", bid_type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->bid_type:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_13
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->attribution_id:Ljava/lang/String;

    if-eqz v1, :cond_14

    const-string v1, ", attribution_id="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->attribution_id:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_14
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_track_macro:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_15

    const-string v1, ", ad_track_macro="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->ad_track_macro:Ljava/util/Map;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_15
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->wx_program_res:Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;

    if-eqz v1, :cond_16

    const-string v1, ", wx_program_res="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Ad;->wx_program_res:Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_16
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "Ad{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
