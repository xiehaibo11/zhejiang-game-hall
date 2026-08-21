.class public final Lcom/kwad/sdk/core/report/f;
.super Ljava/lang/Object;


# instance fields
.field public aqQ:D

.field public aqR:D

.field public aqS:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "3.3.42"

    iput-object v0, p0, Lcom/kwad/sdk/core/report/f;->aqS:Ljava/lang/String;

    return-void
.end method

.method private static xI()D
    .locals 2

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/f;->xI()D

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)V
    .locals 2

    const-string v0, "minSDKVersion"

    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/f;->aqS:Ljava/lang/String;

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "ratio"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ad_client_error_log"

    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v1, "ratioRE"

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {p2, p1}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;)D

    move-result-wide v0

    goto :goto_0

    :cond_1
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;)D

    move-result-wide v0

    :goto_0
    iput-wide v0, p0, Lcom/kwad/sdk/core/report/f;->aqQ:D

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "ratioApmRL"

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p3

    if-eqz p3, :cond_2

    invoke-virtual {p2, p1}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;)D

    move-result-wide p1

    :goto_1
    iput-wide p1, p0, Lcom/kwad/sdk/core/report/f;->aqR:D

    return-void

    :cond_2
    invoke-static {}, Lcom/kwad/sdk/core/report/f;->xI()D

    move-result-wide p1

    goto :goto_1
.end method
