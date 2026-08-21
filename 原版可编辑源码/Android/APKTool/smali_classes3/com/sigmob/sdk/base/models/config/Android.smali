.class public final Lcom/sigmob/sdk/base/models/config/Android;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/models/config/Android$ProtoAdapter_Android;,
        Lcom/sigmob/sdk/base/models/config/Android$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/sigmob/sdk/base/models/config/Android;",
        "Lcom/sigmob/sdk/base/models/config/Android$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/sigmob/sdk/base/models/config/Android;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/sigmob/sdk/base/models/config/Android;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_APK_EXPIRED_TIME:Ljava/lang/Integer;

.field public static final DEFAULT_DISABLEUPAPPINFO:Ljava/lang/Boolean;

.field public static final DEFAULT_DISABLE_BOOT_MARK:Ljava/lang/Boolean;

.field public static final DEFAULT_DISABLE_UP_OAID:Ljava/lang/Integer;

.field public static final DEFAULT_ENABLE_PERMISSION:Ljava/lang/Boolean;

.field public static final DEFAULT_ENABLE_REPORT_CRASH:Ljava/lang/Boolean;

.field public static final DEFAULT_OAID_API_IS_DISABLE:Ljava/lang/Boolean;

.field public static final DEFAULT_REPORT_LOG:Ljava/lang/Integer;

.field public static final DEFAULT_UP_WIFI_LIST_INTERVAL:Ljava/lang/Integer;

.field private static final serialVersionUID:J


# instance fields
.field public final apk_expired_time:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x6
    .end annotation
.end field

.field public final disableUpAppInfo:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x1
    .end annotation
.end field

.field public final disable_boot_mark:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x9
    .end annotation
.end field

.field public final disable_up_oaid:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x4
    .end annotation
.end field

.field public final enable_permission:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x5
    .end annotation
.end field

.field public final enable_report_crash:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x7
    .end annotation
.end field

.field public final oaid_api_is_disable:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x8
    .end annotation
.end field

.field public final report_log:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x2
    .end annotation
.end field

.field public final up_wifi_list_interval:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x3
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/models/config/Android$ProtoAdapter_Android;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/config/Android$ProtoAdapter_Android;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/models/config/Android;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/config/Android;->CREATOR:Landroid/os/Parcelable$Creator;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/config/Android;->DEFAULT_DISABLEUPAPPINFO:Ljava/lang/Boolean;

    sput-object v1, Lcom/sigmob/sdk/base/models/config/Android;->DEFAULT_REPORT_LOG:Ljava/lang/Integer;

    sput-object v1, Lcom/sigmob/sdk/base/models/config/Android;->DEFAULT_UP_WIFI_LIST_INTERVAL:Ljava/lang/Integer;

    sput-object v1, Lcom/sigmob/sdk/base/models/config/Android;->DEFAULT_DISABLE_UP_OAID:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/config/Android;->DEFAULT_ENABLE_PERMISSION:Ljava/lang/Boolean;

    sput-object v1, Lcom/sigmob/sdk/base/models/config/Android;->DEFAULT_APK_EXPIRED_TIME:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/config/Android;->DEFAULT_ENABLE_REPORT_CRASH:Ljava/lang/Boolean;

    sput-object v0, Lcom/sigmob/sdk/base/models/config/Android;->DEFAULT_OAID_API_IS_DISABLE:Ljava/lang/Boolean;

    sput-object v0, Lcom/sigmob/sdk/base/models/config/Android;->DEFAULT_DISABLE_BOOT_MARK:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;)V
    .locals 11

    sget-object v10, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object/from16 v5, p5

    move-object/from16 v6, p6

    move-object/from16 v7, p7

    move-object/from16 v8, p8

    move-object/from16 v9, p9

    invoke-direct/range {v0 .. v10}, Lcom/sigmob/sdk/base/models/config/Android;-><init>(Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Android;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p10}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Android;->disableUpAppInfo:Ljava/lang/Boolean;

    iput-object p2, p0, Lcom/sigmob/sdk/base/models/config/Android;->report_log:Ljava/lang/Integer;

    iput-object p3, p0, Lcom/sigmob/sdk/base/models/config/Android;->up_wifi_list_interval:Ljava/lang/Integer;

    iput-object p4, p0, Lcom/sigmob/sdk/base/models/config/Android;->disable_up_oaid:Ljava/lang/Integer;

    iput-object p5, p0, Lcom/sigmob/sdk/base/models/config/Android;->enable_permission:Ljava/lang/Boolean;

    iput-object p6, p0, Lcom/sigmob/sdk/base/models/config/Android;->apk_expired_time:Ljava/lang/Integer;

    iput-object p7, p0, Lcom/sigmob/sdk/base/models/config/Android;->enable_report_crash:Ljava/lang/Boolean;

    iput-object p8, p0, Lcom/sigmob/sdk/base/models/config/Android;->oaid_api_is_disable:Ljava/lang/Boolean;

    iput-object p9, p0, Lcom/sigmob/sdk/base/models/config/Android;->disable_boot_mark:Ljava/lang/Boolean;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/sigmob/sdk/base/models/config/Android;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/sigmob/sdk/base/models/config/Android;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/Android;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/config/Android;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->disableUpAppInfo:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Android;->disableUpAppInfo:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->report_log:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Android;->report_log:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->up_wifi_list_interval:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Android;->up_wifi_list_interval:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->disable_up_oaid:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Android;->disable_up_oaid:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->enable_permission:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Android;->enable_permission:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->apk_expired_time:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Android;->apk_expired_time:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->enable_report_crash:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Android;->enable_report_crash:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->oaid_api_is_disable:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Android;->oaid_api_is_disable:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->disable_boot_mark:Ljava/lang/Boolean;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/config/Android;->disable_boot_mark:Ljava/lang/Boolean;

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

    if-nez v0, :cond_9

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/Android;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->disableUpAppInfo:Ljava/lang/Boolean;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->report_log:Ljava/lang/Integer;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->up_wifi_list_interval:Ljava/lang/Integer;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->disable_up_oaid:Ljava/lang/Integer;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->enable_permission:Ljava/lang/Boolean;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->apk_expired_time:Ljava/lang/Integer;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_5

    :cond_5
    move v1, v2

    :goto_5
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->enable_report_crash:Ljava/lang/Boolean;

    if-eqz v1, :cond_6

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_6

    :cond_6
    move v1, v2

    :goto_6
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->oaid_api_is_disable:Ljava/lang/Boolean;

    if-eqz v1, :cond_7

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_7

    :cond_7
    move v1, v2

    :goto_7
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->disable_boot_mark:Ljava/lang/Boolean;

    if-eqz v1, :cond_8

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v2

    :cond_8
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_9
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/Android;->newBuilder()Lcom/sigmob/sdk/base/models/config/Android$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/sigmob/sdk/base/models/config/Android$Builder;
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/models/config/Android$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/config/Android$Builder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->disableUpAppInfo:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->disableUpAppInfo:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->report_log:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->report_log:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->up_wifi_list_interval:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->up_wifi_list_interval:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->disable_up_oaid:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->disable_up_oaid:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->enable_permission:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->enable_permission:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->apk_expired_time:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->apk_expired_time:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->enable_report_crash:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->enable_report_crash:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->oaid_api_is_disable:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->oaid_api_is_disable:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->disable_boot_mark:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->disable_boot_mark:Ljava/lang/Boolean;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/Android;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/config/Android$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->disableUpAppInfo:Ljava/lang/Boolean;

    if-eqz v1, :cond_0

    const-string v1, ", disableUpAppInfo="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->disableUpAppInfo:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->report_log:Ljava/lang/Integer;

    if-eqz v1, :cond_1

    const-string v1, ", report_log="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->report_log:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->up_wifi_list_interval:Ljava/lang/Integer;

    if-eqz v1, :cond_2

    const-string v1, ", up_wifi_list_interval="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->up_wifi_list_interval:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->disable_up_oaid:Ljava/lang/Integer;

    if-eqz v1, :cond_3

    const-string v1, ", disable_up_oaid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->disable_up_oaid:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->enable_permission:Ljava/lang/Boolean;

    if-eqz v1, :cond_4

    const-string v1, ", enable_permission="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->enable_permission:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->apk_expired_time:Ljava/lang/Integer;

    if-eqz v1, :cond_5

    const-string v1, ", apk_expired_time="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->apk_expired_time:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_5
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->enable_report_crash:Ljava/lang/Boolean;

    if-eqz v1, :cond_6

    const-string v1, ", enable_report_crash="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->enable_report_crash:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_6
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->oaid_api_is_disable:Ljava/lang/Boolean;

    if-eqz v1, :cond_7

    const-string v1, ", oaid_api_is_disable="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->oaid_api_is_disable:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_7
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->disable_boot_mark:Ljava/lang/Boolean;

    if-eqz v1, :cond_8

    const-string v1, ", disable_boot_mark="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android;->disable_boot_mark:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_8
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "Android{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
