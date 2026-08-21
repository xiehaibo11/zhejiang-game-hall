.class public final Lcom/czhj/sdk/common/models/DeviceId;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/sdk/common/models/DeviceId$ProtoAdapter_DeviceId;,
        Lcom/czhj/sdk/common/models/DeviceId$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/czhj/sdk/common/models/DeviceId;",
        "Lcom/czhj/sdk/common/models/DeviceId$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/czhj/sdk/common/models/DeviceId;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/czhj/sdk/common/models/DeviceId;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_AAID:Ljava/lang/String; = ""

.field public static final DEFAULT_ANDROID_ID:Ljava/lang/String; = ""

.field public static final DEFAULT_ANDROID_ID_MD5:Ljava/lang/String; = ""

.field public static final DEFAULT_ANDROID_UUID:Ljava/lang/String; = ""

.field public static final DEFAULT_BRAND:Ljava/lang/String; = ""

.field public static final DEFAULT_GAID:Ljava/lang/String; = ""

.field public static final DEFAULT_GAID_MD5:Ljava/lang/String; = ""

.field public static final DEFAULT_IDFA:Ljava/lang/String; = ""

.field public static final DEFAULT_IDFA_MD5:Ljava/lang/String; = ""

.field public static final DEFAULT_IMEI:Ljava/lang/String; = ""

.field public static final DEFAULT_IMEI1:Ljava/lang/String; = ""

.field public static final DEFAULT_IMEI1_MD5:Ljava/lang/String; = ""

.field public static final DEFAULT_IMEI2:Ljava/lang/String; = ""

.field public static final DEFAULT_IMEI2_MD5:Ljava/lang/String; = ""

.field public static final DEFAULT_IMEI_MD5:Ljava/lang/String; = ""

.field public static final DEFAULT_IMSI:Ljava/lang/String; = ""

.field public static final DEFAULT_IS_CUSTOM_ANDROID_ID:Ljava/lang/Boolean;

.field public static final DEFAULT_IS_CUSTOM_IDFA:Ljava/lang/Boolean;

.field public static final DEFAULT_IS_CUSTOM_IMEI:Ljava/lang/Boolean;

.field public static final DEFAULT_IS_CUSTOM_OAID:Ljava/lang/Boolean;

.field public static final DEFAULT_MSA_UDID:Ljava/lang/String; = ""

.field public static final DEFAULT_OAID:Ljava/lang/String; = ""

.field public static final DEFAULT_OAID_MD5:Ljava/lang/String; = ""

.field public static final DEFAULT_UDID:Ljava/lang/String; = ""

.field public static final DEFAULT_UID:Ljava/lang/String; = ""

.field public static final DEFAULT_USER_ID:Ljava/lang/String; = ""

.field public static final DEFAULT_VAID:Ljava/lang/String; = ""

.field private static final serialVersionUID:J


# instance fields
.field public final aaid:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0xf
    .end annotation
.end field

.field public final android_id:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x5
    .end annotation
.end field

.field public final android_id_md5:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x13
    .end annotation
.end field

.field public final android_uuid:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x6
    .end annotation
.end field

.field public final brand:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0xa
    .end annotation
.end field

.field public final gaid:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x8
    .end annotation
.end field

.field public final gaid_md5:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x14
    .end annotation
.end field

.field public final idfa:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x1
    .end annotation
.end field

.field public final idfa_md5:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x11
    .end annotation
.end field

.field public final imei:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x4
    .end annotation
.end field

.field public final imei1:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0xb
    .end annotation
.end field

.field public final imei1_md5:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x16
    .end annotation
.end field

.field public final imei2:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0xc
    .end annotation
.end field

.field public final imei2_md5:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x17
    .end annotation
.end field

.field public final imei_md5:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x12
    .end annotation
.end field

.field public final imsi:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x7
    .end annotation
.end field

.field public final is_custom_android_id:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x1b
    .end annotation
.end field

.field public final is_custom_idfa:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x1a
    .end annotation
.end field

.field public final is_custom_imei:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x18
    .end annotation
.end field

.field public final is_custom_oaid:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x19
    .end annotation
.end field

.field public final msa_udid:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x10
    .end annotation
.end field

.field public final oaid:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0xd
    .end annotation
.end field

.field public final oaid_md5:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x15
    .end annotation
.end field

.field public final udid:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x2
    .end annotation
.end field

.field public final uid:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x9
    .end annotation
.end field

.field public final user_id:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x3
    .end annotation
.end field

.field public final vaid:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0xe
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/czhj/sdk/common/models/DeviceId$ProtoAdapter_DeviceId;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/DeviceId$ProtoAdapter_DeviceId;-><init>()V

    sput-object v0, Lcom/czhj/sdk/common/models/DeviceId;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/czhj/sdk/common/models/DeviceId;->CREATOR:Landroid/os/Parcelable$Creator;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v0, Lcom/czhj/sdk/common/models/DeviceId;->DEFAULT_IS_CUSTOM_IMEI:Ljava/lang/Boolean;

    sput-object v0, Lcom/czhj/sdk/common/models/DeviceId;->DEFAULT_IS_CUSTOM_OAID:Ljava/lang/Boolean;

    sput-object v0, Lcom/czhj/sdk/common/models/DeviceId;->DEFAULT_IS_CUSTOM_IDFA:Ljava/lang/Boolean;

    sput-object v0, Lcom/czhj/sdk/common/models/DeviceId;->DEFAULT_IS_CUSTOM_ANDROID_ID:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;)V
    .locals 29

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

    move-object/from16 v24, p24

    move-object/from16 v25, p25

    move-object/from16 v26, p26

    move-object/from16 v27, p27

    sget-object v28, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    invoke-direct/range {v0 .. v28}, Lcom/czhj/sdk/common/models/DeviceId;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V
    .locals 3

    move-object v0, p0

    sget-object v1, Lcom/czhj/sdk/common/models/DeviceId;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    move-object/from16 v2, p28

    invoke-direct {p0, v1, v2}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    move-object v1, p1

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->idfa:Ljava/lang/String;

    move-object v1, p2

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->udid:Ljava/lang/String;

    move-object v1, p3

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->user_id:Ljava/lang/String;

    move-object v1, p4

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->imei:Ljava/lang/String;

    move-object v1, p5

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->android_id:Ljava/lang/String;

    move-object v1, p6

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->android_uuid:Ljava/lang/String;

    move-object v1, p7

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->imsi:Ljava/lang/String;

    move-object v1, p8

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->gaid:Ljava/lang/String;

    move-object v1, p9

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->uid:Ljava/lang/String;

    move-object v1, p10

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->brand:Ljava/lang/String;

    move-object v1, p11

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->imei1:Ljava/lang/String;

    move-object v1, p12

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->imei2:Ljava/lang/String;

    move-object/from16 v1, p13

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->oaid:Ljava/lang/String;

    move-object/from16 v1, p14

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->vaid:Ljava/lang/String;

    move-object/from16 v1, p15

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->aaid:Ljava/lang/String;

    move-object/from16 v1, p16

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->msa_udid:Ljava/lang/String;

    move-object/from16 v1, p17

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->idfa_md5:Ljava/lang/String;

    move-object/from16 v1, p18

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->imei_md5:Ljava/lang/String;

    move-object/from16 v1, p19

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->android_id_md5:Ljava/lang/String;

    move-object/from16 v1, p20

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->gaid_md5:Ljava/lang/String;

    move-object/from16 v1, p21

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->oaid_md5:Ljava/lang/String;

    move-object/from16 v1, p22

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->imei1_md5:Ljava/lang/String;

    move-object/from16 v1, p23

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->imei2_md5:Ljava/lang/String;

    move-object/from16 v1, p24

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_imei:Ljava/lang/Boolean;

    move-object/from16 v1, p25

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_oaid:Ljava/lang/Boolean;

    move-object/from16 v1, p26

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_idfa:Ljava/lang/Boolean;

    move-object/from16 v1, p27

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_android_id:Ljava/lang/Boolean;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/czhj/sdk/common/models/DeviceId;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/czhj/sdk/common/models/DeviceId;

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/DeviceId;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/czhj/sdk/common/models/DeviceId;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->idfa:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->idfa:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->udid:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->udid:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->user_id:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->user_id:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->imei:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->android_id:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->android_id:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->android_uuid:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->android_uuid:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imsi:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->imsi:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->gaid:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->gaid:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->uid:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->uid:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->brand:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->brand:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei1:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->imei1:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei2:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->imei2:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->oaid:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->oaid:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->vaid:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->vaid:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->aaid:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->aaid:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->msa_udid:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->msa_udid:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->idfa_md5:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->idfa_md5:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei_md5:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->imei_md5:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->android_id_md5:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->android_id_md5:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->gaid_md5:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->gaid_md5:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->oaid_md5:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->oaid_md5:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei1_md5:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->imei1_md5:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei2_md5:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->imei2_md5:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_imei:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_imei:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_oaid:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_oaid:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_idfa:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_idfa:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_android_id:Ljava/lang/Boolean;

    iget-object p1, p1, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_android_id:Ljava/lang/Boolean;

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

    if-nez v0, :cond_1b

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/DeviceId;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->idfa:Ljava/lang/String;

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

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->udid:Ljava/lang/String;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->user_id:Ljava/lang/String;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei:Ljava/lang/String;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->android_id:Ljava/lang/String;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->android_uuid:Ljava/lang/String;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_5

    :cond_5
    move v1, v2

    :goto_5
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imsi:Ljava/lang/String;

    if-eqz v1, :cond_6

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_6

    :cond_6
    move v1, v2

    :goto_6
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->gaid:Ljava/lang/String;

    if-eqz v1, :cond_7

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_7

    :cond_7
    move v1, v2

    :goto_7
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->uid:Ljava/lang/String;

    if-eqz v1, :cond_8

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_8

    :cond_8
    move v1, v2

    :goto_8
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->brand:Ljava/lang/String;

    if-eqz v1, :cond_9

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_9

    :cond_9
    move v1, v2

    :goto_9
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei1:Ljava/lang/String;

    if-eqz v1, :cond_a

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_a

    :cond_a
    move v1, v2

    :goto_a
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei2:Ljava/lang/String;

    if-eqz v1, :cond_b

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_b

    :cond_b
    move v1, v2

    :goto_b
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->oaid:Ljava/lang/String;

    if-eqz v1, :cond_c

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_c

    :cond_c
    move v1, v2

    :goto_c
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->vaid:Ljava/lang/String;

    if-eqz v1, :cond_d

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_d

    :cond_d
    move v1, v2

    :goto_d
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->aaid:Ljava/lang/String;

    if-eqz v1, :cond_e

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_e

    :cond_e
    move v1, v2

    :goto_e
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->msa_udid:Ljava/lang/String;

    if-eqz v1, :cond_f

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_f

    :cond_f
    move v1, v2

    :goto_f
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->idfa_md5:Ljava/lang/String;

    if-eqz v1, :cond_10

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_10

    :cond_10
    move v1, v2

    :goto_10
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei_md5:Ljava/lang/String;

    if-eqz v1, :cond_11

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_11

    :cond_11
    move v1, v2

    :goto_11
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->android_id_md5:Ljava/lang/String;

    if-eqz v1, :cond_12

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_12

    :cond_12
    move v1, v2

    :goto_12
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->gaid_md5:Ljava/lang/String;

    if-eqz v1, :cond_13

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_13

    :cond_13
    move v1, v2

    :goto_13
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->oaid_md5:Ljava/lang/String;

    if-eqz v1, :cond_14

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_14

    :cond_14
    move v1, v2

    :goto_14
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei1_md5:Ljava/lang/String;

    if-eqz v1, :cond_15

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_15

    :cond_15
    move v1, v2

    :goto_15
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei2_md5:Ljava/lang/String;

    if-eqz v1, :cond_16

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_16

    :cond_16
    move v1, v2

    :goto_16
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_imei:Ljava/lang/Boolean;

    if-eqz v1, :cond_17

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_17

    :cond_17
    move v1, v2

    :goto_17
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_oaid:Ljava/lang/Boolean;

    if-eqz v1, :cond_18

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_18

    :cond_18
    move v1, v2

    :goto_18
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_idfa:Ljava/lang/Boolean;

    if-eqz v1, :cond_19

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_19

    :cond_19
    move v1, v2

    :goto_19
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_android_id:Ljava/lang/Boolean;

    if-eqz v1, :cond_1a

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v2

    :cond_1a
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_1b
    return v0
.end method

.method public newBuilder()Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 2

    new-instance v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/DeviceId$Builder;-><init>()V

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->idfa:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->idfa:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->udid:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->udid:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->user_id:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->user_id:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->android_id:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->android_id:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->android_uuid:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->android_uuid:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imsi:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imsi:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->gaid:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->gaid:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->uid:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->uid:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->brand:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->brand:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei1:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei1:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei2:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei2:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->oaid:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->oaid:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->vaid:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->vaid:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->aaid:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->aaid:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->msa_udid:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->msa_udid:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->idfa_md5:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->idfa_md5:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei_md5:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei_md5:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->android_id_md5:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->android_id_md5:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->gaid_md5:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->gaid_md5:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->oaid_md5:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->oaid_md5:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei1_md5:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei1_md5:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei2_md5:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei2_md5:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_imei:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->is_custom_imei:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_oaid:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->is_custom_oaid:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_idfa:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->is_custom_idfa:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_android_id:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->is_custom_android_id:Ljava/lang/Boolean;

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/DeviceId;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/DeviceId;->newBuilder()Lcom/czhj/sdk/common/models/DeviceId$Builder;

    move-result-object v0

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->idfa:Ljava/lang/String;

    if-eqz v1, :cond_0

    const-string v1, ", idfa="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->idfa:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->udid:Ljava/lang/String;

    if-eqz v1, :cond_1

    const-string v1, ", udid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->udid:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->user_id:Ljava/lang/String;

    if-eqz v1, :cond_2

    const-string v1, ", user_id="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->user_id:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei:Ljava/lang/String;

    if-eqz v1, :cond_3

    const-string v1, ", imei="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->android_id:Ljava/lang/String;

    if-eqz v1, :cond_4

    const-string v1, ", android_id="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->android_id:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->android_uuid:Ljava/lang/String;

    if-eqz v1, :cond_5

    const-string v1, ", android_uuid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->android_uuid:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_5
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imsi:Ljava/lang/String;

    if-eqz v1, :cond_6

    const-string v1, ", imsi="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imsi:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_6
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->gaid:Ljava/lang/String;

    if-eqz v1, :cond_7

    const-string v1, ", gaid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->gaid:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_7
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->uid:Ljava/lang/String;

    if-eqz v1, :cond_8

    const-string v1, ", uid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->uid:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_8
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->brand:Ljava/lang/String;

    if-eqz v1, :cond_9

    const-string v1, ", brand="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->brand:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_9
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei1:Ljava/lang/String;

    if-eqz v1, :cond_a

    const-string v1, ", imei1="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei1:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_a
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei2:Ljava/lang/String;

    if-eqz v1, :cond_b

    const-string v1, ", imei2="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei2:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_b
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->oaid:Ljava/lang/String;

    if-eqz v1, :cond_c

    const-string v1, ", oaid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->oaid:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_c
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->vaid:Ljava/lang/String;

    if-eqz v1, :cond_d

    const-string v1, ", vaid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->vaid:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_d
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->aaid:Ljava/lang/String;

    if-eqz v1, :cond_e

    const-string v1, ", aaid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->aaid:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_e
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->msa_udid:Ljava/lang/String;

    if-eqz v1, :cond_f

    const-string v1, ", msa_udid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->msa_udid:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_f
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->idfa_md5:Ljava/lang/String;

    if-eqz v1, :cond_10

    const-string v1, ", idfa_md5="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->idfa_md5:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_10
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei_md5:Ljava/lang/String;

    if-eqz v1, :cond_11

    const-string v1, ", imei_md5="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei_md5:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_11
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->android_id_md5:Ljava/lang/String;

    if-eqz v1, :cond_12

    const-string v1, ", android_id_md5="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->android_id_md5:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_12
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->gaid_md5:Ljava/lang/String;

    if-eqz v1, :cond_13

    const-string v1, ", gaid_md5="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->gaid_md5:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_13
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->oaid_md5:Ljava/lang/String;

    if-eqz v1, :cond_14

    const-string v1, ", oaid_md5="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->oaid_md5:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_14
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei1_md5:Ljava/lang/String;

    if-eqz v1, :cond_15

    const-string v1, ", imei1_md5="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei1_md5:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_15
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei2_md5:Ljava/lang/String;

    if-eqz v1, :cond_16

    const-string v1, ", imei2_md5="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->imei2_md5:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_16
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_imei:Ljava/lang/Boolean;

    if-eqz v1, :cond_17

    const-string v1, ", is_custom_imei="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_imei:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_17
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_oaid:Ljava/lang/Boolean;

    if-eqz v1, :cond_18

    const-string v1, ", is_custom_oaid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_oaid:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_18
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_idfa:Ljava/lang/Boolean;

    if-eqz v1, :cond_19

    const-string v1, ", is_custom_idfa="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_idfa:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_19
    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_android_id:Ljava/lang/Boolean;

    if-eqz v1, :cond_1a

    const-string v1, ", is_custom_android_id="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/DeviceId;->is_custom_android_id:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1a
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "DeviceId{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
