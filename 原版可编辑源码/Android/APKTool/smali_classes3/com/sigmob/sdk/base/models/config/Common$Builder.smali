.class public final Lcom/sigmob/sdk/base/models/config/Common$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/config/Common;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/config/Common;",
        "Lcom/sigmob/sdk/base/models/config/Common$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

.field public configRefresh:Ljava/lang/Integer;

.field public dclog_blacklist:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public disable_up_location:Ljava/lang/Boolean;

.field public enable_debug_level:Ljava/lang/Boolean;

.field public endpoints:Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;

.field public is_gdpr_region:Ljava/lang/Boolean;

.field public load_interval:Ljava/lang/Integer;

.field public max_send_log_records:Ljava/lang/Integer;

.field public native_config:Lcom/sigmob/sdk/base/models/config/NativeConfig;

.field public rv_config:Lcom/sigmob/sdk/base/models/config/RvConfig;

.field public send_log_interval:Ljava/lang/Integer;

.field public splash_config:Lcom/sigmob/sdk/base/models/config/SplashConfig;

.field public tracking_expiration_time:Ljava/lang/Integer;

.field public tracking_retry_interval:Ljava/lang/Integer;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_CONFIGREFRESH:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->configRefresh:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_IS_GDPR_REGION:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->is_gdpr_region:Ljava/lang/Boolean;

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_TRACKING_EXPIRATION_TIME:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->tracking_expiration_time:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_TRACKING_RETRY_INTERVAL:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->tracking_retry_interval:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_MAX_SEND_LOG_RECORDS:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->max_send_log_records:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_SEND_LOG_INTERVAL:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->send_log_interval:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_ENABLE_DEBUG_LEVEL:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->enable_debug_level:Ljava/lang/Boolean;

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_LOAD_INTERVAL:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->load_interval:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Common;->DEFAULT_DISABLE_UP_LOCATION:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->disable_up_location:Ljava/lang/Boolean;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->dclog_blacklist:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public anti_fraud_log(Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;)Lcom/sigmob/sdk/base/models/config/Common$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    return-object p0
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/Common$Builder;->build()Lcom/sigmob/sdk/base/models/config/Common;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/config/Common;
    .locals 20

    move-object/from16 v0, p0

    new-instance v18, Lcom/sigmob/sdk/base/models/config/Common;

    move-object/from16 v1, v18

    iget-object v2, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->endpoints:Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;

    iget-object v3, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->rv_config:Lcom/sigmob/sdk/base/models/config/RvConfig;

    iget-object v4, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->splash_config:Lcom/sigmob/sdk/base/models/config/SplashConfig;

    iget-object v5, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->native_config:Lcom/sigmob/sdk/base/models/config/NativeConfig;

    iget-object v6, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->configRefresh:Ljava/lang/Integer;

    iget-object v7, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->anti_fraud_log:Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    iget-object v8, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->is_gdpr_region:Ljava/lang/Boolean;

    iget-object v9, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->tracking_expiration_time:Ljava/lang/Integer;

    iget-object v10, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->tracking_retry_interval:Ljava/lang/Integer;

    iget-object v11, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->max_send_log_records:Ljava/lang/Integer;

    iget-object v12, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->send_log_interval:Ljava/lang/Integer;

    iget-object v13, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->dclog_blacklist:Ljava/util/List;

    iget-object v14, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->enable_debug_level:Ljava/lang/Boolean;

    iget-object v15, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->load_interval:Ljava/lang/Integer;

    move-object/from16 v19, v1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->disable_up_location:Ljava/lang/Boolean;

    move-object/from16 v16, v1

    invoke-super/range {p0 .. p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v17

    move-object/from16 v1, v19

    invoke-direct/range {v1 .. v17}, Lcom/sigmob/sdk/base/models/config/Common;-><init>(Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;Lcom/sigmob/sdk/base/models/config/RvConfig;Lcom/sigmob/sdk/base/models/config/SplashConfig;Lcom/sigmob/sdk/base/models/config/NativeConfig;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/util/List;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V

    return-object v18
.end method

.method public configRefresh(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/config/Common$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->configRefresh:Ljava/lang/Integer;

    return-object p0
.end method

.method public dclog_blacklist(Ljava/util/List;)Lcom/sigmob/sdk/base/models/config/Common$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;)",
            "Lcom/sigmob/sdk/base/models/config/Common$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->dclog_blacklist:Ljava/util/List;

    return-object p0
.end method

.method public disable_up_location(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/config/Common$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->disable_up_location:Ljava/lang/Boolean;

    return-object p0
.end method

.method public enable_debug_level(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/config/Common$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->enable_debug_level:Ljava/lang/Boolean;

    return-object p0
.end method

.method public endpoints(Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;)Lcom/sigmob/sdk/base/models/config/Common$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->endpoints:Lcom/sigmob/sdk/base/models/config/CommonEndpointsConfig;

    return-object p0
.end method

.method public is_gdpr_region(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/config/Common$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->is_gdpr_region:Ljava/lang/Boolean;

    return-object p0
.end method

.method public load_interval(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/config/Common$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->load_interval:Ljava/lang/Integer;

    return-object p0
.end method

.method public max_send_log_records(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/config/Common$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->max_send_log_records:Ljava/lang/Integer;

    return-object p0
.end method

.method public native_config(Lcom/sigmob/sdk/base/models/config/NativeConfig;)Lcom/sigmob/sdk/base/models/config/Common$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->native_config:Lcom/sigmob/sdk/base/models/config/NativeConfig;

    return-object p0
.end method

.method public rv_config(Lcom/sigmob/sdk/base/models/config/RvConfig;)Lcom/sigmob/sdk/base/models/config/Common$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->rv_config:Lcom/sigmob/sdk/base/models/config/RvConfig;

    return-object p0
.end method

.method public send_log_interval(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/config/Common$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->send_log_interval:Ljava/lang/Integer;

    return-object p0
.end method

.method public splash_config(Lcom/sigmob/sdk/base/models/config/SplashConfig;)Lcom/sigmob/sdk/base/models/config/Common$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->splash_config:Lcom/sigmob/sdk/base/models/config/SplashConfig;

    return-object p0
.end method

.method public tracking_expiration_time(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/config/Common$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->tracking_expiration_time:Ljava/lang/Integer;

    return-object p0
.end method

.method public tracking_retry_interval(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/config/Common$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Common$Builder;->tracking_retry_interval:Ljava/lang/Integer;

    return-object p0
.end method
