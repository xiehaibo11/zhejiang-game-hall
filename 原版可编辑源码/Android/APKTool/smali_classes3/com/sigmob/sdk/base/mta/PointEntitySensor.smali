.class public final Lcom/sigmob/sdk/base/mta/PointEntitySensor;
.super Lcom/sigmob/sdk/base/mta/PointEnitySigmobBase;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/mta/PointEnitySigmobBase;-><init>()V

    return-void
.end method


# virtual methods
.method public getMotion_after()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/mta/PointEntitySensor;->b:Ljava/lang/String;

    return-object v0
.end method

.method public getMotion_before()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/mta/PointEntitySensor;->a:Ljava/lang/String;

    return-object v0
.end method

.method public getMotion_interval()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/mta/PointEntitySensor;->c:Ljava/lang/String;

    return-object v0
.end method

.method public setMotion_after(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/mta/PointEntitySensor;->b:Ljava/lang/String;

    return-void
.end method

.method public setMotion_before(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/mta/PointEntitySensor;->a:Ljava/lang/String;

    return-void
.end method

.method public setMotion_interval(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/mta/PointEntitySensor;->c:Ljava/lang/String;

    return-void
.end method
