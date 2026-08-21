.class public Lcom/sigmob/sdk/base/mta/PointEntityClick;
.super Lcom/sigmob/sdk/base/mta/PointEnitySigmobBase;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/mta/PointEnitySigmobBase;-><init>()V

    return-void
.end method


# virtual methods
.method public getClick_duration()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/mta/PointEntityClick;->b:Ljava/lang/String;

    return-object v0
.end method

.method public getIs_valid_click()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/mta/PointEntityClick;->c:Ljava/lang/String;

    return-object v0
.end method

.method public getLocation()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/mta/PointEntityClick;->a:Ljava/lang/String;

    return-object v0
.end method

.method public getPressure()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/mta/PointEntityClick;->e:Ljava/lang/String;

    return-object v0
.end method

.method public getTouchSize()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/mta/PointEntityClick;->f:Ljava/lang/String;

    return-object v0
.end method

.method public getTouchType()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/mta/PointEntityClick;->d:Ljava/lang/String;

    return-object v0
.end method

.method public setClick_duration(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/mta/PointEntityClick;->b:Ljava/lang/String;

    return-void
.end method

.method public setIs_valid_click(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/mta/PointEntityClick;->c:Ljava/lang/String;

    return-void
.end method

.method public setLocation(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/mta/PointEntityClick;->a:Ljava/lang/String;

    return-void
.end method

.method public setPressure(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/mta/PointEntityClick;->e:Ljava/lang/String;

    return-void
.end method

.method public setTouchSize(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/mta/PointEntityClick;->f:Ljava/lang/String;

    return-void
.end method

.method public setTouchType(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/mta/PointEntityClick;->d:Ljava/lang/String;

    return-void
.end method
