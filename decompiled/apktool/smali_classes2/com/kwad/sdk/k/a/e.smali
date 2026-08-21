.class public final Lcom/kwad/sdk/k/a/e;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Lcom/kwad/sdk/core/b;


# instance fields
.field public aGv:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Float;",
            ">;"
        }
    .end annotation
.end field

.field public sensorType:I

.field public timestamp:J


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/sdk/k/a/e;->sensorType:I

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/k/a/e;->aGv:Ljava/util/List;

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/kwad/sdk/k/a/e;->timestamp:J

    return-void
.end method

.method public static a(Landroid/hardware/SensorEvent;J)Lcom/kwad/sdk/k/a/e;
    .locals 3

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    new-instance v0, Lcom/kwad/sdk/k/a/e;

    invoke-direct {v0}, Lcom/kwad/sdk/k/a/e;-><init>()V

    iget-object v1, p0, Landroid/hardware/SensorEvent;->sensor:Landroid/hardware/Sensor;

    invoke-virtual {v1}, Landroid/hardware/Sensor;->getType()I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/k/a/e;->sensorType:I

    const-wide/16 v1, 0x3e8

    div-long/2addr p1, v1

    iput-wide p1, v0, Lcom/kwad/sdk/k/a/e;->timestamp:J

    iget-object p0, p0, Landroid/hardware/SensorEvent;->values:[F

    array-length p1, p0

    const/4 p2, 0x0

    :goto_0
    if-ge p2, p1, :cond_1

    aget v1, p0, p2

    iget-object v2, v0, Lcom/kwad/sdk/k/a/e;->aGv:Ljava/util/List;

    invoke-static {v1}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v1

    invoke-interface {v2, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 p2, p2, 0x1

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method private a(Lcom/kwad/sdk/k/a/e;Lorg/json/JSONObject;)V
    .locals 2

    if-nez p2, :cond_0

    return-void

    :cond_0
    const-string v0, "sensorType"

    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p1, Lcom/kwad/sdk/k/a/e;->sensorType:I

    const-string v0, "timestamp"

    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p1, Lcom/kwad/sdk/k/a/e;->timestamp:J

    invoke-super {p0, p2}, Lcom/kwad/sdk/core/response/a/a;->afterToJson(Lorg/json/JSONObject;)V

    return-void
.end method

.method private static b(Lcom/kwad/sdk/k/a/e;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/k/a/e;->sensorType:I

    const-string v1, "sensorType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-wide v0, p0, Lcom/kwad/sdk/k/a/e;->timestamp:J

    const-string p0, "timestamp"

    invoke-static {p1, p0, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    return-object p1
.end method


# virtual methods
.method public final afterToJson(Lorg/json/JSONObject;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->afterToJson(Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/sdk/k/a/e;->aGv:Ljava/util/List;

    const-string v1, "values"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/List;)V

    return-void
.end method

.method public final parseJson(Lorg/json/JSONObject;)V
    .locals 0

    invoke-direct {p0, p0, p1}, Lcom/kwad/sdk/k/a/e;->a(Lcom/kwad/sdk/k/a/e;Lorg/json/JSONObject;)V

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/k/a/e;->afterParseJson(Lorg/json/JSONObject;)V

    return-void
.end method

.method public final toJson()Lorg/json/JSONObject;
    .locals 1

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    invoke-static {p0, v0}, Lcom/kwad/sdk/k/a/e;->b(Lcom/kwad/sdk/k/a/e;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/k/a/e;->afterToJson(Lorg/json/JSONObject;)V

    return-object v0
.end method
