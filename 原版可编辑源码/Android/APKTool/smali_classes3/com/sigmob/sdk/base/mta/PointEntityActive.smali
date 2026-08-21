.class public Lcom/sigmob/sdk/base/mta/PointEntityActive;
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

.method public static ActiveTracking(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/sigmob/sdk/base/mta/PointEntityActive;
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/mta/PointEntityActive;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/mta/PointEntityActive;-><init>()V

    const-string v1, "107"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntityActive;->setAc_type(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/mta/PointEntityActive;->setCategory(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntityActive;->setActive_id(Ljava/lang/String;)V

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/base/mta/PointEntityActive;->setDuration(Ljava/lang/String;)V

    invoke-virtual {v0, p3}, Lcom/sigmob/sdk/base/mta/PointEntityActive;->setTimestamp(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/mta/PointEntityActive;->commit()V

    return-object v0
.end method


# virtual methods
.method public getActive_id()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/mta/PointEntityActive;->a:Ljava/lang/String;

    return-object v0
.end method

.method public getDuration()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/mta/PointEntityActive;->b:Ljava/lang/String;

    return-object v0
.end method

.method public setActive_id(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/mta/PointEntityActive;->a:Ljava/lang/String;

    return-void
.end method

.method public setDuration(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/mta/PointEntityActive;->b:Ljava/lang/String;

    return-void
.end method
