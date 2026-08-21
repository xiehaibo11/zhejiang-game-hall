.class public final Lcom/sigmob/sdk/base/models/config/Android$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/config/Android;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/config/Android;",
        "Lcom/sigmob/sdk/base/models/config/Android$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public apk_expired_time:Ljava/lang/Integer;

.field public disableUpAppInfo:Ljava/lang/Boolean;

.field public disable_boot_mark:Ljava/lang/Boolean;

.field public disable_up_oaid:Ljava/lang/Integer;

.field public enable_permission:Ljava/lang/Boolean;

.field public enable_report_crash:Ljava/lang/Boolean;

.field public oaid_api_is_disable:Ljava/lang/Boolean;

.field public report_log:Ljava/lang/Integer;

.field public up_wifi_list_interval:Ljava/lang/Integer;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Android;->DEFAULT_DISABLEUPAPPINFO:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->disableUpAppInfo:Ljava/lang/Boolean;

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Android;->DEFAULT_REPORT_LOG:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->report_log:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Android;->DEFAULT_UP_WIFI_LIST_INTERVAL:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->up_wifi_list_interval:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Android;->DEFAULT_DISABLE_UP_OAID:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->disable_up_oaid:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Android;->DEFAULT_ENABLE_PERMISSION:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->enable_permission:Ljava/lang/Boolean;

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Android;->DEFAULT_APK_EXPIRED_TIME:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->apk_expired_time:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Android;->DEFAULT_ENABLE_REPORT_CRASH:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->enable_report_crash:Ljava/lang/Boolean;

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Android;->DEFAULT_OAID_API_IS_DISABLE:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->oaid_api_is_disable:Ljava/lang/Boolean;

    sget-object v0, Lcom/sigmob/sdk/base/models/config/Android;->DEFAULT_DISABLE_BOOT_MARK:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->disable_boot_mark:Ljava/lang/Boolean;

    return-void
.end method


# virtual methods
.method public apk_expired_time(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/config/Android$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->apk_expired_time:Ljava/lang/Integer;

    return-object p0
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/Android$Builder;->build()Lcom/sigmob/sdk/base/models/config/Android;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/config/Android;
    .locals 12

    new-instance v11, Lcom/sigmob/sdk/base/models/config/Android;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->disableUpAppInfo:Ljava/lang/Boolean;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->report_log:Ljava/lang/Integer;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->up_wifi_list_interval:Ljava/lang/Integer;

    iget-object v4, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->disable_up_oaid:Ljava/lang/Integer;

    iget-object v5, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->enable_permission:Ljava/lang/Boolean;

    iget-object v6, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->apk_expired_time:Ljava/lang/Integer;

    iget-object v7, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->enable_report_crash:Ljava/lang/Boolean;

    iget-object v8, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->oaid_api_is_disable:Ljava/lang/Boolean;

    iget-object v9, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->disable_boot_mark:Ljava/lang/Boolean;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v10

    move-object v0, v11

    invoke-direct/range {v0 .. v10}, Lcom/sigmob/sdk/base/models/config/Android;-><init>(Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V

    return-object v11
.end method

.method public disableUpAppInfo(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/config/Android$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->disableUpAppInfo:Ljava/lang/Boolean;

    return-object p0
.end method

.method public disable_boot_mark(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/config/Android$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->disable_boot_mark:Ljava/lang/Boolean;

    return-object p0
.end method

.method public disable_up_oaid(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/config/Android$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->disable_up_oaid:Ljava/lang/Integer;

    return-object p0
.end method

.method public enable_permission(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/config/Android$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->enable_permission:Ljava/lang/Boolean;

    return-object p0
.end method

.method public enable_report_crash(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/config/Android$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->enable_report_crash:Ljava/lang/Boolean;

    return-object p0
.end method

.method public oaid_api_is_disable(Ljava/lang/Boolean;)Lcom/sigmob/sdk/base/models/config/Android$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->oaid_api_is_disable:Ljava/lang/Boolean;

    return-object p0
.end method

.method public report_log(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/config/Android$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->report_log:Ljava/lang/Integer;

    return-object p0
.end method

.method public up_wifi_list_interval(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/config/Android$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/Android$Builder;->up_wifi_list_interval:Ljava/lang/Integer;

    return-object p0
.end method
