.class public Lcom/czhj/sdk/common/models/Config;
.super Ljava/lang/Object;


# static fields
.field private static gInstance:Lcom/czhj/sdk/common/models/Config;


# instance fields
.field private disable_boot_mark:Z

.field private disable_oaid_api:Z

.field private disable_up_oaid:I

.field private log:Ljava/lang/String;

.field private mIsGDPRRegion:Z

.field private max_send_log_records:I

.field private send_log_interval:I


# direct methods
.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0x64

    iput v0, p0, Lcom/czhj/sdk/common/models/Config;->max_send_log_records:I

    const/4 v0, 0x3

    iput v0, p0, Lcom/czhj/sdk/common/models/Config;->send_log_interval:I

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/czhj/sdk/common/models/Config;->mIsGDPRRegion:Z

    return-void
.end method

.method public static sharedInstance()Lcom/czhj/sdk/common/models/Config;
    .locals 2

    sget-object v0, Lcom/czhj/sdk/common/models/Config;->gInstance:Lcom/czhj/sdk/common/models/Config;

    if-nez v0, :cond_1

    const-class v0, Lcom/czhj/sdk/common/models/Config;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/czhj/sdk/common/models/Config;->gInstance:Lcom/czhj/sdk/common/models/Config;

    if-nez v1, :cond_0

    new-instance v1, Lcom/czhj/sdk/common/models/Config;

    invoke-direct {v1}, Lcom/czhj/sdk/common/models/Config;-><init>()V

    sput-object v1, Lcom/czhj/sdk/common/models/Config;->gInstance:Lcom/czhj/sdk/common/models/Config;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_1
    :goto_0
    sget-object v0, Lcom/czhj/sdk/common/models/Config;->gInstance:Lcom/czhj/sdk/common/models/Config;

    return-object v0
.end method


# virtual methods
.method public getDisable_up_OAid()I
    .locals 1

    iget v0, p0, Lcom/czhj/sdk/common/models/Config;->disable_up_oaid:I

    return v0
.end method

.method public getLogUrl()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/czhj/sdk/common/models/Config;->log:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "https://dc.sigmob.cn/log"

    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/czhj/sdk/common/models/Config;->log:Ljava/lang/String;

    return-object v0
.end method

.method public getMax_send_log_records()I
    .locals 2

    iget v0, p0, Lcom/czhj/sdk/common/models/Config;->max_send_log_records:I

    const/16 v1, 0xa

    if-ge v0, v1, :cond_0

    const/16 v0, 0x64

    iput v0, p0, Lcom/czhj/sdk/common/models/Config;->max_send_log_records:I

    :cond_0
    iget v0, p0, Lcom/czhj/sdk/common/models/Config;->max_send_log_records:I

    return v0
.end method

.method public getOaidApiDisable()Z
    .locals 1

    iget-boolean v0, p0, Lcom/czhj/sdk/common/models/Config;->disable_oaid_api:Z

    return v0
.end method

.method public getSend_log_interval()I
    .locals 1

    iget v0, p0, Lcom/czhj/sdk/common/models/Config;->send_log_interval:I

    return v0
.end method

.method public isDisableBootMark()Z
    .locals 1

    iget-boolean v0, p0, Lcom/czhj/sdk/common/models/Config;->disable_boot_mark:Z

    return v0
.end method

.method public isGDPRRegion()Z
    .locals 1

    iget-boolean v0, p0, Lcom/czhj/sdk/common/models/Config;->mIsGDPRRegion:Z

    return v0
.end method

.method public update(ZZZILjava/lang/String;II)V
    .locals 0

    iput-boolean p1, p0, Lcom/czhj/sdk/common/models/Config;->mIsGDPRRegion:Z

    iput-boolean p2, p0, Lcom/czhj/sdk/common/models/Config;->disable_boot_mark:Z

    iput-boolean p3, p0, Lcom/czhj/sdk/common/models/Config;->disable_oaid_api:Z

    iput p4, p0, Lcom/czhj/sdk/common/models/Config;->disable_up_oaid:I

    iput p7, p0, Lcom/czhj/sdk/common/models/Config;->max_send_log_records:I

    iput p6, p0, Lcom/czhj/sdk/common/models/Config;->send_log_interval:I

    iput-object p5, p0, Lcom/czhj/sdk/common/models/Config;->log:Ljava/lang/String;

    return-void
.end method
