.class public final Lcom/sigmob/sdk/base/mta/PointEntityAntiSpan;
.super Lcom/sigmob/sdk/base/mta/PointEntitySigmobSuper;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobSuper;-><init>()V

    return-void
.end method


# virtual methods
.method public getWifi_id_list()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/mta/PointEntityAntiSpan;->a:Ljava/lang/String;

    return-object v0
.end method

.method public getWifi_mac_list()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/mta/PointEntityAntiSpan;->b:Ljava/lang/String;

    return-object v0
.end method

.method public setWifi_id_list(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/mta/PointEntityAntiSpan;->a:Ljava/lang/String;

    return-void
.end method

.method public setWifi_mac_list(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/mta/PointEntityAntiSpan;->b:Ljava/lang/String;

    return-void
.end method
