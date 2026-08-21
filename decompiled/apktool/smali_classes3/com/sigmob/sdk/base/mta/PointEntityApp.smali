.class public Lcom/sigmob/sdk/base/mta/PointEntityApp;
.super Lcom/sigmob/sdk/base/mta/PointEntitySigmobSuper;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobSuper;-><init>()V

    return-void
.end method


# virtual methods
.method public getApp_name()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/mta/PointEntityApp;->a:Ljava/lang/String;

    return-object v0
.end method

.method public getApp_version()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/mta/PointEntityApp;->d:Ljava/lang/String;

    return-object v0
.end method

.method public getPackage_name()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/mta/PointEntityApp;->b:Ljava/lang/String;

    return-object v0
.end method

.method public getUpdate()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/mta/PointEntityApp;->c:Ljava/lang/String;

    return-object v0
.end method

.method public setApp_name(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/mta/PointEntityApp;->a:Ljava/lang/String;

    return-void
.end method

.method public setApp_version(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/mta/PointEntityApp;->d:Ljava/lang/String;

    return-void
.end method

.method public setPackage_name(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/mta/PointEntityApp;->b:Ljava/lang/String;

    return-void
.end method

.method public setUpdate(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/mta/PointEntityApp;->c:Ljava/lang/String;

    return-void
.end method
