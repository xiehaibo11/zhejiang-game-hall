.class public final Lcom/czhj/sdk/common/models/Device;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/sdk/common/models/Device$ProtoAdapter_Device;,
        Lcom/czhj/sdk/common/models/Device$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/czhj/sdk/common/models/Device;",
        "Lcom/czhj/sdk/common/models/Device$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/czhj/sdk/common/models/Device;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/czhj/sdk/common/models/Device;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_ANDROID_API_LEVEL:Ljava/lang/Integer;

.field public static final DEFAULT_BATTERY_LEVEL:Ljava/lang/Float;

.field public static final DEFAULT_BATTERY_SAVE_ENABLED:Ljava/lang/Boolean;

.field public static final DEFAULT_BATTERY_STATE:Ljava/lang/Integer;

.field public static final DEFAULT_BOOT_MARK:Ljava/lang/String; = ""

.field public static final DEFAULT_DEVICE_NAME:Ljava/lang/String; = ""

.field public static final DEFAULT_DEVICE_TYPE:Ljava/lang/Integer;

.field public static final DEFAULT_DISK_SIZE:Ljava/lang/Long;

.field public static final DEFAULT_DPI:Ljava/lang/Integer;

.field public static final DEFAULT_FREE_DISK_SIZE:Ljava/lang/Long;

.field public static final DEFAULT_INTERNAL_NAME:Ljava/lang/String; = ""

.field public static final DEFAULT_IS_ROOT:Ljava/lang/Boolean;

.field public static final DEFAULT_MEM_SIZE:Ljava/lang/Long;

.field public static final DEFAULT_MODEL:Ljava/lang/String; = ""

.field public static final DEFAULT_OS_TYPE:Ljava/lang/Integer;

.field public static final DEFAULT_SD_FREE_DISK_SIZE:Ljava/lang/Long;

.field public static final DEFAULT_SD_TOTAL_DISK_SIZE:Ljava/lang/Long;

.field public static final DEFAULT_START_TIMESTAMP:Ljava/lang/Long;

.field public static final DEFAULT_SYSTEM_UPDATE_TIME:Ljava/lang/String; = ""

.field public static final DEFAULT_TOTAL_DISK_SIZE:Ljava/lang/Long;

.field public static final DEFAULT_UPDATE_MARK:Ljava/lang/String; = ""

.field public static final DEFAULT_VENDOR:Ljava/lang/String; = ""

.field private static final serialVersionUID:J


# instance fields
.field public final android_api_level:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x12
    .end annotation
.end field

.field public final battery_level:Ljava/lang/Float;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#FLOAT"
        tag = 0xe
    .end annotation
.end field

.field public final battery_save_enabled:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0xf
    .end annotation
.end field

.field public final battery_state:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0xd
    .end annotation
.end field

.field public final boot_mark:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x1b
    .end annotation
.end field

.field public final device_name:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x10
    .end annotation
.end field

.field public final device_type:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x1
    .end annotation
.end field

.field public final did:Lcom/czhj/sdk/common/models/DeviceId;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "DeviceId#ADAPTER"
        tag = 0x6
    .end annotation
.end field

.field public final disk_size:Ljava/lang/Long;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT64"
        tag = 0xb
    .end annotation
.end field

.field public final dpi:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x9
    .end annotation
.end field

.field public final free_disk_size:Ljava/lang/Long;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT64"
        tag = 0x15
    .end annotation
.end field

.field public final geo:Lcom/czhj/sdk/common/models/Geo;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "Geo#ADAPTER"
        tag = 0x8
    .end annotation
.end field

.field public final internal_name:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x1a
    .end annotation
.end field

.field public final is_root:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0xa
    .end annotation
.end field

.field public final mem_size:Ljava/lang/Long;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT64"
        tag = 0x13
    .end annotation
.end field

.field public final model:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x5
    .end annotation
.end field

.field public final os_type:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x2
    .end annotation
.end field

.field public final os_version:Lcom/czhj/sdk/common/models/Version;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "Version#ADAPTER"
        tag = 0x3
    .end annotation
.end field

.field public final resolution:Lcom/czhj/sdk/common/models/Size;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "Size#ADAPTER"
        tag = 0x18
    .end annotation
.end field

.field public final screen_size:Lcom/czhj/sdk/common/models/Size;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "Size#ADAPTER"
        tag = 0x7
    .end annotation
.end field

.field public final sd_free_disk_size:Ljava/lang/Long;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT64"
        tag = 0x17
    .end annotation
.end field

.field public final sd_total_disk_size:Ljava/lang/Long;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT64"
        tag = 0x16
    .end annotation
.end field

.field public final start_timestamp:Ljava/lang/Long;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT64"
        tag = 0x11
    .end annotation
.end field

.field public final system_update_time:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x19
    .end annotation
.end field

.field public final total_disk_size:Ljava/lang/Long;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT64"
        tag = 0x14
    .end annotation
.end field

.field public final update_mark:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x1c
    .end annotation
.end field

.field public final vendor:Ljava/lang/String;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        tag = 0x4
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 4

    new-instance v0, Lcom/czhj/sdk/common/models/Device$ProtoAdapter_Device;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/Device$ProtoAdapter_Device;-><init>()V

    sput-object v0, Lcom/czhj/sdk/common/models/Device;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/czhj/sdk/common/models/Device;->CREATOR:Landroid/os/Parcelable$Creator;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    sput-object v0, Lcom/czhj/sdk/common/models/Device;->DEFAULT_DEVICE_TYPE:Ljava/lang/Integer;

    sput-object v0, Lcom/czhj/sdk/common/models/Device;->DEFAULT_OS_TYPE:Ljava/lang/Integer;

    sput-object v0, Lcom/czhj/sdk/common/models/Device;->DEFAULT_DPI:Ljava/lang/Integer;

    sput-object v1, Lcom/czhj/sdk/common/models/Device;->DEFAULT_IS_ROOT:Ljava/lang/Boolean;

    const-wide/16 v2, 0x0

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    sput-object v2, Lcom/czhj/sdk/common/models/Device;->DEFAULT_DISK_SIZE:Ljava/lang/Long;

    sput-object v0, Lcom/czhj/sdk/common/models/Device;->DEFAULT_BATTERY_STATE:Ljava/lang/Integer;

    const/4 v3, 0x0

    invoke-static {v3}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v3

    sput-object v3, Lcom/czhj/sdk/common/models/Device;->DEFAULT_BATTERY_LEVEL:Ljava/lang/Float;

    sput-object v1, Lcom/czhj/sdk/common/models/Device;->DEFAULT_BATTERY_SAVE_ENABLED:Ljava/lang/Boolean;

    sput-object v2, Lcom/czhj/sdk/common/models/Device;->DEFAULT_START_TIMESTAMP:Ljava/lang/Long;

    sput-object v0, Lcom/czhj/sdk/common/models/Device;->DEFAULT_ANDROID_API_LEVEL:Ljava/lang/Integer;

    sput-object v2, Lcom/czhj/sdk/common/models/Device;->DEFAULT_MEM_SIZE:Ljava/lang/Long;

    sput-object v2, Lcom/czhj/sdk/common/models/Device;->DEFAULT_TOTAL_DISK_SIZE:Ljava/lang/Long;

    sput-object v2, Lcom/czhj/sdk/common/models/Device;->DEFAULT_FREE_DISK_SIZE:Ljava/lang/Long;

    sput-object v2, Lcom/czhj/sdk/common/models/Device;->DEFAULT_SD_TOTAL_DISK_SIZE:Ljava/lang/Long;

    sput-object v2, Lcom/czhj/sdk/common/models/Device;->DEFAULT_SD_FREE_DISK_SIZE:Ljava/lang/Long;

    return-void
.end method

.method public constructor <init>(Ljava/lang/Integer;Ljava/lang/Integer;Lcom/czhj/sdk/common/models/Version;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/sdk/common/models/DeviceId;Lcom/czhj/sdk/common/models/Size;Lcom/czhj/sdk/common/models/Geo;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/Float;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Lcom/czhj/sdk/common/models/Size;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
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

    invoke-direct/range {v0 .. v28}, Lcom/czhj/sdk/common/models/Device;-><init>(Ljava/lang/Integer;Ljava/lang/Integer;Lcom/czhj/sdk/common/models/Version;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/sdk/common/models/DeviceId;Lcom/czhj/sdk/common/models/Size;Lcom/czhj/sdk/common/models/Geo;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/Float;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Lcom/czhj/sdk/common/models/Size;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/Integer;Ljava/lang/Integer;Lcom/czhj/sdk/common/models/Version;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/sdk/common/models/DeviceId;Lcom/czhj/sdk/common/models/Size;Lcom/czhj/sdk/common/models/Geo;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/Float;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Lcom/czhj/sdk/common/models/Size;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/wire/okio/ByteString;)V
    .locals 3

    move-object v0, p0

    sget-object v1, Lcom/czhj/sdk/common/models/Device;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    move-object/from16 v2, p28

    invoke-direct {p0, v1, v2}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    move-object v1, p1

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->device_type:Ljava/lang/Integer;

    move-object v1, p2

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->os_type:Ljava/lang/Integer;

    move-object v1, p3

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->os_version:Lcom/czhj/sdk/common/models/Version;

    move-object v1, p4

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->vendor:Ljava/lang/String;

    move-object v1, p5

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->model:Ljava/lang/String;

    move-object v1, p6

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->did:Lcom/czhj/sdk/common/models/DeviceId;

    move-object v1, p7

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->screen_size:Lcom/czhj/sdk/common/models/Size;

    move-object v1, p8

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->geo:Lcom/czhj/sdk/common/models/Geo;

    move-object v1, p9

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->dpi:Ljava/lang/Integer;

    move-object v1, p10

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->is_root:Ljava/lang/Boolean;

    move-object v1, p11

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->disk_size:Ljava/lang/Long;

    move-object v1, p12

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->battery_state:Ljava/lang/Integer;

    move-object/from16 v1, p13

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->battery_level:Ljava/lang/Float;

    move-object/from16 v1, p14

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->battery_save_enabled:Ljava/lang/Boolean;

    move-object/from16 v1, p15

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->device_name:Ljava/lang/String;

    move-object/from16 v1, p16

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->start_timestamp:Ljava/lang/Long;

    move-object/from16 v1, p17

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->android_api_level:Ljava/lang/Integer;

    move-object/from16 v1, p18

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->mem_size:Ljava/lang/Long;

    move-object/from16 v1, p19

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->total_disk_size:Ljava/lang/Long;

    move-object/from16 v1, p20

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->free_disk_size:Ljava/lang/Long;

    move-object/from16 v1, p21

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->sd_total_disk_size:Ljava/lang/Long;

    move-object/from16 v1, p22

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->sd_free_disk_size:Ljava/lang/Long;

    move-object/from16 v1, p23

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->resolution:Lcom/czhj/sdk/common/models/Size;

    move-object/from16 v1, p24

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->system_update_time:Ljava/lang/String;

    move-object/from16 v1, p25

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->internal_name:Ljava/lang/String;

    move-object/from16 v1, p26

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->boot_mark:Ljava/lang/String;

    move-object/from16 v1, p27

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device;->update_mark:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/czhj/sdk/common/models/Device;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/czhj/sdk/common/models/Device;

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/Device;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/czhj/sdk/common/models/Device;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->device_type:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->device_type:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->os_type:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->os_type:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->os_version:Lcom/czhj/sdk/common/models/Version;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->os_version:Lcom/czhj/sdk/common/models/Version;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->vendor:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->vendor:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->model:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->model:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->did:Lcom/czhj/sdk/common/models/DeviceId;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->did:Lcom/czhj/sdk/common/models/DeviceId;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->screen_size:Lcom/czhj/sdk/common/models/Size;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->screen_size:Lcom/czhj/sdk/common/models/Size;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->geo:Lcom/czhj/sdk/common/models/Geo;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->geo:Lcom/czhj/sdk/common/models/Geo;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->dpi:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->dpi:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->is_root:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->is_root:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->disk_size:Ljava/lang/Long;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->disk_size:Ljava/lang/Long;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->battery_state:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->battery_state:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->battery_level:Ljava/lang/Float;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->battery_level:Ljava/lang/Float;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->battery_save_enabled:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->battery_save_enabled:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->device_name:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->device_name:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->start_timestamp:Ljava/lang/Long;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->start_timestamp:Ljava/lang/Long;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->android_api_level:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->android_api_level:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->mem_size:Ljava/lang/Long;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->mem_size:Ljava/lang/Long;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->total_disk_size:Ljava/lang/Long;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->total_disk_size:Ljava/lang/Long;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->free_disk_size:Ljava/lang/Long;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->free_disk_size:Ljava/lang/Long;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->sd_total_disk_size:Ljava/lang/Long;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->sd_total_disk_size:Ljava/lang/Long;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->sd_free_disk_size:Ljava/lang/Long;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->sd_free_disk_size:Ljava/lang/Long;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->resolution:Lcom/czhj/sdk/common/models/Size;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->resolution:Lcom/czhj/sdk/common/models/Size;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->system_update_time:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->system_update_time:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->internal_name:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->internal_name:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->boot_mark:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/models/Device;->boot_mark:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->update_mark:Ljava/lang/String;

    iget-object p1, p1, Lcom/czhj/sdk/common/models/Device;->update_mark:Ljava/lang/String;

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

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/Device;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->device_type:Ljava/lang/Integer;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->os_type:Ljava/lang/Integer;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->os_version:Lcom/czhj/sdk/common/models/Version;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Version;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->vendor:Ljava/lang/String;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->model:Ljava/lang/String;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->did:Lcom/czhj/sdk/common/models/DeviceId;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/DeviceId;->hashCode()I

    move-result v1

    goto :goto_5

    :cond_5
    move v1, v2

    :goto_5
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->screen_size:Lcom/czhj/sdk/common/models/Size;

    if-eqz v1, :cond_6

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Size;->hashCode()I

    move-result v1

    goto :goto_6

    :cond_6
    move v1, v2

    :goto_6
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->geo:Lcom/czhj/sdk/common/models/Geo;

    if-eqz v1, :cond_7

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Geo;->hashCode()I

    move-result v1

    goto :goto_7

    :cond_7
    move v1, v2

    :goto_7
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->dpi:Ljava/lang/Integer;

    if-eqz v1, :cond_8

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_8

    :cond_8
    move v1, v2

    :goto_8
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->is_root:Ljava/lang/Boolean;

    if-eqz v1, :cond_9

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_9

    :cond_9
    move v1, v2

    :goto_9
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->disk_size:Ljava/lang/Long;

    if-eqz v1, :cond_a

    invoke-virtual {v1}, Ljava/lang/Long;->hashCode()I

    move-result v1

    goto :goto_a

    :cond_a
    move v1, v2

    :goto_a
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->battery_state:Ljava/lang/Integer;

    if-eqz v1, :cond_b

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_b

    :cond_b
    move v1, v2

    :goto_b
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->battery_level:Ljava/lang/Float;

    if-eqz v1, :cond_c

    invoke-virtual {v1}, Ljava/lang/Float;->hashCode()I

    move-result v1

    goto :goto_c

    :cond_c
    move v1, v2

    :goto_c
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->battery_save_enabled:Ljava/lang/Boolean;

    if-eqz v1, :cond_d

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_d

    :cond_d
    move v1, v2

    :goto_d
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->device_name:Ljava/lang/String;

    if-eqz v1, :cond_e

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_e

    :cond_e
    move v1, v2

    :goto_e
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->start_timestamp:Ljava/lang/Long;

    if-eqz v1, :cond_f

    invoke-virtual {v1}, Ljava/lang/Long;->hashCode()I

    move-result v1

    goto :goto_f

    :cond_f
    move v1, v2

    :goto_f
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->android_api_level:Ljava/lang/Integer;

    if-eqz v1, :cond_10

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_10

    :cond_10
    move v1, v2

    :goto_10
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->mem_size:Ljava/lang/Long;

    if-eqz v1, :cond_11

    invoke-virtual {v1}, Ljava/lang/Long;->hashCode()I

    move-result v1

    goto :goto_11

    :cond_11
    move v1, v2

    :goto_11
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->total_disk_size:Ljava/lang/Long;

    if-eqz v1, :cond_12

    invoke-virtual {v1}, Ljava/lang/Long;->hashCode()I

    move-result v1

    goto :goto_12

    :cond_12
    move v1, v2

    :goto_12
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->free_disk_size:Ljava/lang/Long;

    if-eqz v1, :cond_13

    invoke-virtual {v1}, Ljava/lang/Long;->hashCode()I

    move-result v1

    goto :goto_13

    :cond_13
    move v1, v2

    :goto_13
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->sd_total_disk_size:Ljava/lang/Long;

    if-eqz v1, :cond_14

    invoke-virtual {v1}, Ljava/lang/Long;->hashCode()I

    move-result v1

    goto :goto_14

    :cond_14
    move v1, v2

    :goto_14
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->sd_free_disk_size:Ljava/lang/Long;

    if-eqz v1, :cond_15

    invoke-virtual {v1}, Ljava/lang/Long;->hashCode()I

    move-result v1

    goto :goto_15

    :cond_15
    move v1, v2

    :goto_15
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->resolution:Lcom/czhj/sdk/common/models/Size;

    if-eqz v1, :cond_16

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Size;->hashCode()I

    move-result v1

    goto :goto_16

    :cond_16
    move v1, v2

    :goto_16
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->system_update_time:Ljava/lang/String;

    if-eqz v1, :cond_17

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_17

    :cond_17
    move v1, v2

    :goto_17
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->internal_name:Ljava/lang/String;

    if-eqz v1, :cond_18

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_18

    :cond_18
    move v1, v2

    :goto_18
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->boot_mark:Ljava/lang/String;

    if-eqz v1, :cond_19

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    goto :goto_19

    :cond_19
    move v1, v2

    :goto_19
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->update_mark:Ljava/lang/String;

    if-eqz v1, :cond_1a

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v2

    :cond_1a
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_1b
    return v0
.end method

.method public newBuilder()Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 2

    new-instance v0, Lcom/czhj/sdk/common/models/Device$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/Device$Builder;-><init>()V

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->device_type:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->device_type:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->os_type:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->os_type:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->os_version:Lcom/czhj/sdk/common/models/Version;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->os_version:Lcom/czhj/sdk/common/models/Version;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->vendor:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->vendor:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->model:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->model:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->did:Lcom/czhj/sdk/common/models/DeviceId;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->did:Lcom/czhj/sdk/common/models/DeviceId;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->screen_size:Lcom/czhj/sdk/common/models/Size;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->screen_size:Lcom/czhj/sdk/common/models/Size;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->geo:Lcom/czhj/sdk/common/models/Geo;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->geo:Lcom/czhj/sdk/common/models/Geo;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->dpi:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->dpi:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->is_root:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->is_root:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->disk_size:Ljava/lang/Long;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->disk_size:Ljava/lang/Long;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->battery_state:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->battery_state:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->battery_level:Ljava/lang/Float;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->battery_level:Ljava/lang/Float;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->battery_save_enabled:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->battery_save_enabled:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->device_name:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->device_name:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->start_timestamp:Ljava/lang/Long;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->start_timestamp:Ljava/lang/Long;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->android_api_level:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->android_api_level:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->mem_size:Ljava/lang/Long;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->mem_size:Ljava/lang/Long;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->total_disk_size:Ljava/lang/Long;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->total_disk_size:Ljava/lang/Long;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->free_disk_size:Ljava/lang/Long;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->free_disk_size:Ljava/lang/Long;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->sd_total_disk_size:Ljava/lang/Long;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->sd_total_disk_size:Ljava/lang/Long;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->sd_free_disk_size:Ljava/lang/Long;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->sd_free_disk_size:Ljava/lang/Long;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->resolution:Lcom/czhj/sdk/common/models/Size;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->resolution:Lcom/czhj/sdk/common/models/Size;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->system_update_time:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->system_update_time:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->internal_name:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->internal_name:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->boot_mark:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->boot_mark:Ljava/lang/String;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->update_mark:Ljava/lang/String;

    iput-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->update_mark:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/Device;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/models/Device$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/Device;->newBuilder()Lcom/czhj/sdk/common/models/Device$Builder;

    move-result-object v0

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->device_type:Ljava/lang/Integer;

    if-eqz v1, :cond_0

    const-string v1, ", device_type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->device_type:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->os_type:Ljava/lang/Integer;

    if-eqz v1, :cond_1

    const-string v1, ", os_type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->os_type:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->os_version:Lcom/czhj/sdk/common/models/Version;

    if-eqz v1, :cond_2

    const-string v1, ", os_version="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->os_version:Lcom/czhj/sdk/common/models/Version;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->vendor:Ljava/lang/String;

    if-eqz v1, :cond_3

    const-string v1, ", vendor="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->vendor:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->model:Ljava/lang/String;

    if-eqz v1, :cond_4

    const-string v1, ", model="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->model:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->did:Lcom/czhj/sdk/common/models/DeviceId;

    if-eqz v1, :cond_5

    const-string v1, ", did="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->did:Lcom/czhj/sdk/common/models/DeviceId;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_5
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->screen_size:Lcom/czhj/sdk/common/models/Size;

    if-eqz v1, :cond_6

    const-string v1, ", screen_size="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->screen_size:Lcom/czhj/sdk/common/models/Size;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_6
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->geo:Lcom/czhj/sdk/common/models/Geo;

    if-eqz v1, :cond_7

    const-string v1, ", geo="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->geo:Lcom/czhj/sdk/common/models/Geo;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_7
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->dpi:Ljava/lang/Integer;

    if-eqz v1, :cond_8

    const-string v1, ", dpi="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->dpi:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_8
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->is_root:Ljava/lang/Boolean;

    if-eqz v1, :cond_9

    const-string v1, ", is_root="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->is_root:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_9
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->disk_size:Ljava/lang/Long;

    if-eqz v1, :cond_a

    const-string v1, ", disk_size="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->disk_size:Ljava/lang/Long;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_a
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->battery_state:Ljava/lang/Integer;

    if-eqz v1, :cond_b

    const-string v1, ", battery_state="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->battery_state:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_b
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->battery_level:Ljava/lang/Float;

    if-eqz v1, :cond_c

    const-string v1, ", battery_level="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->battery_level:Ljava/lang/Float;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_c
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->battery_save_enabled:Ljava/lang/Boolean;

    if-eqz v1, :cond_d

    const-string v1, ", battery_save_enabled="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->battery_save_enabled:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_d
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->device_name:Ljava/lang/String;

    if-eqz v1, :cond_e

    const-string v1, ", device_name="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->device_name:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_e
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->start_timestamp:Ljava/lang/Long;

    if-eqz v1, :cond_f

    const-string v1, ", start_timestamp="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->start_timestamp:Ljava/lang/Long;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_f
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->android_api_level:Ljava/lang/Integer;

    if-eqz v1, :cond_10

    const-string v1, ", android_api_level="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->android_api_level:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_10
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->mem_size:Ljava/lang/Long;

    if-eqz v1, :cond_11

    const-string v1, ", mem_size="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->mem_size:Ljava/lang/Long;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_11
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->total_disk_size:Ljava/lang/Long;

    if-eqz v1, :cond_12

    const-string v1, ", total_disk_size="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->total_disk_size:Ljava/lang/Long;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_12
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->free_disk_size:Ljava/lang/Long;

    if-eqz v1, :cond_13

    const-string v1, ", free_disk_size="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->free_disk_size:Ljava/lang/Long;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_13
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->sd_total_disk_size:Ljava/lang/Long;

    if-eqz v1, :cond_14

    const-string v1, ", sd_total_disk_size="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->sd_total_disk_size:Ljava/lang/Long;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_14
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->sd_free_disk_size:Ljava/lang/Long;

    if-eqz v1, :cond_15

    const-string v1, ", sd_free_disk_size="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->sd_free_disk_size:Ljava/lang/Long;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_15
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->resolution:Lcom/czhj/sdk/common/models/Size;

    if-eqz v1, :cond_16

    const-string v1, ", resolution="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->resolution:Lcom/czhj/sdk/common/models/Size;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_16
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->system_update_time:Ljava/lang/String;

    if-eqz v1, :cond_17

    const-string v1, ", system_update_time="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->system_update_time:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_17
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->internal_name:Ljava/lang/String;

    if-eqz v1, :cond_18

    const-string v1, ", internal_name="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->internal_name:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_18
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->boot_mark:Ljava/lang/String;

    if-eqz v1, :cond_19

    const-string v1, ", boot_mark="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->boot_mark:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_19
    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->update_mark:Ljava/lang/String;

    if-eqz v1, :cond_1a

    const-string v1, ", update_mark="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/Device;->update_mark:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1a
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "Device{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
