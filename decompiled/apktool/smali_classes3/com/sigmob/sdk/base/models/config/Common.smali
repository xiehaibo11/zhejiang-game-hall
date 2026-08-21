.class public final Lcom/sigmob/sdk/base/models/config/Common;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/models/config/Common$ProtoAdapter_Common;,
        Lcom/sigmob/sdk/base/models/config/Common$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/sigmob/sdk/base/models/config/Common;",
        "Lcom/sigmob/sdk/base/models/config/Common$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/sigmob/sdk/base/models/config/Common;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/sigmob/sdk/base/models/config/Common;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_CONFIGREFRESH:Ljava/lang/Integer;

.field public static final DEFAULT_DISABLE_UP_LOCATION:Ljava/lang/Boolean;

.field public static final DEFAULT_ENABLE_DEBUG_LEVEL:Ljava/lang/Boolean;

.field public static final DEFAULT_IS_GDPR_REGION:Ljava/lang/Boolean;

.field public static final DEFAULT_LOAD_INTERVAL:Ljava/lang/Integer;

.field public static final DEFAULT_MAX_SEND_LOG_RECORDS:Ljava/lang/Integer;

.field public static final DEFAULT_SEND_LOG_INTERVAL:Ljava/lang/Integer;

.field public static final DEFAULT_TRACKING_EXPIRATION_TIME:Ljava/lang/Integer;

.field public static final DEFAULT_TRACKING_RETRY_INTERVAL:Ljava/lang/Integer;

.field private static final serialVersionUID:J


# instance fields
.field public final anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.AntiFraudLogConfig#ADAPTER"
        tag = 0x7
    .end annotation
.end field

.field public final configRefresh:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x6
    .end annotation
.end field

.field public final dclog_blacklist:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0xd
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public final disable_up_location:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x10
    .end annotation
.end field

.field public final enable_debug_level:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0xe
    .end annotation
.end field

.field public final endpoints:Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.CommonEndpointsConfig#ADAPTER"
        tag = 0x1
    .end annotation
.end field

.field public final is_gdpr_region:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x8
    .end annotation
.end field

.field public final load_interval:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0xf
    .end annotation
.end field

.field public final max_send_log_records:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0xb
    .end annotation
.end field

.field public final native_config:Lcom/sigmob/sdk/base/models/config/NativeConfig;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.NativeConfig#ADAPTER"
        tag = 0x4
    .end annotation
.end field

.field public final rv_config:Lcom/sigmob/sdk/base/models/config/RvConfig;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.RvConfig#ADAPTER"
        tag = 0x2
    .end annotation
.end field

.field public final send_log_interval:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0xc
    .end annotation
.end field

.field public final splash_config:Lcom/sigmob/sdk/base/models/config/SplashConfig;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.SplashConfig#ADAPTER"
        tag = 0x3
    .end annotation
.end field

.field public final tracking_expiration_time:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x9
    .end annotation
.end field

.field public final tracking_retry_interval:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0xa
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/base/models/config/Common$ProtoAdapter_Common;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/config/Common$ProtoAdapter_Common;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/models/config/Common;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/config/Common;->CREATOR:Landroid/os/Parcelable$Creator;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v1, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_CONFIGREFRESH:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_IS_GDPR_REGION:Ljava/lang/Boolean;

    const v2, 0x15180

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    sput-object v2, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_TRACKING_EXPIRATION_TIME:Ljava/lang/Integer;

    const/16 v2, 0xb4

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    sput-object v2, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_TRACKING_RETRY_INTERVAL:Ljava/lang/Integer;

    const/16 v2, 0x64

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    sput-object v2, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_MAX_SEND_LOG_RECORDS:Ljava/lang/Integer;

    const/4 v2, 0x3

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    sput-object v2, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_SEND_LOG_INTERVAL:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_ENABLE_DEBUG_LEVEL:Ljava/lang/Boolean;

    sput-object v1, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_LOAD_INTERVAL:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_DISABLE_UP_LOCATION:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;Lcom/sigmob/sdk/base/models/config/RvConfig;Lcom/sigmob/sdk/base/models/config/SplashConfig;Lcom/sigmob/sdk/base/models/config/NativeConfig;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/util/List;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Boolean;)V
    .locals 17
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;",
            "Lcom/sigmob/sdk/base/models/config/RvConfig;",
            "Lcom/sigmob/sdk/base/models/config/SplashConfig;",
            "Lcom/sigmob/sdk/base/models/config/NativeConfig;",
            "Ljava/lang/Integer;",
            "Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Boolean;",
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

    sget-object v16, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    invoke-direct/range {v0 .. v16}, Lcom/sigmob/sdk/base/models/config/Common;-><init>(Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;Lcom/sigmob/sdk/base/models/config/RvConfig;Lcom/sigmob/sdk/base/models/config/SplashConfig;Lcom/sigmob/sdk/base/models/config/NativeConfig;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/util/List;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;Lcom/sigmob/sdk/base/models/config/RvConfig;Lcom/sigmob/sdk/base/models/config/SplashConfig;Lcom/sigmob/sdk/base/models/config/NativeConfig;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/util/List;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;",
            "Lcom/sigmob/sdk/base/models/config/RvConfig;",
            "Lcom/sigmob/sdk/base/models/config/SplashConfig;",
            "Lcom/sigmob/sdk/base/models/config/NativeConfig;",
            "Ljava/lang/Integer;",
            "Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Integer;",
            "Ljava/lang/Boolean;",
            "Lcom/czhj/wire/okio/ByteString;",
            ")V"
        }
    .end annotation

    move-object v0, p0

    sget-object v1, Lcom/sigmob/sdk/base/models/config/Common;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    move-object/from16 v2, p16

    invoke-direct {p0, v1, v2}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    move-object v1, p1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common;->endpoints:Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;

    move-object v1, p2

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common;->rv_config:Lcom/sigmob/sdk/base/models/config/RvConfig;

    move-object v1, p3

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common;->splash_config:Lcom/sigmob/sdk/base/models/config/SplashConfig;

    move-object v1, p4

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common;->native_config:Lcom/sigmob/sdk/base/models/config/NativeConfig;

    move-object v1, p5

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common;->configRefresh:Ljava/lang/Integer;

    move-object v1, p6

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    move-object v1, p7

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common;->is_gdpr_region:Ljava/lang/Boolean;

    move-object v1, p8

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common;->tracking_expiration_time:Ljava/lang/Integer;

    move-object v1, p9

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common;->tracking_retry_interval:Ljava/lang/Integer;

    move-object v1, p10

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common;->max_send_log_records:Ljava/lang/Integer;

    move-object v1, p11

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common;->send_log_interval:Ljava/lang/Integer;

    const-string v1, "dclog_blacklist"

    move-object v2, p12

    invoke-static {v1, p12}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common;->dclog_blacklist:Ljava/util/List;

    move-object/from16 v1, p13

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common;->enable_debug_level:Ljava/lang/Boolean;

    move-object/from16 v1, p14

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common;->load_interval:Ljava/lang/Integer;

    move-object/from16 v1, p15

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common;->disable_up_location:Ljava/lang/Boolean;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/sigmob/sdk/base/models/config/Common;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/sigmob/sdk/base/models/config/Common;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/Common;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/config/Common;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->endpoints:Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Common;->endpoints:Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->rv_config:Lcom/sigmob/sdk/base/models/config/RvConfig;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Common;->rv_config:Lcom/sigmob/sdk/base/models/config/RvConfig;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->splash_config:Lcom/sigmob/sdk/base/models/config/SplashConfig;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Common;->splash_config:Lcom/sigmob/sdk/base/models/config/SplashConfig;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->native_config:Lcom/sigmob/sdk/base/models/config/NativeConfig;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Common;->native_config:Lcom/sigmob/sdk/base/models/config/NativeConfig;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->configRefresh:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Common;->configRefresh:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Common;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->is_gdpr_region:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Common;->is_gdpr_region:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->tracking_expiration_time:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Common;->tracking_expiration_time:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->tracking_retry_interval:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Common;->tracking_retry_interval:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->max_send_log_records:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Common;->max_send_log_records:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->send_log_interval:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Common;->send_log_interval:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->dclog_blacklist:Ljava/util/List;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Common;->dclog_blacklist:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->enable_debug_level:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Common;->enable_debug_level:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->load_interval:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/Common;->load_interval:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->disable_up_location:Ljava/lang/Boolean;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/config/Common;->disable_up_location:Ljava/lang/Boolean;

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

    if-nez v0, :cond_e

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/Common;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->endpoints:Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->rv_config:Lcom/sigmob/sdk/base/models/config/RvConfig;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/config/RvConfig;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->splash_config:Lcom/sigmob/sdk/base/models/config/SplashConfig;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/config/SplashConfig;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->native_config:Lcom/sigmob/sdk/base/models/config/NativeConfig;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/config/NativeConfig;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->configRefresh:Ljava/lang/Integer;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->hashCode()I

    move-result v1

    goto :goto_5

    :cond_5
    move v1, v2

    :goto_5
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->is_gdpr_region:Ljava/lang/Boolean;

    if-eqz v1, :cond_6

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_6

    :cond_6
    move v1, v2

    :goto_6
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->tracking_expiration_time:Ljava/lang/Integer;

    if-eqz v1, :cond_7

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_7

    :cond_7
    move v1, v2

    :goto_7
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->tracking_retry_interval:Ljava/lang/Integer;

    if-eqz v1, :cond_8

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_8

    :cond_8
    move v1, v2

    :goto_8
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->max_send_log_records:Ljava/lang/Integer;

    if-eqz v1, :cond_9

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_9

    :cond_9
    move v1, v2

    :goto_9
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->send_log_interval:Ljava/lang/Integer;

    if-eqz v1, :cond_a

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_a

    :cond_a
    move v1, v2

    :goto_a
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->dclog_blacklist:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->enable_debug_level:Ljava/lang/Boolean;

    if-eqz v1, :cond_b

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_b

    :cond_b
    move v1, v2

    :goto_b
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->load_interval:Ljava/lang/Integer;

    if-eqz v1, :cond_c

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_c

    :cond_c
    move v1, v2

    :goto_c
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->disable_up_location:Ljava/lang/Boolean;

    if-eqz v1, :cond_d

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v2

    :cond_d
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_e
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/Common;->newBuilder()Lcom/sigmob/sdk/base/models/config/Common$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/sigmob/sdk/base/models/config/Common$Builder;
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/config/Common$Builder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->endpoints:Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->endpoints:Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->rv_config:Lcom/sigmob/sdk/base/models/config/RvConfig;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->rv_config:Lcom/sigmob/sdk/base/models/config/RvConfig;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->splash_config:Lcom/sigmob/sdk/base/models/config/SplashConfig;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->splash_config:Lcom/sigmob/sdk/base/models/config/SplashConfig;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->native_config:Lcom/sigmob/sdk/base/models/config/NativeConfig;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->native_config:Lcom/sigmob/sdk/base/models/config/NativeConfig;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->configRefresh:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->configRefresh:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->is_gdpr_region:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->is_gdpr_region:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->tracking_expiration_time:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->tracking_expiration_time:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->tracking_retry_interval:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->tracking_retry_interval:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->max_send_log_records:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->max_send_log_records:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->send_log_interval:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->send_log_interval:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->dclog_blacklist:Ljava/util/List;

    const-string v2, "dclog_blacklist"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->dclog_blacklist:Ljava/util/List;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->enable_debug_level:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->enable_debug_level:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->load_interval:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->load_interval:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->disable_up_location:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->disable_up_location:Ljava/lang/Boolean;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/Common;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/config/Common$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->endpoints:Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;

    if-eqz v1, :cond_0

    const-string v1, ", endpoints="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->endpoints:Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->rv_config:Lcom/sigmob/sdk/base/models/config/RvConfig;

    if-eqz v1, :cond_1

    const-string v1, ", rv_config="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->rv_config:Lcom/sigmob/sdk/base/models/config/RvConfig;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->splash_config:Lcom/sigmob/sdk/base/models/config/SplashConfig;

    if-eqz v1, :cond_2

    const-string v1, ", splash_config="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->splash_config:Lcom/sigmob/sdk/base/models/config/SplashConfig;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->native_config:Lcom/sigmob/sdk/base/models/config/NativeConfig;

    if-eqz v1, :cond_3

    const-string v1, ", native_config="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->native_config:Lcom/sigmob/sdk/base/models/config/NativeConfig;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->configRefresh:Ljava/lang/Integer;

    if-eqz v1, :cond_4

    const-string v1, ", configRefresh="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->configRefresh:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    if-eqz v1, :cond_5

    const-string v1, ", anti_fraud_log="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_5
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->is_gdpr_region:Ljava/lang/Boolean;

    if-eqz v1, :cond_6

    const-string v1, ", is_gdpr_region="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->is_gdpr_region:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_6
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->tracking_expiration_time:Ljava/lang/Integer;

    if-eqz v1, :cond_7

    const-string v1, ", tracking_expiration_time="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->tracking_expiration_time:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_7
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->tracking_retry_interval:Ljava/lang/Integer;

    if-eqz v1, :cond_8

    const-string v1, ", tracking_retry_interval="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->tracking_retry_interval:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_8
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->max_send_log_records:Ljava/lang/Integer;

    if-eqz v1, :cond_9

    const-string v1, ", max_send_log_records="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->max_send_log_records:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_9
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->send_log_interval:Ljava/lang/Integer;

    if-eqz v1, :cond_a

    const-string v1, ", send_log_interval="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->send_log_interval:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_a
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->dclog_blacklist:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_b

    const-string v1, ", dclog_blacklist="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->dclog_blacklist:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_b
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->enable_debug_level:Ljava/lang/Boolean;

    if-eqz v1, :cond_c

    const-string v1, ", enable_debug_level="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->enable_debug_level:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_c
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->load_interval:Ljava/lang/Integer;

    if-eqz v1, :cond_d

    const-string v1, ", load_interval="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->load_interval:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_d
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->disable_up_location:Ljava/lang/Boolean;

    if-eqz v1, :cond_e

    const-string v1, ", disable_up_location="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Common;->disable_up_location:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_e
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "Common{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
