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

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, 0x0

    .line 13
    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->par_value:D

    .line 14
    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->total_fee:D

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;DD)V
    .locals 2

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, 0x0

    .line 2
    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->par_value:D

    .line 3
    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->total_fee:D

    .line 6
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p1, ""

    .line 9
    :cond_0
    iput-wide p2, p0, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->par_value:D

    .line 10
    iput-wide p4, p0, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->total_fee:D

    .line 11
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->bfOrderId:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getBfOrderId()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->bfOrderId:Ljava/lang/String;

    return-object v0
.end method

.method public getPar_value()F
    .locals 2

    .line 1
    iget-wide v0, p0, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->par_value:D

    double-to-float v0, v0

    return v0
.end method

.method public getTotal_fee()F
    .locals 2

    .line 1
    iget-wide v0, p0, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->total_fee:D

    double-to-float v0, v0

    return v0
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
