.class public final Lcom/czhj/sdk/common/models/Device$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/models/Device;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/sdk/common/models/Device;",
        "Lcom/czhj/sdk/common/models/Device$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public android_api_level:Ljava/lang/Integer;

.field public battery_level:Ljava/lang/Float;

.field public battery_save_enabled:Ljava/lang/Boolean;

.field public battery_state:Ljava/lang/Integer;

.field public boot_mark:Ljava/lang/String;

.field public device_name:Ljava/lang/String;

.field public device_type:Ljava/lang/Integer;

.field public did:Lcom/czhj/sdk/common/models/DeviceId;

.field public disk_size:Ljava/lang/Long;

.field public dpi:Ljava/lang/Integer;

.field public free_disk_size:Ljava/lang/Long;

.field public geo:Lcom/czhj/sdk/common/models/Geo;

.field public internal_name:Ljava/lang/String;

.field public is_root:Ljava/lang/Boolean;

.field public mem_size:Ljava/lang/Long;

.field public model:Ljava/lang/String;

.field public os_type:Ljava/lang/Integer;

.field public os_version:Lcom/czhj/sdk/common/models/Version;

.field public resolution:Lcom/czhj/sdk/common/models/Size;

.field public screen_size:Lcom/czhj/sdk/common/models/Size;

.field public sd_free_disk_size:Ljava/lang/Long;

.field public sd_total_disk_size:Ljava/lang/Long;

.field public start_timestamp:Ljava/lang/Long;

.field public system_update_time:Ljava/lang/String;

.field public total_disk_size:Ljava/lang/Long;

.field public update_mark:Ljava/lang/String;

.field public vendor:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/czhj/sdk/common/models/Device;->DEFAULT_DEVICE_TYPE:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Device$Builder;->device_type:Ljava/lang/Integer;

    sget-object v0, Lcom/czhj/sdk/common/models/Device;->DEFAULT_OS_TYPE:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Device$Builder;->os_type:Ljava/lang/Integer;

    const-string v0, ""

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Device$Builder;->vendor:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Device$Builder;->model:Ljava/lang/String;

    sget-object v1, Lcom/czhj/sdk/common/models/Device;->DEFAULT_DPI:Ljava/lang/Integer;

    iput-object v1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->dpi:Ljava/lang/Integer;

    sget-object v1, Lcom/czhj/sdk/common/models/Device;->DEFAULT_IS_ROOT:Ljava/lang/Boolean;

    iput-object v1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->is_root:Ljava/lang/Boolean;

    sget-object v1, Lcom/czhj/sdk/common/models/Device;->DEFAULT_DISK_SIZE:Ljava/lang/Long;

    iput-object v1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->disk_size:Ljava/lang/Long;

    sget-object v1, Lcom/czhj/sdk/common/models/Device;->DEFAULT_BATTERY_STATE:Ljava/lang/Integer;

    iput-object v1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->battery_state:Ljava/lang/Integer;

    sget-object v1, Lcom/czhj/sdk/common/models/Device;->DEFAULT_BATTERY_LEVEL:Ljava/lang/Float;

    iput-object v1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->battery_level:Ljava/lang/Float;

    sget-object v1, Lcom/czhj/sdk/common/models/Device;->DEFAULT_BATTERY_SAVE_ENABLED:Ljava/lang/Boolean;

    iput-object v1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->battery_save_enabled:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Device$Builder;->device_name:Ljava/lang/String;

    sget-object v1, Lcom/czhj/sdk/common/models/Device;->DEFAULT_START_TIMESTAMP:Ljava/lang/Long;

    iput-object v1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->start_timestamp:Ljava/lang/Long;

    sget-object v1, Lcom/czhj/sdk/common/models/Device;->DEFAULT_ANDROID_API_LEVEL:Ljava/lang/Integer;

    iput-object v1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->android_api_level:Ljava/lang/Integer;

    sget-object v1, Lcom/czhj/sdk/common/models/Device;->DEFAULT_MEM_SIZE:Ljava/lang/Long;

    iput-object v1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->mem_size:Ljava/lang/Long;

    sget-object v1, Lcom/czhj/sdk/common/models/Device;->DEFAULT_TOTAL_DISK_SIZE:Ljava/lang/Long;

    iput-object v1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->total_disk_size:Ljava/lang/Long;

    sget-object v1, Lcom/czhj/sdk/common/models/Device;->DEFAULT_FREE_DISK_SIZE:Ljava/lang/Long;

    iput-object v1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->free_disk_size:Ljava/lang/Long;

    sget-object v1, Lcom/czhj/sdk/common/models/Device;->DEFAULT_SD_TOTAL_DISK_SIZE:Ljava/lang/Long;

    iput-object v1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->sd_total_disk_size:Ljava/lang/Long;

    sget-object v1, Lcom/czhj/sdk/common/models/Device;->DEFAULT_SD_FREE_DISK_SIZE:Ljava/lang/Long;

    iput-object v1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->sd_free_disk_size:Ljava/lang/Long;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Device$Builder;->system_update_time:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Device$Builder;->internal_name:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Device$Builder;->boot_mark:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/Device$Builder;->update_mark:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public android_api_level(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->android_api_level:Ljava/lang/Integer;

    return-object p0
.end method

.method public battery_level(Ljava/lang/Float;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->battery_level:Ljava/lang/Float;

    return-object p0
.end method

.method public battery_save_enabled(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->battery_save_enabled:Ljava/lang/Boolean;

    return-object p0
.end method

.method public battery_state(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->battery_state:Ljava/lang/Integer;

    return-object p0
.end method

.method public boot_mark(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->boot_mark:Ljava/lang/String;

    return-object p0
.end method

.method public build()Lcom/czhj/sdk/common/models/Device;
    .locals 32

    move-object/from16 v0, p0

    new-instance v30, Lcom/czhj/sdk/common/models/Device;

    move-object/from16 v1, v30

    iget-object v2, v0, Lcom/czhj/sdk/common/models/Device$Builder;->device_type:Ljava/lang/Integer;

    iget-object v3, v0, Lcom/czhj/sdk/common/models/Device$Builder;->os_type:Ljava/lang/Integer;

    iget-object v4, v0, Lcom/czhj/sdk/common/models/Device$Builder;->os_version:Lcom/czhj/sdk/common/models/Version;

    iget-object v5, v0, Lcom/czhj/sdk/common/models/Device$Builder;->vendor:Ljava/lang/String;

    iget-object v6, v0, Lcom/czhj/sdk/common/models/Device$Builder;->model:Ljava/lang/String;

    iget-object v7, v0, Lcom/czhj/sdk/common/models/Device$Builder;->did:Lcom/czhj/sdk/common/models/DeviceId;

    iget-object v8, v0, Lcom/czhj/sdk/common/models/Device$Builder;->screen_size:Lcom/czhj/sdk/common/models/Size;

    iget-object v9, v0, Lcom/czhj/sdk/common/models/Device$Builder;->geo:Lcom/czhj/sdk/common/models/Geo;

    iget-object v10, v0, Lcom/czhj/sdk/common/models/Device$Builder;->dpi:Ljava/lang/Integer;

    iget-object v11, v0, Lcom/czhj/sdk/common/models/Device$Builder;->is_root:Ljava/lang/Boolean;

    iget-object v12, v0, Lcom/czhj/sdk/common/models/Device$Builder;->disk_size:Ljava/lang/Long;

    iget-object v13, v0, Lcom/czhj/sdk/common/models/Device$Builder;->battery_state:Ljava/lang/Integer;

    iget-object v14, v0, Lcom/czhj/sdk/common/models/Device$Builder;->battery_level:Ljava/lang/Float;

    iget-object v15, v0, Lcom/czhj/sdk/common/models/Device$Builder;->battery_save_enabled:Ljava/lang/Boolean;

    move-object/from16 v31, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->device_name:Ljava/lang/String;

    move-object/from16 v16, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->start_timestamp:Ljava/lang/Long;

    move-object/from16 v17, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->android_api_level:Ljava/lang/Integer;

    move-object/from16 v18, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->mem_size:Ljava/lang/Long;

    move-object/from16 v19, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->total_disk_size:Ljava/lang/Long;

    move-object/from16 v20, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->free_disk_size:Ljava/lang/Long;

    move-object/from16 v21, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->sd_total_disk_size:Ljava/lang/Long;

    move-object/from16 v22, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->sd_free_disk_size:Ljava/lang/Long;

    move-object/from16 v23, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->resolution:Lcom/czhj/sdk/common/models/Size;

    move-object/from16 v24, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->system_update_time:Ljava/lang/String;

    move-object/from16 v25, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->internal_name:Ljava/lang/String;

    move-object/from16 v26, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->boot_mark:Ljava/lang/String;

    move-object/from16 v27, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/Device$Builder;->update_mark:Ljava/lang/String;

    move-object/from16 v28, v1

    invoke-super/range {p0 .. p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v29

    move-object/from16 v1, v31

    invoke-direct/range {v1 .. v29}, Lcom/czhj/sdk/common/models/Device;-><init>(Ljava/lang/Integer;Ljava/lang/Integer;Lcom/czhj/sdk/common/models/Version;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/sdk/common/models/DeviceId;Lcom/czhj/sdk/common/models/Size;Lcom/czhj/sdk/common/models/Geo;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/Float;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Lcom/czhj/sdk/common/models/Size;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/wire/okio/ByteString;)V

    return-object v30
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/Device$Builder;->build()Lcom/czhj/sdk/common/models/Device;

    move-result-object v0

    return-object v0
.end method

.method public device_name(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->device_name:Ljava/lang/String;

    return-object p0
.end method

.method public device_type(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->device_type:Ljava/lang/Integer;

    return-object p0
.end method

.method public did(Lcom/czhj/sdk/common/models/DeviceId;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->did:Lcom/czhj/sdk/common/models/DeviceId;

    return-object p0
.end method

.method public disk_size(Ljava/lang/Long;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->disk_size:Ljava/lang/Long;

    return-object p0
.end method

.method public dpi(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->dpi:Ljava/lang/Integer;

    return-object p0
.end method

.method public free_disk_size(Ljava/lang/Long;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->free_disk_size:Ljava/lang/Long;

    return-object p0
.end method

.method public geo(Lcom/czhj/sdk/common/models/Geo;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->geo:Lcom/czhj/sdk/common/models/Geo;

    return-object p0
.end method

.method public internal_name(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->internal_name:Ljava/lang/String;

    return-object p0
.end method

.method public is_root(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->is_root:Ljava/lang/Boolean;

    return-object p0
.end method

.method public mem_size(Ljava/lang/Long;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->mem_size:Ljava/lang/Long;

    return-object p0
.end method

.method public model(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->model:Ljava/lang/String;

    return-object p0
.end method

.method public os_type(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->os_type:Ljava/lang/Integer;

    return-object p0
.end method

.method public os_version(Lcom/czhj/sdk/common/models/Version;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->os_version:Lcom/czhj/sdk/common/models/Version;

    return-object p0
.end method

.method public resolution(Lcom/czhj/sdk/common/models/Size;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->resolution:Lcom/czhj/sdk/common/models/Size;

    return-object p0
.end method

.method public screen_size(Lcom/czhj/sdk/common/models/Size;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->screen_size:Lcom/czhj/sdk/common/models/Size;

    return-object p0
.end method

.method public sd_free_disk_size(Ljava/lang/Long;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->sd_free_disk_size:Ljava/lang/Long;

    return-object p0
.end method

.method public sd_total_disk_size(Ljava/lang/Long;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->sd_total_disk_size:Ljava/lang/Long;

    return-object p0
.end method

.method public start_timestamp(Ljava/lang/Long;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->start_timestamp:Ljava/lang/Long;

    return-object p0
.end method

.method public system_update_time(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->system_update_time:Ljava/lang/String;

    return-object p0
.end method

.method public total_disk_size(Ljava/lang/Long;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->total_disk_size:Ljava/lang/Long;

    return-object p0
.end method

.method public update_mark(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->update_mark:Ljava/lang/String;

    return-object p0
.end method

.method public vendor(Ljava/lang/String;)Lcom/czhj/sdk/common/models/Device$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/Device$Builder;->vendor:Ljava/lang/String;

    return-object p0
.end method
