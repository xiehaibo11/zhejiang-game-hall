.class public Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;
.super Ljava/lang/Object;
.source "PlatformCallbackEntity.java"


# instance fields
.field private bfOrderId:Ljava/lang/String;

.field private par_value:D

.field private total_fee:D


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 12
    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->par_value:D

    .line 13
    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->total_fee:D

    .line 25
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;DD)V
    .locals 2
    .param p1, "bfOrderId"    # Ljava/lang/String;
    .param p2, "par_value"    # D
    .param p4, "total_fee"    # D

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 12
    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->par_value:D

    .line 13
    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->total_fee:D

    .line 16
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 17
    const-string p1, ""

    .line 19
    :cond_0
    iput-wide p2, p0, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->par_value:D

    .line 20
    iput-wide p4, p0, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->total_fee:D

    .line 21
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->bfOrderId:Ljava/lang/String;

    .line 22
    return-void
.end method


# virtual methods
.method public getBfOrderId()Ljava/lang/String;
    .locals 1

    .line 28
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->bfOrderId:Ljava/lang/String;

    return-object v0
.end method

.method public getPar_value()F
    .locals 2

    .line 32
    iget-wide v0, p0, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->par_value:D

    double-to-float v0, v0

    return v0
.end method

.method public getTotal_fee()F
    .locals 2

    .line 36
    iget-wide v0, p0, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->total_fee:D

    double-to-float v0, v0

    return v0
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 41
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
